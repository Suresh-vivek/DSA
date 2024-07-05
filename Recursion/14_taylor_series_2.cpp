//taylor series using recursion

#include <iostream>
using namespace std;

double e(int x,int n){
   static double s =1;
   if(n==0){
    return s;
   }
   s= 1+ x*s/n;
   return e(x,n-1);
}

int main(){
    int x,n;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<e(x,n)<<endl;
    
}