#include <iostream>
using namespace std;

int x =0;
int fun(int n){

    
    if(n>0){
        x++;
        return fun(n-1) + x;
    }

    return 0;
}
int main(){

    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<fun(x)<<endl;

    return 0;
}
