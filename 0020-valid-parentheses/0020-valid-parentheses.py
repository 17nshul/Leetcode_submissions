class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        bracketPair = {")":"(","}":"{","]":"["}

        for c in s:
            if c in bracketPair:
                if stack and stack[-1]== bracketPair[c]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        
        return len(stack) == 0