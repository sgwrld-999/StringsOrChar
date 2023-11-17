import java.util.*; 

class Solution {
    public String toLowerCase(String s) {
        StringBuilder sb = new StringBuilder();
        for(int i = 0 ; i < s.length() ; i++){
            char curChar = s.charAt(i);
            if(curChar >= 'A' && curChar <= 'Z'){
                sb.append((char)(curChar + 32));
            } else {
                sb.append(curChar);
            }
        }
        return sb.toString();
    }
}

public class ToLowerCase{
    public static void main(String[] args){
        Solution sol = new Solution();
        String s = "Hello";
        System.out.println(sol.toLowerCase(s));
    }
}