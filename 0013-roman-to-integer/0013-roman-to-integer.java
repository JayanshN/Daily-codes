class Solution {
    public int romanToInt(String s) {
        HashMap <Character,Integer> map = new  HashMap <Character,Integer>();
        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);

        char[] ans = s.toCharArray();
        int total =0;
        int i;
        for( i = 0;i < ans.length-1 ;i++)
        { 
            if(map.get(ans[i]) < map.get(ans[i+1]))
            { total += map.get(ans[i+1])-map.get(ans[i]);
            i++;}
            else total += map.get(ans[i]);
        }
        if(i==ans.length-1) total+=map.get(ans[i]);
        return total;
    }
}