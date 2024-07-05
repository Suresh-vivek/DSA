#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
    int n,d;
    cin>>n>>d;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    
    sort(a,a+n);
    
  int i =0,j=n-1;
    int ans =0;
    int sum =0;
    
    while(i<j){
        
        while(sum < d){
            sum+=a[j];
            i++;
        }
        j--;
        sum =0;
        ans++;
    }
    
    cout<<ans<<endl;
    
   
    
    
    
    
    return 0;
}