// count of element in a sorted array
// 2 4 10 10 10 18 20 
// 10
// 3   O(log(n))
#include <bits/stdc++.h>
using namespace std;

int first(vector<int> arr , int target){
	int start =0 , end = arr.size()-1;
	int res =-1;

	while(start <= end){
		int mid= start + (end -start)/2;

		if(arr[mid] == target){
			res = mid;
			end = mid -1;
		}

		else if(arr[mid] < target){
			start = mid +1;
		}
		else{
			end = mid -1;
		}
	}
	return res;

}
int last(vector<int> arr , int target){
	int start =0 , end = arr.size()-1;
	int res =-1;

	while(start <= end){
		int mid= start + (end -start)/2;

		if(arr[mid] == target){
			res = mid;
			start = mid +1;
		}

		else if(arr[mid] < target){
			start = mid +1;
		}
		else{
			end = mid -1;
		}
	}
	return res;

}

int count(vector<int>& arr, int n, int x) {
	// Write Your Code Here

	int l = last(arr ,x);
	int f = first(arr ,x);
	if(l==-1 or f==-1){
		return 0;
	}

	return l-f+1;
}
