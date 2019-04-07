#include <iostream>
#include "../include/List.h"


int main() {

  List<int> list;

  list.pushBack(5); // comment this line to get seg fault
    
  for( auto it = list.begin(); it != list.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

    
  return 0;
}
