class Solution {
public:
    int clumsy(int N) {
        int a[5]={-1, 1, 2, 6, 7};
        int b[4]={1, 2, 2, -1};
        return N<5?a[N]:N+b[N%4];
    }
};
