#include <iostream>
#include <vector>

class TreeNode {
public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BST {
public:
    TreeNode *insert(TreeNode *root, int data) {
        if (root == nullptr) {
            root = new TreeNode(data);
            return root;
        } else if (data <= root->data) {
            root->left = insert(root->left, data);
        } else {
            root->right = insert(root->right, data);
        }

        return root;
    }

    void printTree(TreeNode *root) {
        if (root == nullptr) {
            return;
        }
        printTree(root->left);
        std::cout << root->data << '\n';
        printTree(root->right);
    }

    int dfs(TreeNode *root) {
        if (!root)
            return 0;

        int left = dfs(root->left);
        int right = dfs(root->right);

        if (left == -1 || right == -1 || std::abs(left - right) > 1)
            return -1;

        return 1 + std::max(left, right);
    }

    bool isBalanced(TreeNode *root) { return dfs(root) != -1; }

    TreeNode *constructBST(std::vector<int> &nums, int left, int right) {
        if (left > right)
            return nullptr;

        int mid = (right + left) / 2;

        TreeNode *root = new TreeNode(nums[mid]);

        root->left = constructBST(nums, left, mid - 1);
        root->right = constructBST(nums, mid + 1, right);

        return root;
    }
};

int main() {
    BST bst;
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    TreeNode *root = bst.constructBST(nums, 0, nums.size() - 1);

    bst.printTree(root);
    std::cout << "Balanced: " << bst.isBalanced(root) << '\n';
    return 0;
}
