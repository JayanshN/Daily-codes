class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());

        string res="";

        for(int i=0; i<s.length(); i++){
            string word="";
            while(i<s.length() && s[i]!=' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                res+=' '+word;
            }
        }
        return res.substr(1);
    }
};