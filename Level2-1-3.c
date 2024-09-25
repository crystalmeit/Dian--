#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int x=-1,index=0;
    int channel[6],price[6],number[6],k_1,channel_[6],price_[6],number_[6];
    char s[6],s_1[6],arrey2[20],arr[20],s_[6];
    printf("please sotre the goods，ATTENTION：通道数最多5个\n");
    while(1)
    {
        x=x+1;
        if(x<5)
        {
            scanf(" %s", s_1);
            if(strcmp(s_1,"END")==0)
            {
                break;
            }
            else
            {
                s[x]=s_1;
                scanf("%d %d %d", &channel[x], &price[x], &number[x]);
            }
        }        
         else 
        {
            printf("通道数已超");
            x=x-1;
            break;
        }
    }





    for(int z=1;z<=(x+1),z++)
    {
        for (int y=0;y<=x,y++)
        {
            if (channel[y]==z)
            {
            s_[z-1]=s[y];
            channel_[z-1]=channel[y];
            price_[z-1]=price[y];
            number_[z-1]=number[y];
            }
        }
    }







    
    for(int j=0;j<=x;j++)
    {
        printf("%d ", channel_[j]);
        for (int i = 1; i <= number_[j]; i++)
            {
                printf("%c", s_[j]);
            }
        printf(" %d\n", price_[j]);
    }
    printf("please enter the type of goods,channel and quantity\n");
    int k, n, e=0;
    char arr;
    while(1)
    {
        buy:
        printf("please continue\n");
        scanf(" %s",&arr);
        scanf("%d %d", &k, &n);
        k_1=k-1;
        number_[k_1]=number_[k_1]-n;
        if(number_[k_1]<0)
        {
            printf("您选择的%c商品储存量不足%d个,请重新选择%c商品",arr,n,arr);
            number_[k_1]=number_[k_1]+n;
            goto buy;
        }
        else
        {
            e =e + n * price_[k_1];
            printf("please choose CONTINUE or END\n");
            scanf( "%19s",arrey2);
            if(strcmp(arrey2,"END")==0)
            {
                break;
            }
            else
            {
                goto buy;
            }
        }
    }
    
    
    printf("需支付e = %d\n", e);
    printf("请投币\n");
    int w = 0;
    int m,d;
    while (w < e)
    {
        scanf("%d", &m);
        if (m==1 || m==2 || m==5)
        {
             w = w + m;
        }
        else
        {
            printf("warning!please insert coins again!");
            w=0;
            continue;
        }
       
    }
    d = w - e;
    printf("d = %d", d);

    return 0;
}