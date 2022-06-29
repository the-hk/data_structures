#include "bst.h"

int main()
{
    bstCls hk;
    hk.add_tree(50);
    hk.add_tree(15);
    hk.add_tree(40);
    hk.add_tree(60);
    hk.add_tree(20);
    hk.add_tree(30);
    hk.add_tree(18);
    

    hk.print_tree_LNR();
    std::cout<<"-------------"<<std::endl;
    hk.print_tree_RNL();

    std::cout<<"search result : "<<hk.search_tree(50)<<std::endl;
    std::cout<<"search result : "<<hk.search_tree(17)<<std::endl;
    
}