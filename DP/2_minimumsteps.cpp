#include<bits/stdc++.h>
using namespace std;

// Top down approach


int minimum(int n , int dp[]){
    
    // base case
    if(n==1){
        return 0;

    }

    //lookup

    if(dp[n]!=0){
        return dp[n];
    }
    int op1, op2, op3;
    op1 = op2 = op3 = INT_MAX;


    if(n%3==0){
        op1 = minimum(n/3 , dp);

    }
    if(n%2==0){
        op2 = minimum(n/2, dp);
    }
    op3 = minimum(n-1,dp);

    int ans = min(op1 , min(op2,op3)) + 1;
    return dp[n] = ans;





}
int bu_minimum(int n){
    int dp[1000] = {0};
    dp[1] = 0;
    
    
    for(int i=2;i<=n;i++){
        int op1, op2,op3;
         op1 = op2= op3 = INT_MAX;

        if(i%3==0){
            op1 = dp[i/3];
        }
        if(i%2==0){
            op2 = dp[i/2];
        }
        op3 = dp[i-1];
        

        dp[i] = min(min(op1,op2),op3) + 1;
    }
    return dp[n];

}

int main(){
    int n;

    cout<<"Enter the number :";
    cin>>n;

    int dp[1000] = {0};

    cout<<minimum(n,dp)<<endl;
    cout<<bu_minimum(n)<<endl;


    
    
    
}