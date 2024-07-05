#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int target;
    cout<<"Eneter element to be searched "<<endl;
    cin>>target;

    int start =0;
    int end = n-1;
    int c =0;

    while(start <= end){

        int mid = start + (end- start)/2;

        if(target ==arr[mid]){
            cout<<"Element found at index "<<mid<<endl;
            c++;
            break;
        }
        else if(target < arr[mid]){
            start = mid+1;
        }
        else{
            end = mid -1;
        }

    }
    if(!c){
        cout<<"Element not found"<<endl;
    }
}