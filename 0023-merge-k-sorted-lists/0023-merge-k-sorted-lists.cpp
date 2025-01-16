/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> pq;
        ListNode* sol = new ListNode();
        ListNode* ans = sol;

        for(auto it: lists){
            while(it!=nullptr){
                pq.push(it->val);
                it = it->next;
            }
        }

        while(!pq.empty()){
            sol->next = new ListNode(pq.top());
            pq.pop();
            sol = sol->next;
        }
        return ans->next;
    }
};