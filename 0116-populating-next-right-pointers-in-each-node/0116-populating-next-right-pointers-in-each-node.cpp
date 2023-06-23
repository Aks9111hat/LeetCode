/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
     Node* connect(Node* root) {
    if (root == nullptr) {
        return root;
    }

    vector<vector<Node*>> levels;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<Node*> level;
        levels.push_back(level);

        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            levels.back().push_back(node);
            q.pop();

            if (node->left != nullptr) {
                q.push(node->left);
            }
            if (node->right != nullptr) {
                q.push(node->right);
            }
        }
    }

    for (auto& level : levels) {
        for (int i = 0; i < level.size() - 1; i++) {
            level[i]->next = level[i + 1];
        }
        level.back()->next = nullptr;
    }

    return root;
     }
};