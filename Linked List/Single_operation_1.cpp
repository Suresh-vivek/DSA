#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int s;
	    cin>>s;
	    
	    string str;
	    cin>>str;
	    
	    int ans =0;
	    
	    for(int i=0;i<s;i++){
	        if(str[i]=='0'){
	            break;
	        }
	        ans++;
	        
	    }
	    
	    
	   
	   cout<<ans<<endl;
	}
	return 0;
}
