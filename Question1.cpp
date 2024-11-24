#include <bits/stdc++.h>
#include <vector>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

int diameterRecur(Node *root, int &ans) {
    if (root == nullptr)
        return 0;

    int lHeight = diameterRecur(root->left, ans);
    int rHeight = diameterRecur(root->right, ans);

    ans = max(ans, lHeight + rHeight); 

    return 1 + max(lHeight, rHeight);
}

int diameter(Node *root) {
    int ans = 0;
    diameterRecur(root, ans);
    return ans + 1;
}

Node* buildTree(const vector<int>& arr) {
    if (arr.empty() || arr[0] == -1)
        return nullptr;

    Node* root = new Node(arr[0]);
    queue<Node*> q;
    q.push(root);
    int i = 1;

    while (!q.empty() && i < arr.size()) {
        Node* curr = q.front();
        q.pop();

        // 插入左子節點
        if (arr[i] != -1) {
            curr->left = new Node(arr[i]);
            q.push(curr->left);
        }
        i++;

        // 插入右子節點
        if (i < arr.size() && arr[i] != -1) {
            curr->right = new Node(arr[i]);
            q.push(curr->right);
        }
        i++;
    }

    return root;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, -1, -1, -1, -1, 6, 7};
    Node* root = buildTree(arr);
    cout << diameter(root) << endl;

    return 0;
}
