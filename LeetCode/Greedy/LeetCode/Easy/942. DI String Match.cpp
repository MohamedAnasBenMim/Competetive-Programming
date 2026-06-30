class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        vector<int> perm(n+1);
        int l=0;
        int h=n;
        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                perm[i]=l;
                l++;
            }
            else{
                perm[i]=h;
                h--;
            }
        }
        perm[n]=l;
        return perm;
    }
};
