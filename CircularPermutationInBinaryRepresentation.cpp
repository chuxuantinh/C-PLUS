class Solution {
public:
    vector<int> circularPermutation(int n, int start) {
        vector<int> v{0,1};
        for (int i = 2; i <= n; i++) {
            for (int j = v.size() - 1; j >= 0; j--) v.push_back(v[j] + (1<<(i-1)));
        }
        rotate(begin(v), find(begin(v), end(v), start), end(v));
        return v;
    }
};
