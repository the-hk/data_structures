#include <iostream>

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
    int print_tree();
    int search_tree();

    private:
    bstStc *bst_root = nullptr;
    bstStc *bst_iter = nullptr;

};