class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        l = [word for word in words if word[:len(pref)]==pref]
        return len(l)