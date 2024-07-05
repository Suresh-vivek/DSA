#include <iostream>
using namespace std;


int fun(int n){
    if(n>0){
        return fun(n-1) + n;
    }

    return 0;
}
int main(){

    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<fun(x);

    return 0;
}
