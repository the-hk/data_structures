#include "hashTable.h"

int main()
{
    
    ds_hashTable hk;
    hk.set_hashTableSize(100);
    hash_data myHashData;
    myHashData.key = 13;
    myHashData.value = 13131313;
    hk.put(&myHashData);
    
    hash_data myHashData1;
    myHashData1.key = 81;
    myHashData1.value = 81818181;
    hk.put(&myHashData1);

    hash_data myHashData2;
    myHashData2.key = 78;
    myHashData2.value = 78787878;
    hk.put(&myHashData2);

    hash_data myHashData3;
    myHashData3.key = 92;
    myHashData3.value = 92929292;
    hk.put(&myHashData3);

    hash_data myHashData4;
    myHashData4.key = 113;
    myHashData4.value = 55555555;
    hk.put(&myHashData4);

    std::cout << " 0:" <<hk.get(&myHashData)<<std::endl;
    std::cout << " 1:" <<hk.get(&myHashData1)<<std::endl;
    std::cout << " 2:" <<hk.get(&myHashData2)<<std::endl;
    std::cout << " 3:" <<hk.get(&myHashData3)<<std::endl;
    std::cout << " 4:" <<hk.get(&myHashData4)<<std::endl;
}