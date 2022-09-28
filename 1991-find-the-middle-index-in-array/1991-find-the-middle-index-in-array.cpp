#include<numeric>

class Solution {
    private:
        int sum;
        int remain;
public:
    int findMiddleIndex(vector<int>& nums) {
        this->remain = 0;
       this->sum = accumulate(nums.begin(), nums.end(), 0); 
        for (int i = 0; i < nums.size(); i++)
        {   
            sum -= nums[i];
            if (this->sum == this->remain)
                return i;
            remain += nums[i];
        }
        return -1;
    };
};