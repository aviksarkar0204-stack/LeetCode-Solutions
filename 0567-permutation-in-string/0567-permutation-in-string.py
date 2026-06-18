class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        window_size = len(s1)
        freq1 = {}
        freq2 = {}
        for char in s1:
            freq1[char] = freq1.get(char, 0) + 1
        for char in s2[:len(s1)]:
            freq2[char] = freq2.get(char, 0) + 1
        if freq1 == freq2:
            return True
        for i in range(len(s1), len(s2)):
            freq2[s2[i]] = freq2.get(s2[i], 0) + 1
            left_char = s2[i - len(s1)]
            freq2[left_char] -= 1
            if freq2[left_char] == 0:
                del freq2[left_char] 
    
            if freq1 == freq2:
                return True
        return False
