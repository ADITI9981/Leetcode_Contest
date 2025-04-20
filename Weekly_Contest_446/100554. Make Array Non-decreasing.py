class Solution(object):
    def maximumPossibleSize(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count =0
        i=0
        n=len(nums)
        prev=-1
        
        while i<n:
            min_val =max_val=nums[i]
            j=i
            while j<n:
                min_val =min(min_val,nums[j])
                max_val = max(max_val,nums[j])
                if max_val >=prev:
                    break
                j+=1
                
            if max_val >=prev:
                prev =max_val
                count +=1
                i = j+1
            else:
                break
        return count
