class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProd = nums[0], minProd = nums[0], result = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int temp = maxProd;

            maxProd = max({nums[i], maxProd * nums[i], minProd * nums[i]});
            minProd = min({nums[i], temp * nums[i], minProd * nums[i]});

            result = max(result, maxProd);
        }

        return result;
    }
};
