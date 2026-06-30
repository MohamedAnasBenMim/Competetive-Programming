class Solution {
public:
    int minMaxDifference(int num) {
        string ch=to_string(num);
        for(int i=0;i<ch.size();i++){
            if(ch[i]!='9'){
                for(int j=i+1;j<ch.size();j++){
                    if(ch[i]==ch[j]){
                        ch[j]='9';
                    }
                }
                ch[i]='9';
                break;
            }
        }
        int max=stoi(ch);
        string s=to_string(num);
        char c=s[0];
        s[0]='0';
        for(int j=1;j<s.size();j++){
            if(s[j]==c){
                s[j]='0';
            }
        }
        int min =stoi(s);
        return max-min;
    }
};
