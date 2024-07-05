// Time complexity - O(2^n) , space complexity - O(n)

#include<iostream>
using namespace std;


void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }

}
int main(){

    int x;
    cout<<"enter the number :";
    cin>>x;
    fun(x);

    cout<<endl;


}