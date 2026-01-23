#include <stdio.h>
#include <windows.h>

/*this  is a main function
这是一个main函数
*/
void cxk()
{
    char x[] = "蔡徐坤";
    char y[] = "@&*蔡徐坤^#^打篮球很帅";
    //输出字符，\n叫做换行
    printf("%s\n",x);
    printf("%s",y);
};

void str()
{

    //输出字符串,fd……
    //存到了str中
    char str[] ="fdhajlfhd\n";
    printf("%s",str);

};

int main()
{
    SetConsoleOutputCP(65001);
    //send out HelloWorld
    //输出一个世界你好
    printf("HelloWorld\n");
    int b = 69;

    str();
    cxk();
    
    return 0;
};