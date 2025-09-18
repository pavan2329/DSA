class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        dictionary = {}

        # Count frequency of each character in magazine
        for char in magazine:
            if char not in dictionary:
                dictionary[char] = 1
            else:
                dictionary[char] += 1

        # Check if ransomNote can be constructed
        for char in ransomNote:
            if char not in dictionary or dictionary[char] == 0:
                return False
            dictionary[char] -= 1

        return True

        