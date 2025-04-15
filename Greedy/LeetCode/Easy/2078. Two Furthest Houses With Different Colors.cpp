class Solution {
public:
    int maxDistance(vector<int>& colors) {
        vector<int> v;
        int ans;
        for(int i=0;i<colors.size();i++){
            for(int j=0;j<colors.size();j++){
                if(colors[i]!=colors[j]){
                    ans=abs(i-j);
                    v.push_back(ans);
                }
            }
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};
