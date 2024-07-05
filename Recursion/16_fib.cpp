
#include<iostream>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

// Fibonacci using memoization
int F[100]= {-1};

int fib_memo(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1){
            F[n-2]=fib_memo(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fib_memo(n-1);
        }
        F[n]=F[n-2]+F[n-1];
        return F[n-2]+F[n-1];
    }
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<fib(n)<<endl;
    for(int i=0;i<100;i++){
        F[i]=-1;
    }
    cout<<fib_memo(n)<<endl;
}