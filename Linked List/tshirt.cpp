#include <bits/stdc++.h>
using namespace std;


    



int main(){

    int t;
    cin>>t;

    while(t--){

        string  a,b;
        cin>>a>>b;

        
        int lena = a.length();
        int lenb = b.length();


        // s at the end
        if(a[lena -1]=='S' && b[lenb -1]=='S'){
            if(lena > lenb){
                cout<< "<"<<endl;

            }
            else if(lenb > lena){
                cout<<">"<<endl;
            }
            else{
                cout<<"="<<endl;
            }



        }

        else if(a[lena -1]=='S' && b[lenb -1]=='M'){
            cout<<"<"<<endl;
        }
        else if(a[lena -1]=='M' && b[lenb -1]=='S'){
            cout<<">"<<endl;
        }


        else if(a[lena -1]=='S' && b[lenb -1]=='L'){
            cout<<"<"<<endl;
        }
        else if(a[lena -1]=='L' && b[lenb -1]=='S'){
            cout<<">"<<endl;
        }



        // L at the end
       else  if(a[lena -1]=='L' && b[lenb -1]=='L'){
            if(lena > lenb){
                cout<< ">"<<endl;

            }
            else if(lenb > lena){
                cout<<"<"<<endl;
            }
            else{
                cout<<"="<<endl;
            }




        }



        else if(a[lena -1]=='L' && b[lenb -1]=='M'){
            cout<<">"<<endl;
        }
        else if(a[lena -1]=='M' && b[lenb -1]=='L'){
            cout<<"<"<<endl;
        }


       else  if(a[lena -1]=='L' && b[lenb -1]=='S'){
            cout<<">"<<endl;
        }
        else if(a[lena -1]=='S' && b[lenb -1]=='L'){
            cout<<"<"<<endl;
        }

        else if(a[lena -1]=='M' && b[lenb -1]=='M'){
            cout<<"="<<endl;

        }








        





    }


    return 0;

}