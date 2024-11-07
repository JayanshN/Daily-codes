class Solution {
public:
    int maxDepth(string s) {
        int mD =0;
        int cD =0;

        for(auto ch : s){
            if(ch == '('){
                cD += 1;
                mD = max(cD,mD);
            }else if(ch == ')'){
                cD -= 1;
            }
        }
        return mD;
    }
};