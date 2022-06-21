/* this stack is the lifo structure last in-first out */
/* stack array should be resized according to stack fullness */
#include <iostream>
struct stackStruct
{
    int val;
    char num;
};

class stack{

    public:
    stack();
    ~stack();
    pop();
    push();
    get_StackSize();
    printStack();
    
    private:
    stackStruct *
    int stack_size;
    int resizeStack();
};