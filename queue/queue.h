#include <iostream>

struct queueStc
{
    int val;
    char num;
};

enum ds_stackSize
{
    increase,
    decrease
};

class queue
{
    public:
    queue();
    ~queue();
    int dequeue(queueStc *data);
    int enqueue(queueStc *data);
    int get_queue_size();
    void print_queue();
    
    private:
    int queue_size_inc_dec = 4;
    int queueCounter = 0;
    queueStc *queueStackPointer = nullptr;
    int queue_size = 2;
    int queue_pop_counter = 0;
    int resize_queue(int ds_stackDirection);
};

