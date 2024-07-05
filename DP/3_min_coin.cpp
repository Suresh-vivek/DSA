#include <bits/stdc++.h>
using namespace std;


int td_coin(int n ,int dp[], int coins[], int cs){

    //base case
    if(n==0){
        return 0;
    }

    if(dp[n]!=0){
        return dp[n];
    }
    int mini = INT_MAX;
  
    
    for(int i=0;i<cs;i++){
        if(n-coins[i]>=0){
            mini = min(mini , td_coin(n-coins[i], dp , coins , cs)+1) ;




        }
    } 
    dp[n]= mini;
    return dp[n];




}
int bu_coin(int N, int coins[] , int cs){
    int dp[1000] = {0};
    for(int i =0 ;i<N+1;i++){
        dp[i] = (i==0)?0:INT_MAX;
    }

    for(int n=1;n<=N;n++){

        for(int i =0;i<cs;i++ ){
            if(n-coins[i]>=0){
                int subprob =  dp[n-coins[i]];
                dp[n] = min(dp[n] , subprob+1);
            }
        }
    }
    return dp[N];
}


int main(){
    int n;
    cout<<"Enter the sum : ";
    cin>>n;
    
    int c;
    cout<<"Enter the number of denominations :";
    cin>>c;

    cout<<"Enter coin value :";
    int arr[c];
    for(int i=0;i<c;i++){
        cin>>arr[i];

    }

    int dp[1000] = {0};
    cout<<td_coin(n ,dp ,arr , c)<<endl;
    cout<<bu_coin(n , arr , c)<<endl;



}