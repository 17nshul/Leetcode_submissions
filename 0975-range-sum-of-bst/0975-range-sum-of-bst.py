# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    sum=0
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        global sum
        if root is None:
            return
        if root.val<=high and root.val>=low:
            self.sum += root.val
        
        self.rangeSumBST(root.left,low,high)
        self.rangeSumBST(root.right,low,high)
        return self.sum