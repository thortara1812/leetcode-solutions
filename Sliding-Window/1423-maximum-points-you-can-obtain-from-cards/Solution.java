class Solution {
    public int maxScore(int[] cardPoints, int k) {

        int n = cardPoints.length;

        // Total sum of all cards
        int totalSum = 0;

        for (int card : cardPoints) {
            totalSum += card;
        }

        // Number of cards we leave in the middle
        int windowSize = n - k;

        // If k == n, we take all cards
        if (windowSize == 0) {
            return totalSum;
        }

        // Find sum of first window
        int windowSum = 0;

        for (int i = 0; i < windowSize; i++) {
            windowSum += cardPoints[i];
        }

        int minWindowSum = windowSum;

        // Sliding window
        for (int i = windowSize; i < n; i++) {

            windowSum += cardPoints[i];
            windowSum -= cardPoints[i - windowSize];

            minWindowSum = Math.min(minWindowSum, windowSum);
        }

        // Take everything except the minimum middle window
        return totalSum - minWindowSum;
    }
}