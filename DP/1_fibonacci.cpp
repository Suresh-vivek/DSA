//fibonacci series using DP

#include<bits/stdc++.h>
using namespace std;

//top down approach
long long int fib(int n , int dp[]){

    // base case
    if(n==0 or n==1){
        return n;
    }

    // lookup case

    if(dp[n]!=0){
        return dp[n];
    }

    int ans = fib(n-1, dp) + fib(n-2, dp);
    return dp[n] = ans;



}

// Bottom Up approach
int fibBU(int n){
    int dp[1000]= {0};
    dp[1] =1;

    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

// Bottom Up approach with space optimization

int fibbu(int n){
     // base case
    if(n==0 or n==1){
        return n;
    }


    int a=0,b=1;

    int c;

    for(int i=2;i<=n;i++){
        c= a+b;
        a=b;
        b=c;

    }
    return c;
}


int main(){

    int n;
   cout<< "Enter the number"<<endl;
   cin>>n;

    int dp[1000]= {0};

    long long int ans =fib(n , dp);
    cout<<ans<<endl;
    cout<<fibBU(n)<<endl;
    cout<<fibbu(n)<<endl;
}