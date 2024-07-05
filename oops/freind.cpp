#include <bits/stdc++.h>
using namespace std;


class B;

class A{
    int x;
    public:
    friend int sum(class A, class B);
    A(int x){
        this->x = x;
    }
};

class B{
    int y;
    public:
    friend int sum(class A, class B);
    B(int y){
        this->y = y;
    }
};

int sum(class A a, class B b){
    return a.x + b.y;
}

int main(){
    A a(10);
    B b(20);
    cout << sum(a, b) << endl;
    return 0;
}