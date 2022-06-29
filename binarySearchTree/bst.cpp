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
    this->tree_size++;
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

int bstCls::remove_tree(int removed_val)
{
    this->tree_size--;
    tree_delete_Node(this->bst_root, removed_val);
    return 1;
}

bstStc* bstCls::tree_delete_Node(bstStc* root, int key)
{
    if (root == nullptr)
    {
        return root;
    }
        
 
    if (key < root->val)
    {
        root->left = tree_delete_Node(root->left, key);
    }
    else if (key > root->val)
    {
        root->right = tree_delete_Node(root->right, key);
    }
    else 
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            return nullptr;
        }
        else if(root->left == nullptr) 
        {
            bstStc* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == nullptr) 
        {
            bstStc* temp = root->left;
            free(root);
            return temp;
        }
        bstStc* temp = tree_min_val(root->right);
        root->val = temp->val;
        root->right = tree_delete_Node(root->right, temp->val);
    }
    return root;
}

bstStc* bstCls::tree_min_val(bstStc* node)
{
    bstStc* current = node;
 
    while (current && current->left != nullptr)
    {
        current = current->left;
    }
 
    return current;
}

int bstCls::print_tree_LNR()
{
    print_tree_rec_LNR(this->bst_root);
}

int bstCls::print_tree_RNL()
{
    print_tree_rec_RNL(this->bst_root);
}

int bstCls::print_tree_rec_LNR(bstStc *node)
{     
    if(node->left != nullptr)
    {
        this->print_tree_rec_LNR(node->left);
    }
    std::cout<<node->val<<std::endl;
    if(node->right != nullptr)
    {
        this->print_tree_rec_LNR(node->right);
    }
    return 1;
}

int bstCls::print_tree_rec_RNL(bstStc *node)
{     
    if(node->right != nullptr)
    {
        this->print_tree_rec_RNL(node->right);
    }
    std::cout<<node->val<<std::endl;
    if(node->left != nullptr)
    {
        this->print_tree_rec_RNL(node->left);
    }
    return 1;
}

int bstCls::search_tree(int searchVal)
{
    bstStc *iter = this->bst_root;
    while(1)
    {
        if((iter->left == nullptr) && (iter->right == nullptr))
        {
            break;
        } 
        if(searchVal > iter->val)
        {
            /* right node */
            if(iter->right != nullptr)
            {
                iter = iter->right;
            }  
        }
        else if(searchVal < iter->val)
        {
            /* left node */
            if(iter->left != nullptr)
            {
                iter = iter->left;
            }  
        }
        if(iter->val == searchVal)
        {
            return 1;
        }
    }
    return -1;
}

int bstCls::get_treeSize()
{    
    return tree_size;
}