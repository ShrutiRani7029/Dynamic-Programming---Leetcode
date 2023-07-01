class Solution {
public:

    long long ans=INT_MAX;
    void fun(int index,vector<int>&jobs, vector<int>&dp,int k){
     
     if(index>=jobs.size())///able
     {
         long long temp=*max_element(dp.begin(),dp.end());
         if(temp<ans)ans=temp;
         return;
     }

     for(int i=0;i<k;i++){
         if(i>0 && dp[i]>=dp[i-1])
            {continue;}///important condition
         dp[i]=dp[i]+jobs[index];
         fun(index+1,jobs,dp,k);
         dp[i]=dp[i]-jobs[index];
     }


    }
    
    
    int minimumTimeRequired(vector<int>& jobs, int k) {
        
        int index=0;
        vector<int>dp(k,0);
        sort(jobs.begin() , jobs.end() , greater<int>());
        fun(index,jobs,dp,k);
        return ans;


    }
};
