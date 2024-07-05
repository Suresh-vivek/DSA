#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long int ll;
typedef vector<ll> vll;


int main(){
    ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  

 int n; cin >> n;
  int arr[n];
  for(int i=1; i<=n; i++) arr[i-1] = i;

  do{
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
  }while(next_permutation(arr, arr+n));
   
  



}