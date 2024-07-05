#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

   int first(vector<int> & nums , int target){
    int start = 0;
    int end = nums.size()-1;
    int res =-1;

    while(start <=end){
        int mid = start + (end-start)/2;

        if(target == nums[mid]){
            res = mid;
            end = mid-1;
        }
        else if( target < nums[mid]){
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    }

    return res;
   }

   int last(vector<int> & nums , int target){
    int start = 0;
    int end = nums.size()-1;
    int res =-1;

    while(start <=end){
        int mid = start + (end-start)/2;

        if(target == nums[mid]){
            res = mid;
            start= mid +1;
        }
        else if( target < nums[mid]){
            end = mid -1;
        }
        else{
            start = mid +1;
        }
    }

    return res;
   }
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> result;
        int f = first(nums , target);
        int l = last(nums , target);

        result.push_back(f);
        result.push_back(l);

        return result;
        
    }
};