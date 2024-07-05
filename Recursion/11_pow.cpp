// find m^n using recursion 

#include <iostream>
using namespace std;


int pow(int m,int n){
    if(n==0){
        return 1;
    }

    return pow(m,n-1)*m;
}

int main(){
    int m,n;
    cout<<"Enter the base :";
    cin>>m;

    cout<<"Enter the power : ";
    cin>>n;
    cout<<pow(m,n)<<endl;


}





