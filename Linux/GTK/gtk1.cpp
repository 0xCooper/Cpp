/*
 * @Author: your name
 * @Date: 2021-01-30 17:05:35
 * @LastEditTime: 2021-02-01 17:47:43
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /Python/home/slime/桌面/CodeStation/Cpp/linux编程/GTK/gtk1.cpp
 */
#include <gtk/gtk.h>

/* 这是一个回调函数*/
void hello( GtkWidget *widget, gpointer   data )
{
    g_print ("Hello World  %s\n",(gchar *) data);
}

gint delete_event( GtkWidget *widget, GdkEvent  *event, gpointer   data )
{
    /* 如果你的 "delete_event" 信号处理函数返回 FALSE，GTK 会发出 "destroy" 信号。
     * 返回 TRUE，你不希望关闭窗口。
     * 当你想弹出“你确定要退出吗?”对话框时它很有用。*/

    g_print ("delete event occurred\n");

    /* 改 TRUE 为 FALSE 程序会关闭。*/

    return FALSE;
}

/* 一个回调函数 */
void destroy( GtkWidget *widget, gpointer   data )
{
    g_print ("destroy event \n");
    gtk_main_quit ();
}

int main( int   argc, char *argv[] )
{
    /* GtkWidget 是构件的存储类型 */
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *box1;
    /* 这个函数在所有的 GTK 程序都要调用。参数由命令行中解析出来并且送到该程序中*/
    gtk_init (&argc, &argv);

    /* 创建一个新窗口 */
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);


    /* 设置title文字，注意UTF8格式的文字转换，否则是乱码*/
    gtk_window_set_title(GTK_WINDOW (window), g_locale_to_utf8("你好",-1,NULL,NULL,NULL));
    gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

    /* 当窗口收到 "delete_event" 信号 (这个信号由窗口管理器发出，通常是“关闭”
      * 选项或是标题栏上的关闭按钮发出的)，我们让它调用在前面定义的 delete_event() 函数。
      * 传给回调函数的 data 参数值是 NULL，它会被回调函数忽略。*/
    g_signal_connect (G_OBJECT (window), "delete_event",
                      G_CALLBACK (delete_event), NULL);


    /* 在这里我们连接 "destroy" 事件到一个信号处理函数。
      * 对这个窗口调用 gtk_widget_destroy() 函数或在 "delete_event" 回调函数中返回 FALSE 值
      * 都会触发这个事件。*/
    g_signal_connect (G_OBJECT (window), "destroy",
                      G_CALLBACK (destroy), NULL);

    /* 设置窗口边框的宽度。*/
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
    button = gtk_button_new_with_label ("button");

    /* 当按钮收到 "clicked" 信号时会调用 hello() 函数，并将NULL传给
     * 它作为参数。hello() 函数在前面定义了。*/
    g_signal_connect (G_OBJECT (button), "clicked",
                      G_CALLBACK (hello), (gpointer)"1");
    /* 把按钮放入窗口 (一个 gtk 容器) 中。*/
    gtk_container_add (GTK_CONTAINER (box1), button);
    /* 显示新创建的按钮*/
    gtk_widget_show (button);


    /* 创建一个标签为 "button" 的新按钮。*/
    button = gtk_button_new_with_label ("button");

    /* 当按钮收到 "clicked" 信号时会调用 hello() 函数，并将NULL传给
     * 它作为参数。hello() 函数在前面定义了。*/
    g_signal_connect (G_OBJECT (button), "clicked",
                      G_CALLBACK (hello), (gpointer)"2");
    /* 把按钮放入窗口 (一个 gtk 容器) 中。*/
    gtk_container_add (GTK_CONTAINER (box1), button);
    /* 显示新创建的按钮*/
    gtk_widget_show (button);


    /* 创建一个标签为 "button" 的新按钮。*/
    button = gtk_button_new_with_label ("button");

    /* 当按钮收到 "clicked" 信号时会调用 hello() 函数，并将NULL传给
     * 它作为参数。hello() 函数在前面定义了。*/
    g_signal_connect (G_OBJECT (button), "clicked",
                      G_CALLBACK (hello), (gpointer)"3");
#if 0
    /* 把按钮放入窗口 (一个 gtk 容器) 中。*/
    gtk_container_add (GTK_CONTAINER (box1), button);
#else
    /* 代替 gtk_container_add,我们把按钮放入不可见的组装盒,该组合盒已经组装进窗口中了。*/
    gtk_box_pack_start (GTK_BOX(box1), button, TRUE, TRUE, 0);
#endif
    /* 显示新创建的按钮*/
    gtk_widget_show (button);

    gtk_widget_show (box1);
    /* 最后一步是显示新创建的窗口 */
    gtk_widget_show (window);

    /* 所有的 GTK 程序必须有一个 gtk_main() 函数。程序运行停在这里
     * 等待事件 (如键盘事件或鼠标事件) 的发生。*/
    gtk_main ();

    return 0;
}