// Taylor series using loop


#include <iostream>
using namespace std;

double e(int x,int n){
    double s=1;
    double num=1;
    double den=1;

    for(int i=1;i<=n;i++){
        num*=x;
        den*=i;
        s+=num/den;
    }
    return s;

}

int main(){
    int x,n;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of n : ";    
    cin>>n;
    cout<<e(x,n)<<endl;

    
}
