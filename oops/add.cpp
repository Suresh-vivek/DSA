#include <bits/stdc++.h>
using namespace std;


class Add{
    int x;

    public:
    Add(int n){
        x =n;
    }

    void add(class Add a, class Add b){
        cout<< a.x + b.x <<endl;
    }


};




int main(){

    Add a(10) ,b(12);
    a.add(a,b);
}