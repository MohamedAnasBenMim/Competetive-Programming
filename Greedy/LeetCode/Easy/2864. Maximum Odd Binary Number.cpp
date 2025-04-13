class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans="";
        int nb1=0;
        int nb0=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
                nb1++;
            else if(s[i]=='0')
                nb0++;
        }
        for(int i=0;i<nb1-1;i++){
            ans+='1';
        }
        for(int i=0;i<nb0;i++){
            ans+='0';
        }
        ans+='1';
        return ans;
    }
};
