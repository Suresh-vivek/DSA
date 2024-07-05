#include <iostream>
using namespace std;

void funA(int n);

void funB(int n){
    if(n>1){
        cout<<n<<" ";
        funA(n/2);
    }
}


void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}


int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;

    funA(x);
}