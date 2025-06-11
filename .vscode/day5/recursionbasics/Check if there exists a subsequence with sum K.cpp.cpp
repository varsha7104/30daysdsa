/*Check if there exists a subsequence with sum K
Difficulty: MediumAccuracy: 40.26%Submissions: 23K+Points: 4Average Time: 30m
Given an array arr and target sum k, check whether there exists a subsequence such that the sum of all elements in the subsequence equals the given target sum(k).


Example:

Input:  arr = [10,1,2,7,6,1,5], k = 8.
Output:  Yes
Explanation:  Subsequences like [2, 6], [1, 7] sum upto 8

Input:  arr = [2,3,5,7,9], k = 100. 
Output:  No
Explanation:  No subsequence can sum upto 100*/
 bool helper(int pos,int n,vector<int>arr,int k){
      if(k==0)return true;
      if(pos==n||k<0)return false;
      bool l=false;
      if(arr[pos]<=k){
       l= helper(pos+1,n,arr,k-arr[pos]);
      if(l)return true;
      }bool r=helper(pos+1,n,arr,k);
      if(r) return true;
      return l||r;
  }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
 return helper(0,n,arr,k);

        
    }