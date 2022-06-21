#include "ds_stack.h"  

ds_stack::ds_stack()
{
    std::cout << "new ds_stack was created"<<std::endl;
    this->ds_stackPointer = new ds_stackStruct[this->ds_stack_size];
}

ds_stack::~ds_stack()
{
    std::cout << "bye bye :)"<<std::endl;
}

int ds_stack::pop(ds_stackStruct *data)
{
    if( (this->ds_stackFulness + 2) > (this->ds_stack_size) )
    {
        /* increase the ds_stack size*/

    }
    else
    {
        this->ds_stackFulness++;
        this->ds_stackPointer[ds_stackFulness] = *data;
    }
    return 1;
}

int ds_stack::push(ds_stackStruct *data)
{

}

int ds_stack::get_ds_stackSize()
{
    return this->ds_stack_size;
}

void ds_stack::printds_stack()
{

}

int ds_stack::resizeds_stack(int ds_stackDirection)
{
    if(ds_stackDirection == increase)
    {
        std::cout << "i am in increase"<<std::endl;
        /* 1: create a new array with increased size */
        ds_stackStruct *tempArr = new ds_stackStruct[this->ds_stack_size + 4]; 
        /* 2: copy old array to new array */
        std::copy(ds_stackPointer,ds_stackPointer+ds_stack_size,tempArr);
    }
    else if(ds_stackDirection == decrease)
    {
        std::cout << "i am in decrease"<<std::endl;

    }
}