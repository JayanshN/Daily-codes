class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for(int i=0; i<s.length(); i++){
            map<char,int> mp;
            for(int j=i; j<s.length(); j++){
                mp[s[j]]++;

                int lF = INT_MAX;
                int mF = INT_MIN;

                for(auto it : mp){
                    lF = min(lF,it.second);
                    mF = max(mF,it.second);
                }
                ans += mF-lF;
            }
        }

        return ans;
    }
};