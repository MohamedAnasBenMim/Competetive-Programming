class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ans=0;
        sort(prices.begin(),prices.end());
        if(prices[0]+prices[1]>money)
            ans=money;
        else
            ans=money-(prices[0]+prices[1]);
        return ans;
    }
};
