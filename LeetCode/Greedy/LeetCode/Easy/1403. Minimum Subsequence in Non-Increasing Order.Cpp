class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(),nums.end(),greater<>());
        int n=nums.size();
        int x=0;
        for(int i=0;i<=n-1;i++){
            x+=nums[i];
        }
        int m=0;
        for(int i=0;i<n;i++){
            m+=nums[i];
            v.push_back(nums[i]);
            if(m>(x-m))
                break;
        }
        return v;
    }
};
