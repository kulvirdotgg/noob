#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    int height;

    TreeNode(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class AVLTree {
public:
    TreeNode* root;
    AVLTree() {
        root = nullptr;
    }

    int height(TreeNode* root) {
        if(root == nullptr) {
            return -1;
        }
        return root->height;
    }

    TreeNode* insert(TreeNode* root, int data) {
        if (root == nullptr) {
            root = new TreeNode(data);
            return root;
        }

        if(data < root->data) {
            root->left = insert(root->left, data);
        }
        else {
            root->right = insert(root->right, data);
        }

        root->height = std::max(height(root->left), height(root->right)) + 1;

        return rotate(root);
    }

    TreeNode* rotate(TreeNode* root) {
        if(height(root->left) - height(root->right) > 1) {
            if(height(root->left->left) - height(root->left->right) > 0) {
                return rightRotate(root);
            }
            if(height(root->left->left) - height(root->left->right) < 0) {
                root->left = leftRotate(root->left);
                return rightRotate(root);
            }
        }

        if(height(root->left) - height(root->right) < -1) {
            if(height(root->right->left) - height(root->right->right) < 0) {
                return leftRotate(root);
            }
            if(height(root->right->left) - height(root->right->right) > 0) {
                root->right = rightRotate(root->right);
                return leftRotate(root);
            }
        }

       return root;
    }

    TreeNode* rightRotate(TreeNode* parent) {
        TreeNode* child = parent->left;
        TreeNode* t = child->right;

        child->right = parent;
        parent->left = t;

        parent->height = std::max(height(parent->left), height(parent->right) + 1);
        child->height = std::max(height(child->left), height(child->right) + 1);

        return child;
    }

    TreeNode* leftRotate(TreeNode* child) {
        TreeNode* parent = child->right;
        TreeNode* t = parent->left;

        parent->left = child;
        child->right = t;

        child->height = std::max(height(child->left), height(child->right) + 1);
        parent->height = std::max(height(parent->left), height(parent->right) + 1);

        return parent;
    }
    
    int dfs(TreeNode* root){
        if(!root) return 0;

        int left = dfs(root->left);
        int right = dfs(root->right);

        if(left == -1 || right == -1 || std::abs(left - right) > 1) return -1;

        return 1 + std::max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        return dfs(root) != -1;
    }
};

int main() {
    AVLTree tree;
    TreeNode* root = nullptr;

    for(int i = 1; i <= 1000; i++) {
        root = tree.insert(root, i);
    }

    std::cout << root->height << '\n';
    std::cout << tree.isBalanced(root) << '\n';

    return 0;
}
