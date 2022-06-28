#include "bst.h"

bstCls::bstCls()
{
    std::cout<<"bstCls was created"<<std::endl;
    this->bst_root = nullptr;
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
        this->bst_root->left = nullptr;
        this->bst_root->right = nullptr;
        this->bst_root->val = newValue;
        return 0;
    }

    bstStc *iter = this->bst_root;
    while(1)
    {
        if(newValue > iter->val)
        {
            /* right node */  
            if(iter->right == nullptr)
            {
                iter->right = new bstStc;
                iter->right->val = newValue;
                return 1; 
            }
            else
            {
                iter = iter->right;
            }

        }
        else if(newValue <= iter->val)
        {
            /* left node */
            if(iter->left == nullptr)
            {
                iter->left = new bstStc;
                iter->left->val = newValue;
                return 1 ;
            }
            else
            {
                iter = iter->left;
            }
        }
    }
    return -1;
}

int bstCls::remove_tree()
{
    return 1;
}

int bstCls::print_tree_LNR()
{
    print_tree_rec(this->bst_root);
}

int bstCls::print_tree_rec(bstStc *node)
{     
    int local_base_flag = 0;
    if(node->left != nullptr)
    {
        this->print_tree_rec(node->left);
    }
    std::cout<<node->val<<std::endl;
    if(node->right != nullptr)
    {
        this->print_tree_rec(node->right);
    }
    return 1;
}

int bstCls::search_tree()
{
    return 1;
}

int bstCls::get_treeSize()
{
    int tree_size = 0;

    
    return tree_size;
}