#include <iostream>
using namespace std;

// int count =0;

int fun(int n){
    
    if(n>100){
        return n-10;
    }
    // count++;
    // cout<<count<<endl;
    return fun(fun(n+11));
    

}
int main(){

    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<fun(x)<<endl;
    

}