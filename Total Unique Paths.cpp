///memorization
/*#include<bits/stdc++.h>
using namespace std;

int fun(int i, int j, vector<vector<int>>&dp){

if(i==0 && j==0 ) return 1;
if(i<0 || j<0)return 0;
if(dp[i][j]!=-1)return dp[i][j];


return dp[i][j]=fun(i-1,j,dp)+fun(i,j-1,dp);
}

int uniquepaths(int m,int n){
vector<vector<int>>dp(m,vector<int>(n,-1));
return fun(m-1,n-1,dp);
}

int main(){
int m,n;
cin>>m>>n;

cout<<uniquepaths(m,n);

}*/
///tabulation
#include<bits/stdc++.h>
using namespace std;

int fun(int m,int n,vector<vector<int>>&dp){

for(int i=0;i<m;i++)
{

    for(int j=0;j<n;j++){

        if(i==0 && j==0){
            dp[i][j]=1;
            continue;
        }
        int up=0,left=0;
        if(i>0)up=dp[i-1][j];
        if(j>0)left=dp[i][j-1];
 dp[i][j]=left+up;

    }


}
return dp[m-1][n-1];

}


int uniquepaths(int m,int n){

vector<vector<int>>dp(m,vector<int>(n,0));
return fun(m,n,dp);

}
int main(){
int m,n;
cin>>m>>n;
cout<<uniquepaths(m,n);

}
