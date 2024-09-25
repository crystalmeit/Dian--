#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int a,b,c;
    printf("请依次输入货物种类、货物所在的通道标号、货物单价、货物个数\n");
    scanf("%c",&s);
    scanf("%d %d %d",&a,&b,&c);
    printf("%d:",a);
    for (int i=1;i<=c;i++)
    {
        printf("%c",s);
    }
    printf(" %d",b);
    return 0;
}
