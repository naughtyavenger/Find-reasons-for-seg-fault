# Find-reasons-for-seg-fault

Both tasks relate to "include/List.h" file.

Task 1.
Find a reason why segmentation fault happens when
an empty list is going to be iterated with end() function.

Examples of segmentation fault:

1.
for( auto it = list.begin(); it != list.end(); ++it) {
     std::cout << *it << " ";

2.
auto it = list.end();

3.
auto it = list.begin();

if( it == list.end() )
    std::cout << "sth";

Task 2.
Find a reason why memory leaks happen.

You can check it by using Valgrind program.

usage: valgrind ./build/find_mistakes