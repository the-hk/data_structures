#include "ds_stack.h"

int main()
{
    ds_stack stc;

    ds_stackStruct data;
    data.val = 10;
    stc.push(&data);
    stc.printds_stack();

    ds_stackStruct data2;
    data2.val = 20;
    stc.push(&data2);
    stc.printds_stack();

    ds_stackStruct data3;
    data3.val = 30;
    stc.push(&data3);
    stc.printds_stack();

    ds_stackStruct data4;
    data4.val = 40;
    stc.push(&data4);
    stc.printds_stack();

    ds_stackStruct data5;
    data5.val = 50;
    stc.push(&data5);
    stc.printds_stack();

    ds_stackStruct data6;
    data6.val = 60;
    stc.push(&data6);
    stc.printds_stack();

    ds_stackStruct coming_data;
    stc.pop(&coming_data);
    std::cout<<"coming data : 1 ="<<coming_data.val<<std::endl;
    stc.printds_stack();
        
    ds_stackStruct coming_data2;
    stc.pop(&coming_data2);
    std::cout<<"coming data : 2 ="<<coming_data2.val<<std::endl;
    stc.printds_stack();

    ds_stackStruct coming_data3;
    stc.pop(&coming_data3);
    std::cout<<"coming data : 3 ="<<coming_data3.val<<std::endl;
    stc.printds_stack();

    ds_stackStruct coming_data4;
    stc.pop(&coming_data4);
    std::cout<<"coming data : 4 ="<<coming_data4.val<<std::endl;
    stc.printds_stack();
}