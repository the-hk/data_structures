#include "queue.h"

int main()
{
    queue myObj;
    queueStc data[20];
    for(int i =0; i<20; i++)
    {
        data[i].val = i*10;
        myObj.enqueue(&(data[i]));
        myObj.print_queue();  
    }

    queueStc coming_data[20];
    for(int i = 0; i<20; i++)
    {
        myObj.dequeue(&(coming_data[i]));
        std::cout<<"coming data :"<<19 - i<<"="<<coming_data[i].val<<std::endl;
        myObj.print_queue();
    }
}