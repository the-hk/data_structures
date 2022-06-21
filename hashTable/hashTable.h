#include <iostream>

struct hash_data
{
    int key;
    int value;
};

class ds_hashTable
{
    public:
    ds_hashTable();
    ~ds_hashTable();
    int set_hashTableSize(int size);
    int put(hash_data *data);
    int get(hash_data *data);
    int remove(hash_data *data);
    
    private:
    int prvt_size  = 100;
    hash_data *prvt_data = NULL;
    int hashFunction(hash_data *data);
};