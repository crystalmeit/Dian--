#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int channel[6],price[6],number[6],k_1;
    char s[6],arrey[20];
    printf("please sotre the goods\n");
    for(int j=0;j<=4;j++)
    {
        scanf(" %c", &s[j]);
        scanf("%d %d %d", &channel[j], &price[j], &number[j]);
        printf("please continue\n");
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
    int k, n, e=0;
    char arr;
    while(1)
    {
        buy:
        printf("please continue\n");
        scanf(" %s",&arr);
        scanf("%d %d", &k, &n);
        k_1=k-1;
        e =e + n * price[k_1];
        printf("please choose CONTINUE or END\n");
        scanf( "%19s",arrey);
        if(strcmp(arrey,"END")==0)
        {
            break;
        }
        else
        {
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