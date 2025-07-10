#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int n,e;
bool vis[100];
int par[100];
int child[100];
vector<int>v1;
int cnt=0;
void dfs(int src)
{
   vis[src]=true;
    v1.push_back(src);
  for(auto child:v[src])
  {
     if(vis[child]==false){
       dfs(child);
       cnt++;
     }

  }
}
int main()
{  cin>>n>>e;
   while(e--){
       int a,b;
       cin>>a>>b;
       v[a].push_back(b);
       v[b].push_back(a);
   }
   memset(vis,false,sizeof(vis));
   memset(par,-1,sizeof(par));

   for(int i=0;i<n;i++){
      dfs(i);
   }
   cout<<"Connected Components are: "<<cnt<<endl;

}

