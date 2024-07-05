#include<bits/stdc++.h>
using namespace std;

int max_sun(int arr[], int n){
    int dp[1000] ={0};

    dp[0] = arr[0]>0 ? arr[0]:0;
    int max_so_far = dp[0];

    for(int i =1;i<n;i++){
        dp[i] = dp[i-1] + arr[i];
        if(dp[i]<0){
            dp[i] =0;
        }
        max_so_far = max(dp[i], max_so_far);
    }

    return max_so_far;
}

//space optimization

int max_sum_space(int arr[],int n){
    int curr_sum =0;
    int max_sum =0;

    for(int i =0;i<n;i++){
        curr_sum +=arr[i];

        if(curr_sum <0)
        curr_sum =0;

        max_sum = max(curr_sum,max_sum);
    }

    return max_sum;
}

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;

    cout<<"Enter the elements :";
    int arr[n];

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_sun(arr , n)<<endl;
    cout<<max_sum_space(arr,n)<<endl;
}