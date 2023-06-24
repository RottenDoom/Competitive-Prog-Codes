class Solution: # https://leetcode.com/problems/tallest-billboard/editorial/
    def tallestBillboard(self, rods: List[int]) -> int:
        # The Dynamic Programming Solution
        # Make a HashSet with key-value pair as difference and taller respectively.
        # (0,0) key-value pair if we did not use any rods
        dp = {0: 0} 
        for r in rods: # Loop over every rod to give it 3 choices. 
            new_dp = dp.copy() # The first choice is to not use the current rod
            for diff, taller in dp.items(): # Now we loop over the items of the dp i.e., key val pairs
                shorter = taller - diff # Finding the shorter value as a storage

                new_dp[diff + r] = max(new_dp.get(diff + r, 0), taller + r) # When rod added to the taller side 

                new_diff = abs(shorter + r - taller)
                new_taller = max(shorter + r, taller)
                new_dp[new_diff] = max(new_dp.get(new_diff,0), new_taller) # Add the rod to the shorter side
            dp = new_dp # Coping the new dp found.
        return dp.get(0, 0) # Final answer

""" Here, for using the dp approach first thing that must cmHashSeote to mind is finding the choices of your
    iterator, the next thing we must know in this approach is How you are going to memoize the key-value   pair in the HashSet to optimize your problem and how you are going to traverse through the dp array
"""
      
