class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        temp = {}
        ans = []

        for num in nums:
            if num not in temp:
                temp[num] = 0

            i = temp[num]

            if i == len(ans):
                ans.append([])

            ans[i].append(num)

            temp[num] += 1

        return ans