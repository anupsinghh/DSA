class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> mp; 
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i]; 
            if (mp.count(diff)) return {mp[diff], i}; 
            mp[nums[i]] = i; 
        }
        return {};
    }
};