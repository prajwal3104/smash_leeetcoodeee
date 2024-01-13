class Solution:
    def minSteps(self, s: str, t: str) -> int:
        cnt_s = Counter(s)
        cnt_t = Counter(t)

        total_steps = sum((cnt_s - cnt_t).values())

        return total_steps

        