class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s;
        for(int e:nums){
            if(e>0)
                s.insert(e);
        }
        return s.size();
    }
};
