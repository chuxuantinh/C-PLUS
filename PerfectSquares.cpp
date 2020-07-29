class Solution {
public:
    int numSquares(int n) {
        int i,j,dp[n+1],p;
        if(n<=0) return 0;
        dp[0]=0;
        for(i=1 ; i<=n ; i++){
            p=INT_MAX;
            for(j=1 ; j * j<=i ; j++){
                dp[i]=1+dp[i-(j*j)];
                if(dp[i]<p) p=dp[i];
                else dp[i]=p;
            }
        }
        return dp[n];
    }
};
