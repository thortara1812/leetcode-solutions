class Solution {
    public int minAddToMakeValid(String s) {

        int open = 0;
        int additions = 0;

        for (char ch : s.toCharArray()) {

            if (ch == '(') {
                // We have one unmatched opening bracket
                open++;
            } 
            else {
                // We found a closing bracket
                if (open > 0) {
                    // Match it with an opening bracket
                    open--;
                } 
                else {
                    // No opening bracket available
                    // We need to insert one
                    additions++;
                }
            }
        }

        // Remaining opening brackets need closing brackets
        additions += open;

        return additions;
    }
}