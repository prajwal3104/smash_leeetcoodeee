class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        maxz=0
        l = 0
        dct = {}
        for ind,num in enumerate(nums):
            #we check if this num in dct
            dct[num] = 1 if num not in dct else dct[num] + 1
            #if after add 1 to cur number count occurance
            #We saw that number of occurance more then k 
            #We move left pointer while we not gain our candition
            while dct[num] >k:
                dct[nums[l]] -=1
                l+=1
            maxz = max(maxz,ind - l +1)
        return maxz