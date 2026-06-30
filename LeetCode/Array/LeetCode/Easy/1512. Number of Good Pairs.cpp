class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mp;
        int x=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto pair:mp){
            x=x+((pair.second)*(pair.second-1))/2;
        }
        return x;
    }
};
