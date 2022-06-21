#include "hashTable.h"

ds_hashTable::ds_hashTable()
{
    std::cout<<"Hello!"<<std::endl;
}


ds_hashTable::~ds_hashTable()
{
    std::cout<<"bye bye :)"<<std::endl;
}


int ds_hashTable::set_hashTableSize(int size)
{
    this->prvt_size = size;
    // an struct array should be created here but  using heap memory
    hash_data *storage_array = new hash_data[size];
    this->prvt_data = storage_array; // addr of the struct array which is created above
}

int ds_hashTable::hashFunction(hash_data *data)
{
    
}

int ds_hashTable::set(hash_data *data)
{

}

int ds_hashTable::get(hash_data *data)
{
    
}

int ds_hashTable::remove(hash_data *data)
{
    
}
