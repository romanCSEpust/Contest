#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
char a[20][20];
int n,m;
bool vis[20][20];
vector<int>v1;
int cnt=0;
bool valid(int i, int j)
{
    if(i>=0 && i<n && j>=0 && j<m && a[i][j]==1)
        return true;
    else
        return false;
}
void dfs(int si, int sj)
{
    vis[si][sj]=true;
    cout<<si<<" "<<sj<<endl;

    for(int i=0; i<4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj] == false)
        {
            dfs(ci,cj);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int si,sj;
    cin>>si>>sj;
    dfs(si,sj);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(vis[i][j])
            {
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}
