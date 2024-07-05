#include<iostream>
using namespace std;
#include<bits/stdc++.h>

class Stack{
    private:
        vector<int> v;
    
    public:

          void push(int n){
            v.push_back(n);

          }
          bool empty(){
            return v.size()==0;
          }
          void pop(){
            if(!empty()){
                v.pop_back();
            }
            else{
                return;
            }

          }

          int top(){
            return v[v.size()-1];
          }

};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
}