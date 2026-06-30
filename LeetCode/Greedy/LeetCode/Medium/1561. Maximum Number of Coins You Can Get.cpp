class Solution {
public:
    int maxCoins(vector<int>& piles) {
        vector<int> v;
        int ans=0;
        sort(piles.begin(),piles.end(),greater());
        for(int i=0;i<piles.size();i++){
            if(i%2==1)
                v.push_back(piles[i]);
            if(v.size()==piles.size()/3)
                break;
        }
        for(int i=0;i<v.size();i++){
            ans+=v[i];
        }
        return ans;
        /*
        1 3 5

        1 2 2 4 7 8
        9 8 7 6 5 4 3 2 1
        (9,8,1)=8
        (7,6,2)=6
        (5,4,3)=4
        18
        */
    }
};
