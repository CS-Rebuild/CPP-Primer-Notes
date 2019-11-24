#ifndef T_13_28_H
#define T_13_28_H
#include <string>
class TreeNode {
public:
    TreeNode() : value(std::string()), count(new int(1)), left(nullptr), right(nullptr) {}
    TreeNode(const TreeNode &tn) : value(tn.value), count(tn.count), left(tn.left), right(tn.right) { 
        ++*count; 
    }
    TreeNode& operator=(const TreeNode &rhs) {
        ++*rhs.count;
        if (--*count == 0) {
            delete count;
            delete left;
            delete right;
        }
        value = rhs.value;
        count = rhs.count;
        left = rhs.left;
        right = rhs.right;
        return *this;
    }
    ~TreeNode() {
        if (--*count == 0) {
            delete count;
            delete left;
            delete right;
        }
    }
private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
};

class BinStrTree {
public:
    BinStrTree() : root(new TreeNode()) {}
    BinStrTree(const BinStrTree &bst) : root(new TreeNode(*bst.root)) {}
    BinStrTree& operator=(const BinStrTree &rhs) {
        auto newp = new TreeNode(*rhs.root);
        delete root;
        root = newp;
        return *this;
    }
private:
    TreeNode *root;
};



#endif
