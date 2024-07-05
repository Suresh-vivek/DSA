#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n,d;
    
    cin>>n>>d;
    
    int a[n];
    int b[n];
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i] = x;
        
        
        
    }
    
    sort(a,a+n);
    for(int i=0;i<n;i++){
        b[i] = d/a[i] + 1;

        
        
        
    }


   
    
    
    int ans =0;
    int sum =0;
    
    int p = n-1;
    
    while(sum<n){
        sum+=b[p];
        p--;
        ans++;
    }
    cout<<ans<<endl;
}