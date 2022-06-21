#include <iostream>

struct hash_data
{
    int key;
    int value;
}

class ds_hashTable
{
    public:
    int set_hashTableSize(int size);
    int put(hash_data *data);
    int get(hash_data *data);
    int remove(hash_data *data);
    
    private:
    int prvt_size  = 100;
    hash_data *prvt_data;
    ds_hashTable();
    ~ds_hashTable();
    int hashFunction(hash_data *data);
}