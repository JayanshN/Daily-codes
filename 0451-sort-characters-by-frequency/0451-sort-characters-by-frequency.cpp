class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        multimap<int,char> smp;
        string res ="";

        for(auto ch : s){
            mp[ch]++;
        }

        for(auto ch : mp){
            smp.insert({ch.second, ch.first});
        }

        for(auto it = smp.rbegin(); it != smp.rend(); ++it){
            res += string(it->first,it->second);
        }
        return res;
    }
};