#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int largest_ss(int arr[],int from);
int dp[21];
int main()
{
int n;

scanf("%d",&n);
int co[n+1];
int cu[n+1];
int pts=0;
for(int i=1;i<=n;i++)
scanf("%d",&co[i]);
while(1){
for(int i=1;i<=n;i++)
{scanf("%d",&cu[i]);
for(int j=1;j<=n;j++)
	if(cu[i]==co[j])
{		{cu[i]=j;
break;}



}
}
for(int i=1;i<=n;i++)
{	dp[i]=-1;}
for(int i=1;i<=n;i++)
{

printf("%d ",cu[i]);
}
	
	dp[0]=0;
	pts=0;
	for(int i=1;i<=n;i++)
	{
pts=max(pts,largest_ss(cu,i));
}
printf("%d\n",pts);



}

}

int largest_ss(int arr[],int from)
{


if(from<1){return 0;}
if(from==1){return 1;}
if(dp[from]!=-1){return dp[from];}
for(int j=1;j<from;j++)
{
if(arr[from]>arr[j])
{

dp[from]=max(dp[from],1+largest_ss(arr,j));
/*
printf("%d-->%d",from,dp[from]);
*/
}
}

return dp[from];

}
