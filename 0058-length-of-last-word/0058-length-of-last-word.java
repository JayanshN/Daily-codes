class Solution {
    public int lengthOfLastWord(String s) {
        int lenthOfLastWord = 0;

        for(int i=s.length()-1;i>=0;i--) {
            
            if(s.charAt(i)!=' ') {
                lenthOfLastWord++;
            }else{
                if(lenthOfLastWord>0) return lenthOfLastWord;
            }
        }
        return lenthOfLastWord;
    }
}