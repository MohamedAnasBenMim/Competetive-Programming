class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int> v;
        vector<int> prefix;
        sort(nums.begin(),nums.end());
        prefix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            prefix.push_back(nums[i]+prefix[i-1]);
        }
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<prefix.size();j++){
                if(queries[i]<prefix[j]){
                    v.push_back(j);
                    break;
                }
                else if(j==nums.size()-1)
                    v.push_back(j+1);
            }
        }
        /*pr = 1  3  7   12
           qr  3 10  21

        */
        return v;
    }
};
