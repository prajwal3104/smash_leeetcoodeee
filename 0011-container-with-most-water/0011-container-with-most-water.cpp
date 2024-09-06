class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0, high = height.size() - 1;
        int maxArea = 0;
        
        while(low < high){
            int length = min(height[low], height[high]);
            int width = high - low;
            int curLeng = length * width;
            maxArea = max(maxArea, curLeng);
            
            if(height[low] < height[high]){
                low++;
            }else{
                high--;
            }
        }
        return maxArea;
        
    }
};