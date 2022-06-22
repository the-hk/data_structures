#include "linkedlist.h"

linkedlist::linkedlist()
{
    std::cout<<"hello linked list object was created."<<std::endl;
    this->root = new linkedlistStc;
    this->root->val = 123;
    this->root->next = nullptr;
}

linkedlist::~linkedlist()
{
    std::cout<<"bye bye :)"<<std::endl;
    /* free all the memory which is allocated for the linked list object. */
    linkedlistStc *iter;
    linkedlistStc *removed;
    iter = this->root;
    while(iter->next !=nullptr)
    {
        removed = iter;
        iter=iter->next;
        delete removed;
    }
    delete iter;
}   

int linkedlist::add_member(linkedlistStc *new_val)
{
    linkedlistStc *iter;
    iter = this->root;
    while(iter->next !=nullptr)
    {
        iter=iter->next;
    }
    iter->next = new linkedlistStc();
    iter->next->val = new_val->val;
    iter->next->next = nullptr;
    this->size_of_linkedList++;
    return 1;
}

int linkedlist::remove_member(int number)
{
    linkedlistStc *iter;
    linkedlistStc *removed;
    if(number == 1)
    {
        removed = this->root;
        this->root = this->root->next;
        delete removed;
        this->size_of_linkedList--;
    }
    else if(number <= size_of_linkedList)
    {
        iter = this->root;
        while(number != 1)
        {
            iter=iter->next;
            
            number--;
        }
        removed = iter->next;
        iter->next = iter->next->next;
        delete removed;
        this->size_of_linkedList--; 
    }
    else
    {
        std::cout<<"exceed the linked list"<<std::endl;
        return 0;
    }   
    return 1;
}

void linkedlist::print_list()
{
    linkedlistStc *iter;
    iter = this->root;
    int local_counter = 0;
    while(iter->next !=nullptr)
    {
        std::cout<<local_counter<<" : "<<iter->val<<std::endl;
        iter=iter->next;
        local_counter++;
    }
}