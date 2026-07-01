class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }

        for (int i = 0; i < n; i++) {
            int c = target - nums[i];

            if (mp.count(c) && mp[c] != i) {
                return {i, mp[c]};
            }
        }

        return {-1, -1};
    }
};