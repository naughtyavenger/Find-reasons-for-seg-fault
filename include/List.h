//
//
// Created by piotr on 10.03.19.

#ifndef ZAD1_LIST_H
#define ZAD1_LIST_H

template <typename T>
class List{

  struct Node;

  Node* head;
  Node* tail;
  Node* tmp;

 public:

  struct Iterator;

 List() : head(nullptr), tail(nullptr) {}
  ~List();

  void pushBack (const T& newElement);
  Iterator begin() { return Iterator(head); }
  Iterator end()   { return Iterator(tail->next); }
};


template <typename T>
List<T>::~List() {
  while(tail != head){
    tmp = tail->previous;
    delete tail;
    tail = tmp;
  }
}

template <typename T>
void List<T>::pushBack(const T& newElement) {
    
  tmp = new Node(newElement);

  if( !tail ){ // size = 0
    head = tmp;
    tail = tmp;
  }
  else{
    tmp->previous = tail;
    tail->next = tmp;
    tail = tmp;
  }

}

template <typename T>
struct List<T>::Node{
  T data;
  Node* previous;
  Node* next;

 Node(): data(), previous(nullptr), next(nullptr) {}
  explicit Node( T d ): data(d), previous(nullptr), next(nullptr) {}
};

template <typename T>
struct List<T>::Iterator{
  Node* ptr;

  explicit Iterator(Node* p): ptr(p) {}

  T&        operator* () { return ptr->data; }
  Iterator& operator++() { ptr = ptr->next;     return *this; }
  Iterator& operator--() { ptr = ptr->previous; return *this; }
  bool      operator!= (Iterator it) { return !(ptr == it.ptr); }
  bool      operator== (Iterator it) { return ptr == it.ptr; }
};

#endif //ZAD1_LIST_H
