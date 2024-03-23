class Solution:
    def isPalindrome(self , s):
      return s == s[::-1]
    def longestPalindrome(self, s: str) -> str:
      maxa = 1
      ans = s[0]
      for i in range(len(s)):
        for j in range(i,len(s)):
          if self.isPalindrome(s[i:j+1]):
            if maxa < len(s[i:j+1]):
              maxa = len(s[i:j+1])
              ans = (s[i:j+1]) 
      return ans    
