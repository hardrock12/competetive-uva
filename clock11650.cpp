#include<stdlib.h>
#include<stdio.h>

int main()
{
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int h,m,hn,mn;
		scanf("%d:%d",&h,&m);
		//printf("%d",%60);
		m=(m?m:60);
		//printf("%d",m);
		h=(h%12);
		 mn=60-m;
		 hn=12-h-((mn>0)?1:0);
		 hn=hn?hn:12;
		
		printf("%02d:%02d\n",hn,mn);
		
		}
	
	
	
	}
