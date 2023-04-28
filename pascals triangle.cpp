#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>triangle(int n){
  vector<vector<int>>ans;
  vector<int>row(n+1,1);
  
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<i;j++)
      row[j]=ans[i-1][j-1] + ans[i-1][j];
    ans.push_back(row);
  }
  return ans;
    
}
int main()
{
  int n;
  cin>>n;
  vector<vector<int>>ans=triangle(n);
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<=i;j++)
        cout<<ans[i][j]<<" ";
      cout<<endl;
    }
  return 0;
}
