# silver-robot

I need help.

I don't know why I got segm fault only when an EMPTY list
is going to iterated with end() function

for ex.

1. exmpl

for( auto it = list.begin(); it != list.end(); ++it) {
     std::cout << *it << " ";
}

2. exmpl

auto it = list.end();

3. exmpl

auto it = list.begin();

if( it == list.end() )
    std::cout << "sth";
