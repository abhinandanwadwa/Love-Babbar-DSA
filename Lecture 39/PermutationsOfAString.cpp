class Solution {
private:
    void solve(vector<vector<int>> &ans, vector<int> nums, int n, int i, vector<int> output) {
        if (i >= n) {
            ans.push_back(output);
            return;
        }

        for (int j=i; j<n; j++) {
            swap(nums[i], nums[j]);
            // ans.push_back(nums);
            output = nums;
            solve(ans, nums, n, i+1, output);
            swap(nums[i], nums[j]);
        }
        

    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int n = nums.size();

        solve(ans, nums, n, 0, output);

        return ans;
    }
};