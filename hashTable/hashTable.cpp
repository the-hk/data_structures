#include "hashTable.h"

ds_hashTable::ds_hashTable()
{
    std::cout<<"Hello!"<<std::endl;
    hash_data *storage_array = new hash_data[this->prvt_size];
    this->prvt_data = storage_array;
}


ds_hashTable::~ds_hashTable()
{
    std::cout<<"bye bye :)"<<std::endl;
    delete[] (this->prvt_data);
}


int ds_hashTable::set_hashTableSize(int size)
{
    delete[] (this->prvt_data); 
    this->prvt_size = size;
    // an struct array should be created here but  using heap memory
    hash_data *storage_array = new hash_data[this->prvt_size];
    this->prvt_data = storage_array; // addr of the struct array which is created above
    for(int i = 0; i<this->prvt_size; i++)
    {
        this->prvt_data[i].key = -1;
    }
    return 1;   
}

int ds_hashTable::hashFunction(hash_data *data)
{
    return data->key % this->prvt_size;
}

int ds_hashTable::put(hash_data *data)
{
    int indis = 0;
    indis = hashFunction(data);
    if(this->prvt_data[indis].key == -1)
    {
        this->prvt_data[indis].key = data->key;   
        this->prvt_data[indis].value = data->value;
    }
    else
    {
        while(this->prvt_data[indis].key != -1)
        {
            indis++;
            if(this->prvt_size<=indis)return 0;
        }
        this->prvt_data[indis].value = data->value;
        this->prvt_data[indis].key = data->key;   

    }
    return 1;
}

int ds_hashTable::get(hash_data *data)
{
    int indis = 0;
    indis = hashFunction(data);
    if(this->prvt_data[indis].key == data->key)
    {
        return this->prvt_data[indis].value;
    }
    else
    {
        while(this->prvt_data[indis].key != data->key)
        {
            indis++;
            if(this->prvt_size<=indis)return 0;
        }
        return this->prvt_data[indis].value;
    }  
}

int ds_hashTable::remove(hash_data *data)
{
    int indis = 0;
    indis = hashFunction(data);
    if(this->prvt_data[indis].key == data->key)
    {
        this->prvt_data[indis].key = -1;
    }
    else
    {
        while(this->prvt_data[indis].key != data->key)
        {
            indis++;
            if(this->prvt_size<=indis)return 0;
        }
        if(this->prvt_size<=indis)return 0;
        this->prvt_data[indis].key = -1;
    }  
    return 1;
}
