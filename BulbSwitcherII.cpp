class Solution {
public:
    int flipLights(int n, int m) {
        if (n == 0) return 0;
        if (n >= 1 && m == 0) return 1;
        if (n == 1) return 2;
        else if (n == 2 && m == 1) return 3;
        else if (n == 2 && m > 1) return 4;
        else if (n >= 3 && m == 1) return 4;
        else if (n >= 3 && m == 2) return 7;
        else return 8;
    }
};
