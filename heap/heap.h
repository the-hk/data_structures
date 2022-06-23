#include <iostream>

/* min heap sorting */

struct heapStc
{
    int val;
    char hk;
};

enum heapArrDir
{
    increase,
    decrease
};

class heap
{
    public:
    heap();
    ~heap();
    int heap_add_member(heapStc *val);
    int heap_remove_member(int index);

    private:
    heapStc *heapArrayPointer;
    int heap_size = 1;
    int heap_size_inc_dec = 4;
    int heapCounter = 0;
    void heapify();
    void resize_heap(int val);
};