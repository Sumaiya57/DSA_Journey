#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> dp;
    int climbStairs(int n){
        if(n<=2) return 1;
        if(dp[n]!=-1) return dp[n];
        dp[n] = climbStairs(n-1) + climbStairs(n-2);
        return dp[n];
    }
};
int main(){
    solution sol;
    int n ;
    cin>>n;
    sol.dp.resize(n+1,-1);
    cout<<sol.climbStairs(n)<<endl;
    return 0;
}