#include <iostream>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class AVLTree {
public:
    int something;
};

int main() {
    std::cout << "Hello, AVL Tree!" << std::endl;
    return 0;
}
