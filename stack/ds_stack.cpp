#include "ds_stack.h"  

ds_stack::ds_stack()
{
    std::cout << "new ds_stack was created"<<std::endl;
    this->ds_stackPointer = new ds_stackStruct[this->ds_stack_size];
}

ds_stack::~ds_stack()
{
    std::cout << "bye bye :)"<<std::endl;
    delete[] ds_stackPointer;
}

int ds_stack::pop(ds_stackStruct *data)
{
    this->ds_stackCounter--;
    *data = this->ds_stackPointer[ds_stackCounter];    
    if( (this->ds_stackCounter + 4) < (this->ds_stack_size) )
    {
        /* decrease the ds_stack size*/
        this->resizeds_stack(decrease);
    }
    return 1;
}

int ds_stack::push(ds_stackStruct *data)
{
    this->ds_stackPointer[ds_stackCounter] = *data;
    this->ds_stackCounter++;

    if( (this->ds_stackCounter + 2) > (this->ds_stack_size) )
    {
        /* increase the ds_stack size*/
        this->resizeds_stack(increase);
    }
    return 1;
}

int ds_stack::get_ds_stackSize()
{
    return this->ds_stack_size;
}

void ds_stack::printds_stack()
{
    for(int i = 0; i<ds_stackCounter; i++)
    {
        std::cout<<this->ds_stackPointer[i].val<<std::endl;
    }
    std::cout<<"stack_counter = "<<this->ds_stackCounter<<std::endl;
    std::cout<<"stack_size = "<<this->ds_stack_size<<std::endl;
}

int ds_stack::resizeds_stack(int ds_stackDirection)
{
    if(ds_stackDirection == increase)
    {
        std::cout << "i am in increase"<<std::endl;
        /* 1: create a new array with increased size */
        ds_stackStruct *tempArr = new ds_stackStruct[this->ds_stack_size + stack_size_inc_dec]; 
        /* 2: copy old array to new array */
        std::copy(ds_stackPointer,ds_stackPointer+ds_stack_size,tempArr);
        delete[] ds_stackPointer;
        ds_stackPointer = tempArr;
        this->ds_stack_size = this->ds_stack_size + stack_size_inc_dec;
    }
    else if(ds_stackDirection == decrease)
    {
        std::cout << "i am in decrease"<<std::endl;
        /* 1: create a new array with increased size */
        this->ds_stack_size = this->ds_stack_size - stack_size_inc_dec;
        ds_stackStruct *tempArr = new ds_stackStruct[this->ds_stack_size]; 
        /* 2: copy old array to new array */
        std::copy(ds_stackPointer,ds_stackPointer+ds_stack_size,tempArr);
        delete[] ds_stackPointer;
        ds_stackPointer = tempArr;
    }
    return 1;
}