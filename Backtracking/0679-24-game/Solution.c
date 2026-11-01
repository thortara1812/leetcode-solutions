bool dfs(double nums[], int n);
#define EPS 1e-6
bool judgePoint24(int* cards, int cardsSize) {
    double nums[4];
    for (int i = 0; i < cardsSize; i++) {
        nums[i] = (double)cards[i];
    }
    return dfs(nums, cardsSize);
}

// Recursive DFS helper
bool dfs(double nums[], int n) {
    if (n == 1) {
        return fabs(nums[0] - 24.0) < EPS;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double a = nums[i], b = nums[j];
            double next[4];
            int idx = 0;

            // Put remaining numbers into next[]
            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {
                    next[idx++] = nums[k];
                }
            }

            // Candidate results of combining a and b
            double candidates[6];
            int size = 0;
            candidates[size++] = a + b;
            candidates[size++] = a - b;
            candidates[size++] = b - a;
            candidates[size++] = a * b;
            if (fabs(b) > EPS) candidates[size++] = a / b;
            if (fabs(a) > EPS) candidates[size++] = b / a;

            // Try each candidate recursively
            for (int c = 0; c < size; c++) {
                next[idx] = candidates[c];
                if (dfs(next, idx + 1)) {
                    return true;
                }
            }
        }
    }
    return false;
}