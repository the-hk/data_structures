/* this ds_stack is the lifo structure last in-first out */
/* ds_stack array should be resized according to ds_stack fullness */
#include <iostream>
struct ds_stackStruct
{
    int val;
    char num;
};

enum ds_stackSize
{
    increase,
    decrease
};

class ds_stack{

    public:
    ds_stack();
    ~ds_stack();
    int pop(ds_stackStruct *data);
    int push(ds_stackStruct *data);
    int get_ds_stackSize();
    void printds_stack();
    
    private:
    int stack_size_inc_dec = 4;
    int ds_stackCounter = 0;
    ds_stackStruct *ds_stackPointer = nullptr;
    int ds_stack_size = 2;
    int resizeds_stack(int ds_stackDirection);
};