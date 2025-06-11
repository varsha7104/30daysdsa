/* Combination Sum IIGiven a collection of candidate numbers (candidates) and a target number 
(target), find all unique combinations in candidates where the candidate numbers sum to target.


Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.*/
   void helper(int i, vector<int>& nums, int k, vector<int>& ds, vector<vector<int>>& ans) {
        if (k == 0) {
            ans.push_back(ds);
            return;
        }

        for (int j = i; j < nums.size(); j++) {
            if (j > i && nums[j] == nums[j - 1]) continue; // skip duplicates
            if (nums[j] > k) break; // no point in continuing
            ds.push_back(nums[j]);
            helper(j + 1, nums, k - nums[j], ds, ans); // move to j + 1 (use once)
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); // needed to skip duplicates
        vector<int> ds;
        vector<vector<int>> ans;
        helper(0, candidates, target, ds, ans);
        return ans;
    }/*Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]*/