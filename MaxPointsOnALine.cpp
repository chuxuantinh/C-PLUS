class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        int res = 0;
        for(int i = 0; i < p.size(); i++) {
            unordered_map<string, int> m;
            int dup = 0, local = 0;
            for(int j = i+1; j < p.size(); j++) {
                int dx = p[j][0] - p[i][0], dy = p[j][1] - p[i][1];
                if(dx == 0 && dy == 0) {
                    dup++;
                    continue;
                }

                int d = GCD(dx, dy);
                string key = to_string((dx/d)) + "#"+to_string((dy/d));
                local = max(local, ++m[key]);
            }
            res = max(res, local+ dup + 1);
        }
        return res;
    }
    
    int GCD(int a, int b) {
        if(b == 0) return a;
        return GCD(b, a%b);
    }
};
