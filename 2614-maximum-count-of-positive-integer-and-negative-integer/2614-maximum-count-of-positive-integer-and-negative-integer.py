class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        count_pos=0
        count_neg=0
        for num in nums :
            if num>0 :
                count_pos+=1
            elif num<0 :
                count_neg+=1
        if count_pos>count_neg :
            return count_pos
        else :
            return count_neg



