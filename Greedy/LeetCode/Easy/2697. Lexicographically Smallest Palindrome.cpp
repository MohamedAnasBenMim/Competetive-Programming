class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-1-i]){
                if((s[i]-'0')<(s[n-1-i]-'0'))
                    s[n-1-i]=s[i];
                else
                    s[i]=s[n-1-i];
            }
        }
        return s;
    }
};
