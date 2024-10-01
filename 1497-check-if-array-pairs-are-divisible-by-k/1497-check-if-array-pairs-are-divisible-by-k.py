class Solution:
    def canArrange(self, arr: List[int], k: int) -> bool:
        r = Counter(map(lambda x: x % k, arr))
        return r[0] % 2 == 0 and all(r[i] == r[k-i] for i in range(1, k))