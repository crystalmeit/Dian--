#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    int a,b,c;
    printf("����������������ࡢ�������ڵ�ͨ����š����ﵥ�ۡ��������\n");
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
