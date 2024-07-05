#include<bits/stdc++.h>
using namespace std;

int bu_wines(int wines[],int i , int j , int y ,int dp[][1000]){

    //base case
    if(i>j){
        return 0;
    }

    // lookup
    if(dp[i][j]!=0){
        return dp[i][j];
    }

    int op1 = wines[i]*y + bu_wines(wines , i+1,j,y+1,dp);
    int op2 = wines[j]*y + bu_wines(wines,i,j-1,y+1,dp);
    dp[i][j] = max(op1 , op2);
    return dp[i][j];



   




}

int main(){
    int n;
    cout<<"Enter the number of botttles :";
    cin>>n;

    int arr[n];

    cout<<"Enter Prices : ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int dp[1000][1000] = {0};
    cout<<bu_wines(arr,0,n-1,1,dp)<<endl;

   

}