/*Count distinct elements in every window
Difficulty: MediumAccuracy: 41.83%Submissions: 156K+Points: 4Average Time: 20m
Given an integer array arr[] and a number k. Find the count of distinct elements in every window of size k in the array.

Examples:

Input: arr[] = [1, 2, 1, 3, 4, 2, 3], k = 4
Output:  [3, 4, 4, 3]*/
class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
       unordered_map<int ,int >mp;
       int l=0,r=0;
       int n=arr.size();
       vector<int>ans;
       while(r<n){
           mp[arr[r]]++;
           if(r-l+1>k){
               mp[arr[l]]--;
               if(mp[arr[l]]==0) mp.erase(arr[l]);
               l++;
           }if(r-l+1==k) ans.push_back(mp.size());
           r++;
       }return ans;
    }
};
