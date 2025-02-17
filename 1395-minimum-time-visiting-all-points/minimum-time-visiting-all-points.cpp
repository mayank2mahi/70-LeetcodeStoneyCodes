class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int a = 0;
        int b = 0;
        int t = 0;
        int j = 0;
        int k = 0;
        vector<int> v = points[0];
        a = v[0];
        b = v[1];
        for(int i = 1; i < points.size(); i++){
            vector<int> m = points[i];
            j = m[0];
            k = m[1];
            t += max(abs(j-a),abs(k-b));
            a = j;
            b = k;
        }
        return t;
    }
};