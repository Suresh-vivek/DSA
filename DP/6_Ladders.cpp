#include<bits/stdc++.h>
using namespace std;


int td_ladders(int n , int k , int dp[]){

    // base case
    if(n==0){
        return 1;

    }

    //lookup
    if(dp[n]!=0){
        return dp[n];
    }

    int ways =0;

    for(int i =1;i<=k;i++){
        if((n-i)>=0){
            ways += td_ladders(n-i,k,dp);
        }
    }
    return dp[n] = ways;
}

int bu_ladders(int n , int k){
    int dp[1000] = {0};

    dp[0] = 1;
   


    

    for(int i=1;i<=n;i++){
         dp[i] =0;

        for(int j = 1 ;j<=k ;j++){
           
            
            if((i-j)>=0){
                dp[i] += dp[i-j];

            }
        }
    }

    return dp[n];
}

int optimized_ladder(int n , int k){
    int dp[1000] ={0};
    dp[0] = dp[1] = 1;

    for(int i=2;i<=k;i++){
        dp[i] = 2*dp[i-1];
    }
    for(int i=k+1;i<=n;i++){
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }

    return dp[n];
    
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int k;
    cout<<"Enter steps :";
    cin>>k;
    
    int dp[1000] = {0};
    cout<<td_ladders(n,k,dp)<<endl;
    cout<<bu_ladders(n,k)<<endl;
    cout<<optimized_ladder(n,k)<<endl;
}