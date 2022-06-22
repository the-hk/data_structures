#include "linkedlist.h"

int main()
{
    
    linkedlist hk;
    linkedlistStc hkStc [10];
    for(int i = 0; i<10 ;i++)
    {
        hkStc[i].val = i*10;
        hk.add_member(&(hkStc[i]));
    }
    hk.print_list();
    
    hk.remove_member(1);
    hk.remove_member(5);
    hk.remove_member(7);
    hk.print_list();
    
    

}