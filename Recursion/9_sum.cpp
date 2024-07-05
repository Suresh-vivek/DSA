// Sum of first n natural numbers using recursion  , Time - O(n), Space - O(n)

#include <iostream>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return sum(n-1)+n;
}

int main(){
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<sum(x)<<endl;
}