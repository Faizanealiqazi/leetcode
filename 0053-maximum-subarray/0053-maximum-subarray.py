class Solution:
    def maxSubArray(self, l1: List[int]) -> int:
        max,sum=l1[0],0;
        for i in range(len(l1)):
            if l1[i] >= l1[i] + sum:
                sum = l1[i]
            
            else:
                sum = l1[i] + sum

            if sum > max :
                max = sum

        return max