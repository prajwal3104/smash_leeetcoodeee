class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxi = 0
        n = len(height)
        left = 0
        right = n-1
        while left < right:
            area = min(height[left],height[right]) * (right-left)
            if area > maxi:
                maxi = area
            if height[left] > height[right]:
                right -= 1
            else:
                left += 1
        return maxi
