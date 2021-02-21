/*
 * @Author: your name
 * @Date: 2021-02-01 03:19:00
 * @LastEditTime: 2021-02-01 19:46:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Python/home/slime/桌面/CodeStation/Cpp/linux编程/GTK/GTK1.cpp
 */
/*gcc messageBox.c -o main `pkg-config --cflags --libs gtk+-3.0`


*/


#include <time.h>
#include <gtk/gtk.h>
#include <stdlib.h>
int global ;
//char const* cmd="sudo touch a.c|echo \"#include<stdio.h> \n     int main(){\n printf(\"hello world\");\n return0;}          \">a.c ";
//char const* cmd= "  > log.c"; //字符串类型位char const* 


/* 这是一个回调函数*/
void hello( GtkWidget* widget, gpointer data )
{
    
    global++;
    g_print ("%s\n",(gchar *) data);

    time_t curtime = time(NULL);
    char* str={0};//初始化一个指针类型的变量
    char str1[50]={0};
    time(&curtime);
    str=ctime(&curtime);
    printf("当前时间 = %s", str);
    sprintf(str1,"echo \"启动时间%s\" >> log.txt",str);
    system(str1);//自定义需要的功能 ，点击一次执行一次
}



gint delete_event( GtkWidget *widget, GdkEvent  *event, gpointer   data )
{
    /* 如果你的 "delete_event" 信号处理函数返回 FALSE，GTK 会发出 "destroy" 信号。
     * 返回 TRUE，你不希望关闭窗口。
     * 当你想弹出“你确定要退出吗?”对话框时它很有用。*/

    g_print ("delete event occurred\n");

    /* 改 TRUE 为 FALSE 程序会关闭。*/
    // int yes;
    // printf("是否退出：（yes==1）");
    // scanf("%d",&yes);
    // if(yes==1){
    //     return FALSE;
    // }
    time_t curtime = time(NULL);
    char* str={0};//初始化一个指针类型的变量
    char str1[50]={0};
    time(&curtime);
    str=ctime(&curtime);
    printf("当前结束时间 = %s", str);
    sprintf(str1,"echo \"结束时间%s\" >> log.txt",str);
    system(str1);//自定义需要的功能 ，点击一次执行一次
    return FALSE;
    // else{
    // return TRUE;
    // }
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
    char buttonname0[]="按键1";  //定义按键的名字
    char buttonname1[]="按键2";
    char buttonname2[]="按键3";
    char gtk_click0[]="用户1";   //定义点击按钮控制台输出
    char gtk_click1[]="用户2";
    char gtk_click2[]="用户3";
    

    /* GtkWidget 是构件的存储类型    这里定义了两个gtkwidget指针型的变量*/
    GtkWidget* window;
    GtkWidget* button;
    GtkWidget* box1;


    /* 这个函数在所有的 GTK 程序都要调用。参数由命令行中解析出来并且送到该程序中*/
    gtk_init(&argc, &argv);
    /* 创建一个新窗口 */
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);


    /* 设置title文字，注意UTF8格式的文字转换，否则是乱码*/
    gtk_window_set_title(GTK_WINDOW (window), g_locale_to_utf8(titlename,-1,NULL,NULL,NULL));


     /* 设置窗口边框的宽度。*/
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);
    /*设置大小*/
    gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

    /* 创建一个标签为 "button" 的新按钮。*/
    // button = gtk_button_new_with_label (buttonname);
// #if 1
//     /* 当按钮收到 "clicked" 信号时会调用 hello() 函数，并将NULL传给
//      * 它作为参数。hello() 函数在前面定义了。*/
//     g_signal_connect (G_OBJECT (button), "clicked",G_CALLBACK (hello), (gpointer)gtk_name);
// #else
//  /* 当点击按钮时，会通过调用 gtk_widget_destroy(window) 来关闭窗口。
//      * "destroy" 信号会从这里或从窗口管理器发出。*/
//      g_signal_connect_swapped (G_OBJECT (button), "clicked",G_CALLBACK (gtk_widget_destroy),window);
// #endif
//     /* 把按钮放入窗口 (一个 gtk 容器) 中。*/
//     gtk_container_add (GTK_CONTAINER (window), button);
//     /* 最后一步是显示新创建的按钮*/
//    gtk_widget_show (button);






      gtk_container_set_border_width (GTK_CONTAINER (window), 10);

    /* 我们创建了一个组装盒。详情参见“组装”章节。我们看不见组装盒,它仅被作为排列构件的工具。*/
#if 0
    box1 = gtk_hbox_new (FALSE, 1); //GTK2.0支持
#else
    box1 =gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);//GTK3.0推荐
#endif
    /* 把组装盒放入主窗口中。*/
    gtk_container_add (GTK_CONTAINER (window), box1);

    /* 创建一个标签为 "button" 的新按钮。*/
    button = gtk_button_new_with_label (buttonname0);

    /* 当按钮收到 "clicked" 信号时会调用 hello() 函数，并将NULL传给
     * 它作为参数。hello() 函数在前面定义了。*/
    g_signal_connect (G_OBJECT (button), "clicked",
                      G_CALLBACK (hello), gtk_click0);
    /* 把按钮放入窗口 (一个 gtk 容器) 中。*/
    gtk_container_add (GTK_CONTAINER (box1), button);
    /* 显示新创建的按钮*/
    gtk_widget_show (button);


    /* 创建一个标签为 "button" 的新按钮。*/
    button = gtk_button_new_with_label (buttonname1);

    /* 当按钮收到 "clicked" 信号时会调用 hello() 函数，并将NULL传给
     * 它作为参数。hello() 函数在前面定义了。*/
    g_signal_connect (G_OBJECT (button), "clicked",
                      G_CALLBACK (hello), gtk_click1);
    /* 把按钮放入窗口 (一个 gtk 容器) 中。*/
    gtk_container_add (GTK_CONTAINER (box1), button);
    /* 显示新创建的按钮*/
    gtk_widget_show (button);


    /* 创建一个标签为 "button" 的新按钮。*/
    button = gtk_button_new_with_label (buttonname2);

    /* 当按钮收到 "clicked" 信号时会调用 hello() 函数，并将NULL传给
     * 它作为参数。hello() 函数在前面定义了。*/
    g_signal_connect (G_OBJECT (button), "clicked",
                      G_CALLBACK (hello), gtk_click2);
#if 0
    /* 把按钮放入窗口 (一个 gtk 容器) 中。*/
    gtk_container_add (GTK_CONTAINER (box1), button);
#else
    /* 代替 gtk_container_add,我们把按钮放入不可见的组装盒,该组合盒已经组装进窗口中了。*/
    gtk_box_pack_start (GTK_BOX(box1), button, TRUE, TRUE, 0);
#endif



    gtk_widget_show (button);
    gtk_widget_show (box1);
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