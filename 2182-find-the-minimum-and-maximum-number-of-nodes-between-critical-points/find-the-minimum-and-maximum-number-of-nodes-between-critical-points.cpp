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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp = head->next;
        int x = head->val;
        vector<int> critical;
        int index = 1;
        while (temp->next != NULL) {
            if (x < temp->val) {
                if (temp->next->val < temp->val) {
                    critical.push_back(index+1);
                }

            } else if (x > temp->val) {
                if (temp->next->val > temp->val) {
                    critical.push_back(index+1);
                }
            }
            x=temp->val;
            temp=temp->next;
            index++;
        }
        vector<int>ans;
        if(critical.size()<2)
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        int maxdis=critical[critical.size()-1]-critical[0];
        int mindis=INT_MAX;
        for(int i=1;i<critical.size();i++)
        {
            mindis=min(mindis,(critical[i]-critical[i-1]));
        }
        ans.push_back(mindis);
        ans.push_back(maxdis);
        return ans;
    }
};