//https://www.lintcode.com/problem/659/description
class Solution:
    """
    @param: strs: a list of strings
    @return: encodes a list of strings to a single string.
    """
    def encode(self, strs):
        return ';daksh;'.join(strs)
        # write your code here

    """
    @param: str: A string
    @return: dcodes a single string to a list of strings
    """
    def decode(self, strs):
        return strs.split(';daksh;')
        # write your code here
