#include "ds_stack.h"

int main()
{
    ds_stack stc;
    ds_stackStruct data[20];
    for(int i =0; i<20; i++)
    {
        data[i].val = i*10;
        stc.push(&(data[i]));
        stc.printds_stack();  
    }

    ds_stackStruct coming_data[20];
    for(int i = 0; i<20; i++)
    {
        stc.pop(&(coming_data[i]));
        std::cout<<"coming data :"<<19 - i<<"="<<coming_data[i].val<<std::endl;
        stc.printds_stack();
    }

}