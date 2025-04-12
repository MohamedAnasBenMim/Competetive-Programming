class Solution {
public:
    int minimumSum(int num) {
        string ch1="";
        string ch2="";
        vector<int> v;
        for(int i=0;i<4;i++){
            v.push_back(num%10);
            num=num/10;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i];
        }
        ch1+=to_string(v[0])+to_string(v[3]);
        ch2+=to_string(v[1])+to_string(v[2]);
        int x=stoi(ch1)+stoi(ch2);
        return x;
    }
};
