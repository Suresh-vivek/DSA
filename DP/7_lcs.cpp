#include<bits/stdc++.h>
using namespace std;


int td_lcs(string s1 ,string s2 , int i , int j , vector<vector<int>> &dp){

    if(i == s1.length() or j == s2.length()){
    return 0;
   
   }

   //lookup

   if(dp[i][j] !=-1){
    return dp[i][j];
   }
   // recursive cases
   if(s1[i]==s2[j]){
    return dp[i][j] = 1 + td_lcs(s1 ,s2 ,i+1,j+1,dp);
   }

   int op1 = td_lcs(s1 ,s2,i+1,j,dp);
   int op2 = td_lcs(s1,s2,i,j+1,dp);

   return dp[i][j] = max(op1,op2);

}



int lc_recursion(string s1,string s2 , int i , int j){

   //base case
   if(i == s1.length() or j == s2.length()){
    return 0;
   }
   // recursive cases
   if(s1[i]==s2[j]){
    return 1 + lc_recursion(s1 ,s2 ,i+1,j+1);
   }

   int op1 = lc_recursion(s1 ,s2 ,i+1 ,j);
   int op2 = lc_recursion(s1,s2,i, j+1);

   return max(op1,op2);

}
int main(){

    cout<<"Enter first string:";
    string str1;
    cin>>str1;

    cout<<"Enter second string:";
    string str2;
    cin>>str2;

    //creating dp vector
    int n1 = str1.length();
    int n2 = str2.length();

    vector<vector<int>> dp(n1 , vector<int>(n2,-1));

    cout<<lc_recursion(str1,str2 , 0,0)<<endl;
    cout<<td_lcs(str1,str2,0,0,dp)<<endl;
          
}