class Solution {
public:
    string defangIPaddr(string address) {
        string ch="";
        for(int i=0;i<address.size();i++){
            if(address[i]!='.'){
                ch+=address[i];
            }
            else{
                ch+="[.]";
            }
        }
    return ch;
    }
};
