// Code to print nnumbers from 1 to n in descending order

#include<iostream>
using namespace std;

void tail(int n){

    if(n>0){
        cout<<n<<" ";
        tail(n-1);
    }
}

int main(){

    int x ;
    cout<<"Enter the number : ";
    cin>>x;

    tail(x);
    cout<<endl;


}