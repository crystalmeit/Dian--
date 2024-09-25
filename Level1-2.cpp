#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w,k=0,m,d;
	printf("温馨提示\n");
	scanf("%d",&w);
	printf("请投币\n");
	while(k<w)
	{
		scanf("%d",&m);
		k=k+m;
	}
	d=k-w; 
	printf("%d",d);
	return 0;
}
