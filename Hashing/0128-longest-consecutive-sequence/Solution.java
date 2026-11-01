import java.util.HashSet;

class Solution {
    public int longestConsecutive(int[] nums) {

        // Store all numbers in HashSet
        HashSet<Integer> set = new HashSet<>();

        for (int num : nums) {
            set.add(num);
        }

        int longest = 0;

        // Check every number
        for (int num : set) {

            // Only start counting if num is
            // the beginning of a sequence
            if (!set.contains(num - 1)) {

                int currentNum = num;
                int currentLength = 1;

                // Keep checking consecutive numbers
                while (set.contains(currentNum + 1)) {
                    currentNum++;
                    currentLength++;
                }

                // Update maximum length
                longest = Math.max(longest, currentLength);
            }
        }

        return longest;
    }
}