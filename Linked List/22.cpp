using namespace std;
#include <bits/stdc++.h>

int main()
{
   
    int test; 
    
    cin>>test;
    while(test--)
    {
        int numb; 
        
        cin>>numb;
        string arr;
        
         cin>>arr;
        int b[numb]; 
        for(int i=0;i<numb;i++){
            cin>>b[i];
        }
        int resu = 0;
        int res = 0;
        for(int i=0;i<numb;++i)
        {
            if(arr[i]=='1') resu+=max(b[i], res);
            if(arr[i]=='0' || b[i]<res) res=b[i];
        }
        cout<<resu<<endl;
    }
}