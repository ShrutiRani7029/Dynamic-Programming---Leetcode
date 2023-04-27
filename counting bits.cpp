///count the no. of 1's present in the binary format of any number
///for example : n=2 -> 010 ans=1, n=3 -> 011 ans=2, n=4 -> 100 ans=1

#include<bits/stdc++.h>
using namespace std;

vector<int>fun(int n){
vector<int>res(n+1,0);

for(int i=0;i<=n;i++)
{
   if(i%2==0)res[i]=res[i/2];///EVEN : PHLE JAISA
   else res[i]=res[i/2]+1;///ODD : INC 1
}
return res;

}
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int>ans=fun(n);
for(int i=0;i<ans.size();i++)
cout<<ans[i]<<" ";
cout<<endl;
}
}
