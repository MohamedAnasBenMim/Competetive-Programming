class Solution {
public:
    int balancedStringSplit(string s) {
        int nb=0;
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')
                x--;
            else
                x++;
            if(x==0)
                nb++;
        }
        return nb;
    }
};
