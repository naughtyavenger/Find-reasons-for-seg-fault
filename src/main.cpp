#include <iostream>
#include <list>
#include "../include/List.h"


int main() {
    std::cout << "Hello, World!" << std::endl;

    List<int> list;

    //    list.pushBack(5); if it's uncommented program works
    //    list.pushBack(4);
    
    for( auto it = list.begin(); it != list.end(); ++it) {
      std::cout << *it << " ";
    }

    std::cout << std::endl;
    
    return 0;
}
