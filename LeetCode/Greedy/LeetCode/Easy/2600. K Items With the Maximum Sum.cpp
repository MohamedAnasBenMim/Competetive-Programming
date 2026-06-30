class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int x=0;
       vector<int> v;
       for(int i=0;i<numOnes;i++){
        v.push_back(1);
       }
        for(int i=0;i<numZeros;i++){
            v.push_back(0);
       }
        for(int i=0;i<numNegOnes;i++){
            v.push_back(-1);
       }
       sort(v.begin(),v.end(),greater());
       for(int i=0;i<k;i++){
        x+=v[i];
       }
        return x;
    }
};
