class Solution {

    public List<String> removeInvalidParentheses(String s) {

        List<String> result = new ArrayList<>();

        // BFS queue
        Queue<String> queue = new LinkedList<>();
        queue.offer(s);

        // Avoid duplicate strings
        Set<String> visited = new HashSet<>();
        visited.add(s);

        boolean found = false;

        while (!queue.isEmpty()) {

            String current = queue.poll();

            // If current string is valid
            if (isValid(current)) {
                result.add(current);
                found = true;
            }

            // If a valid string is found at this level,
            // don't remove any more characters.
            if (found) {
                continue;
            }

            // Generate strings by removing one character
            for (int i = 0; i < current.length(); i++) {

                // Removing letters is never useful.
                if (current.charAt(i) != '(' &&
                    current.charAt(i) != ')') {
                    continue;
                }

                String next = current.substring(0, i)
                             + current.substring(i + 1);

                if (!visited.contains(next)) {
                    visited.add(next);
                    queue.offer(next);
                }
            }
        }

        return result;
    }

    // Checks whether parentheses are valid
    private boolean isValid(String s) {

        int balance = 0;

        for (char c : s.toCharArray()) {

            if (c == '(') {
                balance++;
            }
            else if (c == ')') {
                balance--;

                // More ')' than '('
                if (balance < 0) {
                    return false;
                }
            }
        }

        // Every '(' must have a matching ')'
        return balance == 0;
    }
}