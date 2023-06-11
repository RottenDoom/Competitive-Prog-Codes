class Solution:
    def maxArea(self, height):
        n = len(height)
        i = 0
        j = n - 1
        l = []
        while i < j:
            area = (min(height[i],height[j]))*(j - i)
            print((i,j))
            l.append(area)
            if height[i] <= height[j]:
                i += 1
            else:
                j -= 1

        return max(l)
a = Solution()
print(a.maxArea([1,8,6,2,5,4,8,3,7]))