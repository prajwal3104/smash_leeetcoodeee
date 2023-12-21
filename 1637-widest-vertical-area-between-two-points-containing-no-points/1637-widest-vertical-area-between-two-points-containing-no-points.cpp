class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size( );
        sort(points.begin( ), points.end( ));
        int widArea = 0;
        for(int i = 1; i < n; i++){
            widArea = max(widArea,points[i][0] - points[i - 1][0]);
        }
        return widArea;
        
    }
};

