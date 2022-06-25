#include "bst.h"

bstCls::bstCls()
{
    std::cout<<"bstCls was created"<<std::endl;
}

bstCls::~bstCls()
{
    std::cout<<"bstCls was destroyed"<<std::endl;
}

int bstCls::add_tree(int newValue)
{
    if(this->bst_root == nullptr)
    {
        /* create a root node for tree */
        this->bst_root = new bstStc;
        this->bst_root->val = newValue;
        return 0;
    }

    bstStc *iter = this->bst_root;
    if(newValue > this->bst_root->val)
    {
        /* right node */  
        iter = iter->right;
        add_tree()
    }

    if(newValue < this->bst_root->val)
    {
        /* left node */
        iter = iter->left;

    }
}

int bstCls::remove_tree()
{

}

int bstCls::print_tree()
{

}

int bstCls::search_tree()
{

}