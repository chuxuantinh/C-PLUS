class Solution {
public:
    int reverse(int i,int base=10) {
        std::int32_t reversed = 0;
        const bool negative = i < 0;
        
        while (negative ? i <= -base : i >= base) {
            auto const digit = i % base; // negative if i < 0
            reversed = reversed * base + digit;
            i /= base;
        }

        // final digit may cause overflow
        const bool overflow = negative ? (reversed < (INT32_MIN - i) / base) : (reversed > (INT32_MAX - i) / base);
        if (overflow) {
            return 0;
        }

        return reversed * base + i;
    }
};
