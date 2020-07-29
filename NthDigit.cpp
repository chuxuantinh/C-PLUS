class Solution {
public:
    int findNthDigit(int n) {
        long long current = 9, digits = 1, pwr = 1;
	    for (; n > current * digits; n -= (current * digits), digits++, current *= 10, pwr *= 10);
	    return to_string(pwr + ((n - 1) / digits))[(n - 1) % digits] - '0';
    }
};
