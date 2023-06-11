class Solution:
    def get_key_by_value(self, dictionary, value):
        for key, val in dictionary.items():
            if val == value:
                return key
        return None

    def isValid(self, s: str) -> bool:
        stack = []
        opening_brackets = {'(', '{', '['}
        closing_brackets = {')', '}', ']'}
        bracket_pairs = {'(': ')', '{': '}', '[':']'}

        for char in s:
            if char in opening_brackets:
                stack.append(char)
            elif char in closing_brackets:
                x = stack.pop()
                if (len(stack) == 0) and (x != self.get_key_by_value(bracket_pairs,char)):
                    return False
        return len(stack) == 0
    
a = Solution()
print(a.isValid('([)]'))
print(a.isValid('()'))