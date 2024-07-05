// Fibonacci series using loop

#include <iostream>
using namespace std;

int fib(int n){
    int a=0;
    int b=1;
    int c;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<fib(n)<<endl;
    
}