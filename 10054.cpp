#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<string.h>
using namespace std;
pair<int,int>b;

typedef pair<int,int> pii;
typedef pair<pair<int,int>,int>  pi;
vector<pair<pair<int,int>,int> > beads;
vector<struct ji> avail;
vector<int> r1;
vector<int> r2;
int beads[51][51];
int choose(int current,int size);
void solve(int t);
int main()
{


int t;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{

solve(i);

}

}

int a,b;
void solve(int t)
{
r1.clear();
r2.clear();
for(int i=0;i<51;i++)
{
for(int j=0;j<51;j++)
{
beads[i][j]=0;
}

}
int n;
scanf("%d",&n);
bitset<51> foo;
for(int i=0;i<n;i++)
{


scanf("%d%d",&a,&b);
beads[a][b]++;
beads[b][a]++;

foo.flip(a);
foo.flip(b);

}


if(foo.any())
{
printf("Case #%d\n",t);
 printf("some beads may be lost");


}else{
  beads[a][b]--;
 beads[b][a]--;
 if(choose(b,n-1)==-1)
 {
 printf("Case #%d\n",t);
 printf("some beads may be lost");
 
 
 
 }
 else{


 printf("Case #2\n");
  r1.push_back(a);
 r2.push_back(b);
 for(int i=0;i<r1.size();i++)
 {
 printf("%d %d\n",r2[i],r1[i]);
 
 }
 
 
 }
 }
printf("\n");

}

int choose(int current,int size)
{
if(size==1)
{
if(current==a)
{beads[current][a]--;}
if(beads[current][a]!=1)
{
return -1;
}
else{

r1.push_back(current);
r2.push_back(a);
return 1;
}}

int j=1;
while(j<51)
{if(beads[current][j]>0)
{
//printf("-->%d",j);

beads[current][j]--;
beads[j][current]--;
if(choose(j,size-1)==1)
{
r1.push_back(current);
r2.push_back(j);
return 1;

}
else{beads[current][j]++;

beads[j][current]++;
}


}
j++;
}

return -1;

}


