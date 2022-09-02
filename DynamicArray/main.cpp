#include <iostream>
#include "DynamicArray.h"

int main() {
    
    int maxSize;
    std::cout << "Max Size of the Dynamic Array? "; std::cin >> maxSize;
    
    DynamicArray* d = new DynamicArray(0, maxSize);
    
    while (true) {
      int choice;
      std::cout << "\nYour choices are:\n[1] Add new vals\n[2] Get the val at an index\n[3] Stop\n\nChoose [1], [2], or [3]: ";
      std::cin >> choice;
      
      if (choice == 1) {
        
        int numVals;
        std::cout << "\nHow many vals? "; std::cin >> numVals;
        std::cout << std::endl;
        
        for (int i = 0; i < numVals; i++) {
          int newVal;
          std::cout << "Enter Val " + std::to_string(i + 1) + ": "; std::cin >> newVal;
          d->addVal(newVal);
          
          std::cout << "Array: ";
          d->printVals(d->size);
          std::cout << "Max Size: " << d->maxSize << "\n\n";
        }
        
        
      } else if (choice == 2) {
        
        if (d->size == 0) {
          std::cout << "\nThe array does not contain any values yet.\n";
          continue;
        }
        
        while (true) {
          int index;
          std::cout << "\nWhat index? "; std::cin >> index;
          
          if (index >= d->size || index < 0) {
            std::cout << "Index out of range. Enter a valid index.\n";
            continue;
          }
          
          std::cout << "Value at index " + std::to_string(index) + ": " << d->get(index) << std::endl;
          break;
        }
        
        
      } else {
        std::cout << "\nDeleting the array and freeing up memory...\n";
        delete d;
        break;
      }
    }
}