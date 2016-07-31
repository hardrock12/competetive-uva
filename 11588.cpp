#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int maps['Z'+1];
int  main()
{
int r,c,m,n,t;
cin>>t;
int case1=0;
while(case1<t)
{
cin>>r>>c>>m>>n;
memset(maps,0x0,sizeof(int)*('Z'+1));
for(int i=0;i<r;i++)
{char ji;
	scanf("%c",&ji);
for(int j=0;j<c;j++)
{
char ch;
scanf("%c",&ch);
maps[ch]++;
//cout<<ch;


}


}
int md=-1;
int coun=0;
for(int i='A';i<'Z'+1;i++){
	if(maps[i]>md){md=maps[i];coun=md;
		
		}
	
	else if(maps[i]==md){coun+=md;}
}
//cout<<coun;
cout<<"Case "<<case1+1<<": "<<m*coun+n*(r*c-coun)<<"\n";
case1++;}


return 0;

}
