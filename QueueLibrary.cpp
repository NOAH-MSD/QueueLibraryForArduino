// QueueLibrary.cpp

#include "QueueLibrary.h"

// Constructor: Allocates memory for the queue and initializes front and rear pointers
QueueLibrary::QueueLibrary(int size) {
  _size = size;
  _queue = new char[_size];
  _front = -1;
  _rear = -1;
}

// Adds an element at the rear end of the queue
void QueueLibrary::enqueue(char element) {
  if ((_front == 0 && _rear == _size - 1) || (_rear == _front - 1)) {
    return; // Queue is full
  }
  if (_front == -1) _front = 0;
  _rear = (_rear + 1) % _size;
  _queue[_rear] = element;
}

// Removes and returns the front element from the queue
char QueueLibrary::dequeue() {
  if (_front == -1) {
    return '\0'; // Queue is empty
  }
  char element = _queue[_front];
  if (_front == _rear) {
    _front = -1;
    _rear = -1;
  } else {
    _front = (_front + 1) % _size;
  }
  return element;
}

// Checks if the queue is empty
bool QueueLibrary::isEmpty() {
  return _front == -1;
}
