1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) {
4
5        map<int, int> mp;
6        int n = nums.size();
7        for (int i = 0; i < n; i++) {
8            mp[nums[i]] = i;
9        }
10
11        for (int i = 0; i < n; i++) {
12            int c = target - nums[i];
13
14            if (mp.count(c) && mp[c] != i) {
15                return {i, mp[c]};
16            }
17        }
18
19        return {-1, -1};
20    }
21};