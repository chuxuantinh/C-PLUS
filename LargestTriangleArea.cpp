class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        auto det = [&](int i, int j) {
            return points[i][0] * points[j][1] - points[j][0] * points[i][1];     
        };
            
        // double of the max area.
        int area = 0;
        int n = points.size();
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    // Determinant formula:
                    // https://people.richland.edu/james/lecture/m116/matrices/applications.html
                    int t = det(j, k) - det(i, k) + det(i, j);
                    area = max(area, max(-t, t));
                }
            }
        }
        
        // only do division in the end.
        return area / 2.0f;
    }
};
