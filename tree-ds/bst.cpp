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

class BST {
public:
};

int main() {
    std::cout << "Hello, BST!" << std::endl;
    return 0;
}
