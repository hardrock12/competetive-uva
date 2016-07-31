#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char map[101][101];
int dfs();
int r=0,c=0;
int main()
{
int t;
scanf("%d",&t);
while(t)
{
char ch;
char cell;
r=c=1;

scanf("%c",&ch);
scanf("%s",&map[1][1]);
 c=strlen(&map[1][1]);
r++;
while(1)
{
scanf("%c",&cell);
if(cell>='0'&&cell<='9')
{break;}
map[r][1]=cell;
int i;
for( i=2;i<=c;i++)
{
map[r][i]=cell;

}
r++;
}

int q1=0,q2=0;

q1+=(cell-'0');
scanf("%c",&cell);

while(cell!=' ');{

q1*=10;
q1+=(cell-'0');
scanf("%c",&cell);
}

scanf("%d",&q2);

printf("%d\n",dfs(q1,q2));
while(1)
{
char input[100];
scanf("%s",input);
if(strcmp(input,"")==0)
{
break;
}
sscanf("%d %d",input,&q1,&q2);
printf("%d\n",dfs(q1,q2));

}


printf("\n");
t--;
}

return 0;
}

int dfs(int x,int y)
{
map[x][y]='j';
int dx[]={0,1,-1};
int dy[]={0,1,-1};
int space=0,i,j;
for( i=0;i<3;i++)
for(j=0;j<3;j++){
int nb=x+dx[i];
int mb=y+dy[j];
if(i>0&&j>0&&i<=c&&j<r&&!(i==0&&j==0)&&map[nb][mb]=='L')
{
space+=dfs(nb,mb);

}

}

return space+1;
}
