#include "heap.h" 

/* min heap sorting */
/* 
                               node parent
                                /       \
                               /         \ 
    node child higher than parent        node child higher than parent   
*/

heap::heap()
{
    std::cout<<"heap obj was created"<<std::endl;
    heapArrayPointer = new heapStc;
}

heap::~heap()
{
    std::cout<<"heap obj was created"<<std::endl;
}

int heap::heap_add_member(heapStc *val)
{
    /* increase the array size */
    this->heapArrayPointer[heapCounter] = *val;
    this->heapCounter++;

    if( (this->heapCounter + 2) > (this->heap_size) )
    {
        /* increase the ds_stack size*/
        this->resize_heap(increase);
    }
    return 1;

}

int heap::heap_remove_member(int index)
{
    /* decrease the array size */
    this->heapCounter--;
    *data = this->ds_stackPointer[ds_stackCounter];    
    if( (this->ds_stackCounter + 4) < (this->ds_stack_size) )
    {
        /* decrease the ds_stack size*/
        this->resizeds_stack(decrease);
    }
    return 1;
}

void heap::resize_heap(int heapDirection)
{
    if(heapDirection == increase)
    {
        std::cout << "i am in increase"<<std::endl;
        /* 1: create a new array with increased size */
        heapStc *tempArr = new heapStc[this->heap_size + this->heap_size_inc_dec]; 
        /* 2: copy old array to new array */
        std::copy(heapArrayPointer,heapArrayPointer+heap_size,tempArr);
        delete[] heapArrayPointer;
        heapArrayPointer = tempArr;
        this->heap_size = this->heap_size + this->heap_size_inc_dec;
    }
    else if(heapDirection == decrease)
    {
        std::cout << "i am in decrease"<<std::endl;
        /* 1: create a new array with increased size */
        this->heap_size = this->heap_size - this->heap_size_inc_dec;
        heapStc *tempArr = new heapStc[this->heap_size]; 
        /* 2: copy old array to new array */
        std::copy(heapArrayPointer,heapArrayPointer+heap_size,tempArr);
        delete[] heapArrayPointer;
        heapArrayPointer = tempArr;
    }
}


void heap::heapify()
{

}
