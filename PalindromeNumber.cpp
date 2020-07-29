class Solution {
public:
    int reverse(int x) {
        if(x == 0) return 0;
        int res = 0;
        for(; x; x /= 10) {
          int n = (x % 10);
          if (res >= INT_MAX/10 - n )
            return -1;
          res = res * 10 + n;
        }
        return res;
    }
    bool isPalindrome(int x) {
        if(x<0) return false;
        return x == reverse(x);
    }
};
