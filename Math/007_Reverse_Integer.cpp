/*
 * Problem: LeetCode 7 - Reverse Integer
 * Difficulty: Medium
 * Solver: Ansh Dhyani
 * Logic: Use modulo % 10 to extract digits and build the reverse number.
 * Note: Uses 'long long' to handle overflow checks before casting to int.
 * Time Complexity: O(log(x)) - We process roughly one digit per iteration.
 * Space Complexity: O(1) - We only use a few variables.
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        while (x != 0) {
            int rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        
        // LIMIT CHECK:
        if (rev < INT_MIN || rev > INT_MAX) {
            return 0;
        }
        
        return (int)rev;
    }
};
