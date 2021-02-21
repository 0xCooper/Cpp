/*gcc messageBox.c -o main `pkg-config --cflags --libs gtk+-3.0`


*/
#include <gtk/gtk.h>
#include <stdlib.h>
int global ;
char const* cmd="echo hello"; //字符串类型位char const* 


/* 这是一个回调函数*/
void hello( GtkWidget* widget, gpointer data )
{
    
    global++;
    g_print ("%s%d\n",(gchar *) data,global);
    system(cmd);//自定义需要的功能 ，点击一次执行一次
}



gint delete_event( GtkWidget *widget, GdkEvent  *event, gpointer   data )
{
    /* 如果你的 "delete_event" 信号处理函数返回 FALSE，GTK 会发出 "destroy" 信号。
     * 返回 TRUE，你不希望关闭窗口。
     * 当你想弹出“你确定要退出吗?”对话框时它很有用。*/

    g_print ("delete event occurred\n");

    /* 改 TRUE 为 FALSE 程序会关闭。*/
    int yes;
    printf("是否退出：（yes==1）");
    scanf("%d",&yes);
    if(yes==1){
        return FALSE;
    }
    //return FALSE;
    else{
    return TRUE;
    }
}



/* 一个结束回调函数 */
void destroy( GtkWidget *widget, gpointer   data )
{
    g_print ("destroy event \n");
    gtk_main_quit ();
}






int gtk(int argc, char *argv[])
{   
    char titlename[]="Start"; //定义我窗口的名字
    char buttonname[]="按键";  //定义按键的名字
    char gtk_name[]="新用户";   //定义点击按钮控制台输出


    /* GtkWidget 是构件的存储类型    这里定义了两个gtkwidget指针型的变量*/
    GtkWidget* window;
    GtkWidget* button;



    /* 这个函数在所有的 GTK 程序都要调用。参数由命令行中解析出来并且送到该程序中*/
    gtk_init(&argc, &argv);
    /* 创建一个新窗口 */
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);


    /* 设置title文字，注意UTF8格式的文字转换，否则是乱码*/
    gtk_window_set_title(GTK_WINDOW (window), g_locale_to_utf8(titlename,-1,NULL,NULL,NULL));


     /* 设置窗口边框的宽度。*/
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);

    /* 创建一个标签为 "button" 的新按钮。*/
    button = gtk_button_new_with_label (buttonname);
#if 1
    /* 当按钮收到 "clicked" 信号时会调用 hello() 函数，并将NULL传给
     * 它作为参数。hello() 函数在前面定义了。*/
    g_signal_connect (G_OBJECT (button), "clicked",G_CALLBACK (hello), (gpointer)gtk_name);
#else
 /* 当点击按钮时，会通过调用 gtk_widget_destroy(window) 来关闭窗口。
     * "destroy" 信号会从这里或从窗口管理器发出。*/
     g_signal_connect_swapped (G_OBJECT (button), "clicked",G_CALLBACK (gtk_widget_destroy),window);
#endif


    /* 把按钮放入窗口 (一个 gtk 容器) 中。*/
    gtk_container_add (GTK_CONTAINER (window), button);
    /* 最后一步是显示新创建的按钮*/
    gtk_widget_show (button);






    /* 最后一步是显示新创建的窗口 */
    gtk_widget_show(window);


   
       /* 当窗口收到 "delete_event" 信号 (这个信号由窗口管理器发出，通常是“关闭”
     * 选项或是标题栏上的关闭按钮发出的)，我们让它调用在前面定义的 delete_event() 函数。
     * 传给回调函数的 data 参数值是 NULL，它会被回调函数忽略。*/
    g_signal_connect (G_OBJECT (window), "delete_event",
                      G_CALLBACK (delete_event), NULL);


     /*结束事件*/
    g_signal_connect(window, "destroy", G_CALLBACK(destroy), NULL);

    /* 所有的 GTK 程序必须有一个 gtk_main() 函数。程序运行停在这里
     * 等待事件 (如键盘事件或鼠标事件) 的发生。*/
    gtk_main();
    return 0;
}








/*主函数*/
int main(int argc, char* argv[]){

    gtk(argc,argv);//gtk的返回值为0时正常实行，可以写一个判断

}