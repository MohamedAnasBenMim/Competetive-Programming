class Solution {
public:
    int minOperations(vector<int>& nums) {
        int x=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                x+=nums[i-1]+1-nums[i];
                nums[i]=nums[i-1]+1;
            }
        }
        return x;
    }
};
