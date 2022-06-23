#include "queue.h"

queue::queue()
{
    std::cout << "new queue was created"<<std::endl;
    this->queueStackPointer = new queueStc[this->queue_size];
}

queue::~queue()
{
    std::cout << "bye bye :)"<<std::endl;
    delete[] queueStackPointer;
}

int queue::dequeue(queueStc *data)
{
    this->queueCounter--;
    *data = this->queueStackPointer[queue_pop_counter];    
    if( (this->queueCounter + 4) < (this->queue_size) )
    {
        /* decrease the ds_stack size*/
        this->resize_queue(decrease);
    }
    this->queue_pop_counter++;
    return 1;

}

int queue::enqueue(queueStc *data)
{
    this->queueStackPointer[queueCounter] = *data;
    this->queueCounter++;

    if( (this->queueCounter + 4) > (this->queue_size) )
    {
        /* increase the ds_stack size*/
        this->resize_queue(increase);
    }
    return 1;
}

int queue::get_queue_size()
{
    return this->queue_size;
}

void queue::print_queue()
{
    for(int i = this->queue_pop_counter; i<this->queue_size; i++)
    {
        std::cout<<this->queueStackPointer[i].val<<std::endl;
    }
    std::cout<<"pop_counter = "<<this->queue_pop_counter<<std::endl;
    std::cout<<"queue_counter = "<<this->queueCounter<<std::endl;
    std::cout<<"queue_size = "<<this->queue_size<<std::endl;
}

int queue::resize_queue(int queue_dir)
{
    if(queue_dir == increase)
    {
        std::cout << "i am in increase"<<std::endl;
        /* 1: create a new array with increased size */
        queueStc *tempArr = new queueStc[queue_size + queue_size_inc_dec]; 
        /* 2: copy old array to new array */
        std::copy(this->queueStackPointer,this->queueStackPointer + this->queueCounter, tempArr);
        delete[] this->queueStackPointer;
        this->queueStackPointer = tempArr;
        this->queue_size = this->queue_size + this->queue_size_inc_dec;
    }
    else if(queue_dir == decrease)
    {
        std::cout << "i am in decrease"<<std::endl;
        /* 1: create a new array with increased size */
        this->queue_size = this->queue_size - this->queue_size_inc_dec;
        queueStc *tempArr = new queueStc[this->queue_size]; 
        /* 2: copy old array to new array */
        std::copy(this->queueStackPointer + this->queue_pop_counter, this->queueStackPointer + this->queue_pop_counter + this->queue_size, tempArr);
        delete[] this->queueStackPointer;
        this->queueStackPointer = tempArr;
        this->queue_pop_counter = 0;
    }
    return 1;
}
