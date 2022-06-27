#include "bst.h"

int main()
{
    bstCls hk;
    hk.add_tree(50);
    hk.add_tree(60);
    hk.add_tree(40);
    hk.add_tree(30);
    hk.add_tree(20);

    hk.print_tree_LNR();
    
}