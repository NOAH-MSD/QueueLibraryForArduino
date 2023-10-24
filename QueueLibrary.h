// QueueLibrary.h

#ifndef QueueLibrary_h
#define QueueLibrary_h

#include "Arduino.h"

// QueueLibrary Class to implement a basic FIFO queue
class QueueLibrary {
  public:
    // Constructor: initializes the queue with the specified size
    QueueLibrary(int size);
    
    // Enqueues an element at the end of the queue
    void enqueue(char element);
    
    // Dequeues an element from the front of the queue
    char dequeue();
    
    // Checks if the queue is empty
    bool isEmpty();
    
  private:
    int _size; // the size of the queue
    char* _queue; // pointer to the array holding the queue elements
    int _front, _rear; // pointers to the front and rear of the queue
};

#endif
