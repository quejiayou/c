#include "num2.h"
void page()
{
    printf("************************\n");
    printf("******     2048   ******\n");
    printf("******   1.开始   ******\n");
    printf("******   0.退出   ******\n");
    printf("************************\n");

}
void advocate()
{
    //初始化数组并随机两个初始数 2 
    int num[ROW][COL] = {0}; 
    initialize(num, ROW, COL);
    //打印棋盘
    printf("            grade: 0\n");
    print(num, ROW, COL);
    //向左移动
   // move(num, ROW, COL);
    int n = 1;
    while (n)
    {
        //输入
        char arr = cat(num, ROW, COL);
        //刷新
        system("cls");
        //向其他方向移动
        rotate(num,arr, ROW, COL);
        //每动一次随机一个2或者4
        random(num, ROW, COL);      
        //打印
        print(num, ROW, COL);
        //判断输赢
        n = judge(num, ROW, COL);
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    int n = 0;    
    do
    {
        page();
        scanf_s("%d", &n);
        switch (n)
        {
        case 1:
            //主程序
            system("cls");
            advocate();
            break;
        case 0:
            system("cls");
            printf("《游戏退出》\n");
            break;
        default:
            printf("《重新输入》\n");
        }
    } while (n);   
    return 0;
}