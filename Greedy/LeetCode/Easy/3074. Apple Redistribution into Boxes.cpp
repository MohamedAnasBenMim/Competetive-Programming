class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int x=0;
        int nb=0;
        int s=0;
        for(int i=0;i<apple.size();i++){
            s+=apple[i];
        }
        sort(capacity.begin(),capacity.end(),greater());
        int i=0;
        while(s>x){
            x+=capacity[i];
            nb++;
            i++;
        }
        return nb;
    }
};
