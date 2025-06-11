/*Given an array of distinct integers candidates and a target integer target, return a list 
of all unique combinations of candidates where the chosen numbers sum to target. You may 
return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times.
 Two combinations are unique if the frequency of at least one of the chosen numbers is
  different.

The test cases are generated such that the number of unique combinations that sum up 
to target is less than 150 combinations for the given input.
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
 */void helper(int i,vector<int>arr,int k,vector<int>ds, vector<vector<int>>&ans){
    if(i==arr.size())
{
    if(k==0) ans.push_back(ds);
    return;}
    if(arr[i]<=k){
        ds.push_back(arr[i]);
        helper(i,arr,k-arr[i],ds,ans);
        ds.pop_back();
    }helper(i+1,arr,k,ds,ans);
    
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
         vector<vector<int>>ans;
        helper(0,candidates,target,ds,ans);
        return ans;
    }