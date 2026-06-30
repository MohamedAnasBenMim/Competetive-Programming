class Solution {
public:
    int minTimeToType(string word) {
        int ans=0;
        char lastchar='a';
        for(int i=0;i<word.size();i++){
            int x=abs(word[i]-lastchar);
            int y=26-x;
            ans+=min(x,y)+1;
            lastchar=word[i];
        }
        return ans;
    }
};
