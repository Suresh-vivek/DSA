#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;

    while(test--){
        int n,q;
      cin>>n>>q;
      long long int  arr[n],even=0,odd=0,ans=0;
      for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0)
        {++even;}
        else {++odd;}
        ans+=arr[i];
      }
      while(q--){
        int num,x;
        cin>>num>>x;
        if(num==0){
          ans+=x*even;
          if(x%2!=0)
            {odd+=even;even=0;}
        }
        if(num==1){
          ans+=x*odd;
          if(x%2!=0){
            even+=odd;odd=0;}
          }
          cout<<ans<<endl;//>>
    }
}
}