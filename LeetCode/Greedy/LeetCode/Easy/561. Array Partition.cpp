class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n){
            x=x+nums[i];
            i++;
            i++;
        }
        return x;
    }
};
