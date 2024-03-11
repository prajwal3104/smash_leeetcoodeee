class Solution:
    def customSortString(self, order: str, s: str) -> str:
        count_chars = defaultdict(int)
        chars = ""
        for char in s:
            count_chars[char] += 1
        for char in order:
            if char in count_chars.keys():
                chars += char * count_chars[char]
        s = ''.join(char for char in s if char not in order)
        return chars + s