/*
 * https://leetcode.com/problems/populating-next-right-pointers-in-each-node/description/
 */
class Solution {
	public:
		void connect(TreeLinkNode *root) {
			if(root == NULL)
				return;
			queue<struct TreeLinkNode *> q;
			q.push(root);
			q.push(NULL);
			while(!q.empty()) {
				TreeLinkNode *t = q.front();
				q.pop();
				if(t != NULL) {
					t->next = q.front();
					if(t->left) q.push(t->left);
					if(t->right) q.push(t->right);
				} else if (!q.empty())
					q.push(NULL);
			}
		}
};
