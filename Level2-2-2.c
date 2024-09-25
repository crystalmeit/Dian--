#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int channel[6],price[6],number[6],k_1;
    char c[20],s[6],arrey[20];
    printf("please store the good\n");
    for(int j=0;j<=4;j++)
    {
        scanf("%s",c);
        if (strcmp(c,"END")==0)
        {
            break;
        }
        else
        {
            s[j]=c;
            scanf("%d %d %d", &channel[j], &price[j], &number[j]);
            printf("please continue\n");

        }
    }
    for(int j=0;j<=4;j++)
    {
        printf("%d ", channel[j]);
        for (int i = 1; i <= number[j]; i++)
            {
                printf("%c", s[j]);
            }
        printf(" %d\n", price[j]);
    }
    printf("please enter the type of goods,channel and quantity\n");
    int k, n, e=0,x=0;
    char arr;
    while(1)
    {
        buy:
        scanf(" %s",&arr);
        scanf("%d %d", &k, &n);
        while(k!=channel[x])
        {
            x++;
        }
        number[x]=number[x]-n;
        if(number[x]<0)
        {
            printf("您选择的%c商品储存量不足%d个,请重新选择%c商品",arr,n,arr);
            number[x]=number[x]+n;
            goto buy;
        }
        else
        e =e + n * price[x];
        printf("please choose CONTINUE or END or BACK\n");
        scanf( "%19s",arrey);
        if(strcmp(arrey,"END")==0)
        {
            break;
        }
        else if (strcmp(arrey,"CONTINUE")==0)
        {
            goto buy;
        }
        else if (strcmp(arrey,"BACK")==0)
        {
            printf("\033[1A");
            printf("\33[2K");
            printf("\033[1A");
            printf("\33[2K");
            printf("\033[1A");
            printf("\33[2K");
            number[x]=number[x]+n;
            e =e - n * price[x];
            goto buy;
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