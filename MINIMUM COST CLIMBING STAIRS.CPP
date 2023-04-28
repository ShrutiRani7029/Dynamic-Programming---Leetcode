#include<bits/stdc++.h>
using namespace std;

int help(int i,vector<int>&v,vector<int>&dp)
{
  if(i>=v.size())
    return 0;
  if(dp[i]!=-1)return dp[i];
  int op1=help(i+1,v,dp);
  int op2=help(i+2,v,dp);
  
  return dp[i]=min(op1+op2) +c[i];
}
int fun(vector<int>&v)
{
  int n=v.size();
  vector<int>dp(n+1,-1);
  return min(help(0,v,dp),help(1,v,dp));
}
int main()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  cout<<fun(v);
}
