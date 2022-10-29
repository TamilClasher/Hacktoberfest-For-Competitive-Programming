class Solution(object):
    def longestContinuousSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        l = []
        substring = s[0]
        letters = "abcdefghijklmnopqrstuvwxyz"
        for i, ch in enumerate(s[:-1]):
            curr = letters.index(ch)
            if ch == 'z':
                nxt = ''
            else:
                nxt = letters[curr + 1]
            if nxt == s[i + 1]:
                substring += nxt
            else:
                l.append(substring)
                substring = s[i + 1]
        l.append(substring)
        lengths = [len(x) for x in l]
        return max(lengths)
