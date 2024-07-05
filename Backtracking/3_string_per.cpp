#include <bits/stdc++.h>
using namespace std;

void permute(string &a, int l,int r){

    //base case
    if(l==r){
        cout<<a<<endl;
    }

    else{

        for(int i=l;i<=r;i++){
            swap(a[l],a[i]);

            //recursion
            permute(a,l+1,r);


            swap(a[l],a[i]);
        }
    }
}


int main(){
    string s;
    cin>>s;

    permute(s,0,s.size()-1);

    
}