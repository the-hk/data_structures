#include <iostream>

struct linkedlistStc
{
    int val;
    linkedlistStc *next;
};

class linkedlist
{
    public:
    linkedlist();
    ~linkedlist();
    int add_member(linkedlistStc *new_val);
    int remove_member(int number);
    void print_list();

    private:
    linkedlistStc *root = nullptr;
    int size_of_linkedList = 0;

};