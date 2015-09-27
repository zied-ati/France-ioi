#include <bits/stdc++.h>
#define N 2001
#define M 51
#define INF 0x3f3f3f3f
#define DIR 3 
using namespace std;

typedef pair<int,int> ii;

int tab[N][M];
ii  sum[N][M];
int n,m,s;
int dir[DIR]={0,-1,1};

bool Compare(vector<int> &a, vector<int> &b)
{
  for(int i=0;i<b.size();++i)
  {
    if(a[i]==0 && (b[i]==-1 || b[i]==1))
      return false;
    else if(b[i]==0 && (a[i]==-1 || a[i]==1))
      return true;
    else if(b[i]==-1 && a[i]==1)
      return true;
    else if(a[i]==-1 && b[i]==1)
      return false;
  }
  return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>s;
    n--;
    for(int i=n;i>=0;--i)
      for(int j=0;j<m;++j)
        cin>>tab[i][j];
    for(int i=0;i<=n;++i)
    {
      for(int j=0;j<=m;++j)
      {
        sum[i][j].first=-INF;
        sum[i][j].second=3;
      }
    }
    for(int i=0;i<DIR;++i)
    {
      if(s+dir[i]>=0 && s+dir[i]<m)
      {
        sum[1][s+dir[i]].first=tab[1][s+dir[i]];
        sum[1][s+dir[i]].second=dir[i];
      }
    }
    for(int i=1;i<=n-1;++i)
    {
      for(int j=0;j<m;++j)
      {
        if(sum[i][j].first!=-INF)
        {
          for(int k=0;k<DIR;++k)
          {
            if(j+dir[k]>=0 && j+dir[k]<m)
            {
              if(sum[i+1][j+dir[k]].first<sum[i][j].first+tab[i+1][j+dir[k]])
              {
                sum[i+1][j+dir[k]].first=sum[i][j].first+tab[i+1][j+dir[k]];
                sum[i+1][j+dir[k]].second=dir[k];
              }
              else if(sum[i+1][j+dir[k]].first==sum[i][j].first+tab[i+1][j+dir[k]])
              {
                if(dir[k]==0)
                  sum[i+1][j+dir[k]].second=0;
                else if(sum[i+1][j+dir[k]].second!=0)
                  sum[i+1][j+dir[k]].second=1;
              }
            }
          }
        }
      }
    } 
    int maximum=-INF;
    vector<int> positions;
    for(int i=0;i<m;++i)
    {
      if(maximum<sum[n][i].first)
      {
        maximum=sum[n][i].first;
        positions.clear();
        positions.push_back(i);
      }
      else if(maximum==sum[n][i].first)
      {
        positions.push_back(i);
      }
    }
    vector<int> ans;
    for(int i=0;i<positions.size();++i)
    {
      int pos=positions[i];
      vector<int> aux;
      for(int j=n;j>0;--j)
      {
        aux.push_back(sum[j][pos].second);
        pos-=sum[j][pos].second;
      }
      reverse(aux.begin(),aux.end());
      if(!i || Compare(ans,aux))
        ans=aux;
    }
    for(int i=0;i<ans.size();++i)
    {
      if(i)
        cout<<" "<<ans[i];
      else
        cout<<ans[i];
    }
    return 0;
}