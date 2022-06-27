#include <iostream>
#include <random>

struct bstStc
{
    int val;
    bstStc *left;
    bstStc *right;
};

class bstCls
{
    public:
    bstCls();
    ~bstCls();
    int add_tree(int newValue);
    int remove_tree();
    int print_tree_LNR();
    int search_tree();

    private:
    bstStc *bst_root = nullptr;
    bstStc *bst_iter = nullptr;
    int get_treeSize();
    int print_tree_rec(bstStc *node);
    void print_tree_right(bstStc *node);

};