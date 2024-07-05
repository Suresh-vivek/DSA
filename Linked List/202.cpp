#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int test;
    cin>>test;
    
    while(test--){
        long long int n;
        
        cin>>n;
        
        vector<long long int> a,b;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
        
        
        vector<pair<long long int,long long int>> vp;
        
        for(int i=0;i<n;i++){
            vp.push_back({b[i],a[i]});
        }
        
        sort(vp.begin(),vp.end());
        
        long long int answer = vp[0].second;
        
        for(int i=1;i<n;i++){
            answer += vp[i-1].first + vp[i].second;
        }
        
        cout<<answer<<endl;
        
        
    }
}