#include <iostream>
#include <random>

struct bstStc
{
    int val;
    bstStc *left = nullptr;
    bstStc *right = nullptr;
};

class bstCls
{
    public:
    bstCls();
    ~bstCls();
    int add_tree(int newValue);
    int remove_tree(int removed_val);    
    int print_tree_LNR();
    int print_tree_RNL();
    int search_tree(int searchVal);
    int get_treeSize();

    private:
    bstStc *bst_root = nullptr;
    int tree_size = 0;
    int print_tree_rec_LNR(bstStc *node);
    int print_tree_rec_RNL(bstStc *node);
    bstStc* tree_min_val(bstStc* node);
    bstStc* tree_delete_Node(bstStc* root, int key);
    void clear_memory(bstStc *node);

};
