/*Max Sum Subarray of size K
Difficulty: EasyAccuracy: 49.6%Submissions: 193K+Points: 2
Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

Examples:

Input: arr[] = [100, 200, 300, 400] , k = 2
Output: 700
Explanation: arr3  + arr4 = 700, which is maximum.*/

class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
  
  int s=0;
  int n=arr.size();
  for(int i=0;i<k;i++){
      s+=arr[i];
  }
int maxi=s;
int l=0;
for(int i=k;i<n;i++){
    s-=arr[l];
    s+=arr[i];
    l++;
    maxi=max(maxi,s);
}
  return maxi;
        
    }
};