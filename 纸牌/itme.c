#include "acc.h"
void number()
{
    printf("����(Spade)������(Heart)������(Diamond)��÷��(Club)\n\n");
    printf("һ����52����:");
    char arr[ROW][COL] = {0};
    char arr1[ROW][COL] = { 0 };//ϴ����֮��
    //��ʼ���ƶ�
    prim(arr, ROW,COL);
    //���ϴ��
    pret(arr,arr1, ROW, COL);
    //���з���ÿ�������ţ��ܹ��ĸ���
    our(arr1, ROW, COL, GOU);
    
}
int main()
{
    srand((unsigned int)time(NULL));
    number();
    return 0;
}