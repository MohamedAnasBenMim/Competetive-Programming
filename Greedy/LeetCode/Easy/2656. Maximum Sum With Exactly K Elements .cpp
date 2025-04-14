class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int x=0;
        int m=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>=m)
                m=nums[i];
        }
        for(int i=0;i<k;i++){
            x+=m;
            m=m+1;
        }
        return x;
    }
};
