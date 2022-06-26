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
    while(1)
    {
        if(newValue > iter->val)
        {
            /* right node */  
            if(iter->right == nullptr)
            {
                iter->right = new bstStc;
                iter->val = newValue;
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
                iter->val = newValue;
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

int bstCls::print_tree()
{
    bstStc *iter = this->bst_root;
    int isTreeCompleted = 0;
    int left_counter = 0;
    int right_counter = 0;

    while(isTreeCompleted == 0)
    {
        std::cout<<iter->val<<std::endl;
    }
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

