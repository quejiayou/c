#include <stdio.h>
int main()
{   
    printf("        <<****欢迎来到快餐店****>>\n");
    printf("\n");
    printf("          ★  菜单  ★     \n");
    printf("——————————————————————————————\n");
    printf("   主食       小吃      饮料  |\n");
    printf("1.汉堡13元 2.薯条6元 3.可乐5元|\n");
    printf("4.鸡腿12元 5.鸡翅6元 6.橙汁6元|\n");
    printf("7.鸡排11元 8.色拉4元 9.咖啡8元|\n");
    printf("10.套餐:主食+小吃+饮料 优惠3元|\n");
    printf("11.套餐:汉堡+饮料      优惠2元|\n"); 
    printf("                              |\n");   
    printf("                注: 套餐可叠加|\n");
    printf("——————————————————————————————\n\n");
 
    printf("请输入序号点餐 输入'0'确认点餐\n\n");
 
    int x,i;
    int max=0;
    int a[3]={0};
    int b[2]={0};
    int n[11]={0};
    int m,f=1;
    do
    {
       scanf("%d",&x);      
       switch(x)
       {
         case 0:break;
         case 1:
           max+=13;
           n[0]++;
           break;
         case 2:
           max+=6;
           n[1]++;
           break;
         case 3:
           max+=5;
           n[2]++;
           break;
         case 4:
           max+=12;
           n[3]++;
           break;
         case 5:
           max+=6;
           n[4]++;
           break;
         case 6:
           max+=6;
           n[5]++;
           break;
         case 7:
           max+=11;
           n[6]++;
           break;
         case 8:
           max+=4;
           n[7]++;
           break;
         case 9:
           max+=8;
           n[8]++;
           break;
         case 10:
              printf("请选择 主食+小吃+饮料:\n");
              n[9]++;
           for(int i=0; i<3; i++)
           {
               scanf("%d",&a[i]);                             
                   switch(a[i])  
                   {
                      case 1:
                        max+=13;
                        a[i]=1;
                        break;
                      case 2:
                        max+=6;
                        a[i]=2;
                        break;
                      case 3:
                        max+=5;
                        a[i]=3;
                        break;
                      case 4:
                        max+=12;
                        a[i]=4;
                        break;
                      case 5:
                        max+=6;
                        a[i]=5;
                        break;
                      case 6:
                        max+=6;
                        a[i]=6;
                        break;
                      case 7:
                        max+=11;
                        a[i]=7;
                        break;
                      case 8:
                        max+=4;
                        a[i]=8;
                        break;
                      case 9:
                        max+=8;
                        a[i]=9;
                        break;
                   }
                   if(i==2)                                    
                  { 
                    max-=3; 
                    printf("请继续点餐\n");
                  }
 
           }
           break;
         case 11: 
            printf("请选择 汉堡+饮料:\n");
            n[10]++;
           for(int i=0; i<2; i++)
           {
               scanf("%d",&b[i]);                             
                   switch(b[i])  
                   {
                      case 1:
                        max+=13;
                        b[i]=1;
                        break;
                      case 2:
                        max+=6;
                        b[i]=2;
                        break;
                      case 3:
                        max+=5;
                        b[i]=3;
                        break;
                      case 4:
                        max+=12;
                        b[i]=4;
                        break;
                      case 5:
                        max+=6;
                        b[i]=5;
                        break;
                      case 6:
                        max+=6;
                        b[i]=6;
                        break;
                      case 7:
                        max+=11;
                        b[i]=7;
                        break;
                      case 8:
                        max+=4;
                        b[i]=8;
                        break;
                      case 9:
                        max+=8;
                        b[i]=9;
                        break;
                   }
                   if(i==1)
                  {
                   max-=2; 
                   printf("请继续点餐\n");
                  } 
           }
           break;
           default:printf("请重新输入：\n");break;                       
       }       
    }while(x!=0);  
 
    if(max>=39)
    {
        printf("您的消费满39元,是否加一元换购色拉,薯条,可乐任意一个\n");
        printf("是请输入1,否请输入0\n");
        scanf("%d",&m);
        if(m==1)
        {
           printf("选择1.色拉,2.薯条,3,可乐\n");
           scanf("%d",&m);
        }
        f=0;
    }            
    printf("\n");  
 
    if(f==0||f==1)
    {
     printf("         ～～～ 账单～～～    \n");
        for(i=0; i<n[0]; i++)
        {            
        }                      
        if(i>=1)
            {
              printf("               汉堡13元*%d个\n",i);
            }                             
        for(i=0; i<n[1]; i++)
        {            
        }
        if(i>=1)
            {
              printf("               薯条6元*%d个\n",i);
            } 
 
        for(i=0; i<n[2]; i++)
        {            
        }
        if(i>=1)
            {
              printf("               可乐5元*%d杯\n",i);
            }
 
        for(i=0; i<n[3]; i++)
        {            
        }
        if(i>=1)
            {
              printf("               鸡腿13元*%d个\n",i);
            }
 
        for(i=0; i<n[4]; i++)
        {            
        }
        if(i>=1)
            {
              printf("               鸡翅6元*%d个\n",i);
            }
 
         for(i=0; i<n[5]; i++)
        {            
        }
        if(i>=1)
            {
              printf("               橙汁6元*%d杯\n",i);
            }
 
        for(i=0; i<n[6]; i++)
        {            
        }
        if(i>=1)
            {
              printf("               鸡排11元*%d个\n",i);
            }
 
        for(i=0; i<n[7]; i++)
        {            
        }
        if(i>=1)
            {
              printf("               色拉4元*%d个\n",i);
            }
 
         for(i=0; i<n[8]; i++)
        {            
        }
        if(i>=1)
            {
              printf("               咖啡8元*%d个\n",i);
            }
 
         for(i=0; i<n[9]; i++)
        {            
        }
        if(i>=1)
            {
              printf("          套餐一:");
              for(int j=0; j<3; j++)
              {
                switch(a[j])
                {
                   case 1:printf("汉堡");break;
                   case 2:printf("薯条");break;
                   case 3:printf("可乐");break;
                   case 4:printf("鸡腿");break;
                   case 5:printf("鸡翅");break;
                   case 6:printf("橙汁");break;
                   case 7:printf("鸡排");break;
                   case 8:printf("色拉");break;
                   case 9:printf("咖啡");break;
                }
                if(j!=2)
                {
                  printf("+");
                }
              }
              printf("\n");
            }
 
        for(i=0; i<n[10]; i++)
        {            
        }
        if(i>=1)
            {
              printf("            套餐二:");
              for(int j=0; j<2; j++)
              {
                switch(b[j])
                {
                   case 1:printf("汉堡");break;
                   case 2:printf("薯条");break;
                   case 3:printf("可乐");break;
                   case 4:printf("鸡腿");break;
                   case 5:printf("鸡翅");break;
                   case 6:printf("橙汁");break;
                   case 7:printf("鸡排");break;
                   case 8:printf("色拉");break;
                   case 9:printf("咖啡");break;
                }
                if(j!=1)
                {
                  printf("+");
                }
              }
              printf("\n");
            }
 
        if(m==1)
        {
          printf("               限购色拉1元\n");
          max++;
        } 
        else if(m==2) 
        {
          printf("               限购薯条1元\n");
          max++;
        } 
        else if(m==3)  
        {
          printf("               限购可乐1元\n");
          max++;
        }         
          printf("                总金额%d元\n",max);  
    }
 
    return 0;
}
