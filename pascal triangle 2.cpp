#include<bits/stdc++.h>
using namespace std;
vector<int> getRow(int rowIndex) {
        vector<vector<int>>ans;
        for(int i=0;i<rowIndex+1;i++)
        {
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++)
            {
                row[j]=ans[i-1][j]+ans[i-1][j-1];
            }
            ans.push_back(row);
        }
        return ans[rowIndex];
    }
int main()
{
  int n;
  cin>>n;
  vector<int>ans=getRow(n);
  for(int i=0;i<ans.size();i++)
  {
      if (i == ans.size() - 1)
          cout << ans[i];
      else
          cout << ans[i] << " ";
  }
}
