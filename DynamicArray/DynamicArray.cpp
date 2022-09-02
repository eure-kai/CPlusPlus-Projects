
#include <DynamicArray.h>
#include <iostream>

  DynamicArray::DynamicArray(int s, int m) :
    size(s), maxSize(m), vals(new int [m]) {}
    
  DynamicArray::~DynamicArray() {
    delete vals;
    std::cout << "Deleted\n";
  }
  
  void DynamicArray::addVal(int val) {
    if (DynamicArray::size == DynamicArray::maxSize) {
      
      std::cout << "MAX SIZE EXCEEDED, RESIZING!\n";
      
      int* newArr = new int [maxSize * 2];
      DynamicArray::maxSize = DynamicArray::maxSize * 2;
      
      for (int i = 0; i < DynamicArray::size; i++) {
        newArr[i] = vals[i];
      }
      
      std::swap(DynamicArray::vals, newArr);
      delete[] newArr;
    }
    
    DynamicArray::vals[DynamicArray::size] = val;
    DynamicArray::size++;
  }
  
  
  void DynamicArray::printVals(int val) {
    std::cout << "[";
    
    for (int i = 0; i < val; i++) {
      std::cout << vals[i];
      if (i < val - 1) std::cout << ", ";
    }
    
    std::cout << "]" << std::endl;
  }
  
  
  int DynamicArray::get(int index) {
    return vals[index];
  }
  
