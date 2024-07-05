// Code to print nnumbers from 1 to n in ascending order

#include<iostream>
using namespace std;

void head(int n){

    if(n>0){
        head(n-1);
        cout<<n<<" ";
    }
}

int main(){

    int x ;
    cout<<"Enter the number : ";
    cin>>x;

    head(x);
    cout<<endl;


}