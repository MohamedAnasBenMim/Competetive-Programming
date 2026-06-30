class Solution {
public:
    int splitNum(int num) {
        string ch1="";
        string ch2="";
        vector<char> v;
        string ch=to_string(num);
        for(int i=0;i<ch.size();i++){
            v.push_back(ch[i]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(i%2==0)
                ch1+=v[i];
            else
                ch2+=v[i];
        }
        long long num1=stoll(ch1);
        long long num2=stoll(ch2);
        return num1+num2;

        
    }
};
