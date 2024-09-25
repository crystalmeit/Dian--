#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int channel[5],price[5],number[5];
    char s[5],t;
    printf("please sotre the goods\n");
    for(int j=0;j<=4;j++)
    {
        scanf("%c", &s[j]);
        scanf("%d %d %d", &channel[j], &price[j], &number[j]);
        printf("%d ", channel[j]);
        for (int i = 1; i <= number; i++)
        {
            printf("%c", s[j]);
        }
        printf(" %d\n", price[j]);
    }
    printf("please enter the type of goods,channel and quantity\n");
    scanf(" %c", &t);
    int k, n, e;
    scanf("%d %d",&k,&n);
    e = n * price;
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