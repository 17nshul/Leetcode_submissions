class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        mw=0
        currw=0
        mx=0
        for num in nums:
            if num>mx:
                mx=num
                currw=1
                mw=1
            elif num==mx:
                currw+=1
            else:
                currw=0
            mw = max(mw,currw)
        return mw
        