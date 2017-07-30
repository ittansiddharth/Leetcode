class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == val)
            {
                a++;
            }
            else
            {
                nums[i - a] = nums[i];
            }
        }
        return nums.size() - a;
    }
};
