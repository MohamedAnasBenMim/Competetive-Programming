class Solution {
public:
    int minPartitions(string n) {
        int max=n[0]-'0';
        if(n.size()==1)
            return stoi(n);
        else{
            for(int i=1;i<n.size();i++){
                if(n[i]-'0'>max)
                    max=n[i]-'0';
            }
        }
        return max;

    }
};
