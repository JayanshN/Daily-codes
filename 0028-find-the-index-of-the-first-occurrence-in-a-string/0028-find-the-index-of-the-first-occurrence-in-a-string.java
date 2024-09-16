import java.util.Scanner;
class Solution {
   public static int strStr(String haystack, String needle) {
      if(haystack.contains(needle)){
          return haystack.indexOf(needle);
      }else{
          return -1;
      }
    }
    public static void main(String[] args) {
        String haystack,needle;
        
        Scanner sc = new Scanner(System.in);
        haystack = sc.next();
        needle = sc.next();
         
        System.out.println(strStr(haystack,needle)); 
    }
}