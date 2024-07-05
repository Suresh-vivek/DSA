#include<iostream>
using namespace std;


void prime_seive(int *p){

    // Marking all odd no. as prime
    for(int i=3 ; i<=1000000; i+=2){
        p[i] = 1;
    }

    // Seive
    for(long long int i = 3 ; i<=1000000; i+=2){

        for(long long int j = i*i ; j<=1000000;j+=i){
            p[j]=0;
        }
    }
    


    //special cases
    p[2]=1;
    p[1]=p[0]=0;

}

int main(){

    int n;
    cin>>n;
    
    int p[1000005] = {0};
    prime_seive(p);

    for(int i=0;i<=n;i++){
        if(p[i]==1){
            cout<<i<<" , ";
        }
    }
    cout<<endl;
}