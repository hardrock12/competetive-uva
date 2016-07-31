#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void solve();
bool g[30001][30001];int n;
int graph(int s,int v[]);
int main()
{
    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    solve();
}
void solve(){
    
    int p;
    int x,z;
    scanf("%d",&n);
    scanf("%d",&p);
    
    int visited[n+1];
    memset(visited,0xff,sizeof(int)*(n+1));
    for(int j=1;j<=n;j++)
    for(int l=1;l<=n;l++)
    	g[j][l]=0;
    
    for(int i=0;i<p;i++)
    {
        scanf("%d",&z);
        scanf("%d",&x);
        g[z][x]=g[x][z]=1;
        visited[z]=0;
        visited[x]=0;
        
    }
    int mm=0;
    for(int b=1;b<=n;b++)
    {
		if(visited[b]==0){
      int u=  graph(b,visited);
        if(mm<u)
        {mm=u;}
	}
    }
    printf("%d\n",mm);
    
}
int graph(int s,int v[])
{
    v[s]=1;
    int sum =0;
    for(int i=1;i<=n;i++)
    {
        if(s!=i&&g[s][i]==1&&v[i]==0)
        { 
            sum+=graph(i,v);
        }
        
    }
    return sum+1;
    
}
