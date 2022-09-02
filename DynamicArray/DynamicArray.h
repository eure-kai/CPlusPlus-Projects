#ifndef DYNAMICARRAY_H
#define DYNAMICARRAY_H
#include <string>


class DynamicArray {
  public:
    int size;
    int maxSize;
    int* vals;
    
    DynamicArray(int s, int m);
    ~DynamicArray();
    
    void addVal(int val);
    void printVals(int val);
    int get(int index);
  
};


#endif // DYNAMICARRAY_H
