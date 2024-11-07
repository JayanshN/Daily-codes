class Solution {
public:
    string frequencySort(string s) {
        //hash map to get frequency
        unordered_map<char,int> freqMap;
        for(char c:s){
            freqMap[c]++;
        }
        //map - int, char
        vector<pair<int,char>> freqVec;
        for(auto& entry:freqMap){
            freqVec.push_back({entry.second,entry.first});
        }
        // sort(freqVec.begin(), freqVec.end(), [](pair<int, char>& a, pair<int, char>& b) {
        //     return a.first > b.first;  // Sort by frequency in descending order
        // });
        sort(freqVec.begin(), freqVec.end());

        string result;
        for(auto it = freqVec.rbegin(); it != freqVec.rend(); ++it){
            result+=string(it->first,it->second);
        }
        return result;

    }
};