/*
 * @Descripttion: 写一些初始化的函数
 * @version: 
 * @Author: myc
 * @Date: 2021-02-03 01:35:18
 */

int init(int argc, char const *argv[])
{
    char const*  str1="help";
    if (argc==1)
    {
        return 0;
    }
    else if (argc==2)
    {
        //printf("The argument supplied is %s\n", argv[1]);

        if (strcmp(argv[1],str1)==0)
        {
            printf("usage   It's not defined yet  \n");
            return 0;
        }
        else
        {
            printf("Wrong usage\n");
            return 1;
        }
        
    }
    
    
    

    //printf("");
    return 0;
}
