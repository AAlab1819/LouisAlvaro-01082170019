#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int m=0;
int n=0;
int num=0;
int id=0;
int dirx[]={-1,0,1,0};
int diry[]={0,1,0,-1};
const int q=1010;
char map[q][q];
int vis[q][q],ans[q*q];
void dfs(int x,int y)
{
	vis[x][y]=id;
	for(int i=0;i<4;++i)
	{
		int dx=x+dirx[i];
		int dy=y+diry[i];
		if(dx>0&&dx<=n&&dx>0&&dy<=m&&!vis[dx][dy])
		{
			if(map[dx][dy]=='*')num++;
			else dfs(dx,dy);
		}
	}
}
int main()
{
	int t;
	cin>>n>>m>>t;
	int i,j,k;
	for(int i=1;i<=n;++i){
        cin>>map[i]+1;
        id=0;
        memset(vis,0,sizeof(vis));
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			if(map[i][j]=='.'&&!vis[i][j])
			{
				num=0,++id,dfs(i,j),ans[id]=num;
			}
		}
	}
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		cout<<ans[vis[a][b]]<<endl;
	}
	return 0;
}
