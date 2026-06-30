class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int x=0;
        int c=0;
        sort(cost.begin(),cost.end(),greater());
        for(int i=0;i<cost.size();i++){
            if(c==2)
                c=0;
            else{
                x+=cost[i];
                c++;
            }
        }
        return x;
    }
};
