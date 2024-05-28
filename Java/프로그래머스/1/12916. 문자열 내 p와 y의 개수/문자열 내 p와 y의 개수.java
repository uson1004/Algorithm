import java.util.*;

class Solution {
    boolean solution(String s) {
        boolean answer = true;
        String[] alpha = s.toLowerCase().split("");
        int pcount = 0, ycount = 0;

        for (int i = 0; i < alpha.length; i++) {
            if ("p".equals(alpha[i])) {
                pcount++;
            } else if ("y".equals(alpha[i]))
                ycount++;
        }
        if (pcount != ycount) {
            return false;
        }
        return true;
    }
}