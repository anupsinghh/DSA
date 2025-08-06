class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1;

        int count = 0, sum = 0;

        for (int num : nums) {
            sum += num;

            if (prefixCount.find(sum - k) != prefixCount.end()) {
                count += prefixCount[sum - k];
            }

            prefixCount[sum]++;
        }

        return count;
    }
};
