QueueLibrary for Arduino

Overview

QueueLibrary is a simple, efficient, and Arduino-friendly FIFO (First-In, First-Out) queue implementation. This library can be used for a wide variety of applications such as data buffering, job scheduling, or any scenario where a FIFO data structure is needed.

Features

Simple API for enqueue, dequeue, and checking queue status.
Fixed-size array-based implementation for memory efficiency.
Works with any Arduino-compatible boards.
Installation

Download the repository as a ZIP file.
In the Arduino IDE, go to Sketch -> Include Library -> Add .ZIP Library and select the downloaded ZIP file.
You should now be able to include QueueLibrary in your Arduino sketches.
Usage

Include the library at the top of your Arduino script:

cpp
Copy code
#include <QueueLibrary.h>
Initialization
Initialize the queue with its maximum size.

cpp
Copy code
QueueLibrary myQueue(64);
Enqueue Element
To add an element at the end of the queue, use the enqueue method.

cpp
Copy code
myQueue.enqueue('L');
Dequeue Element
To remove and get an element from the front of the queue, use the dequeue method.

cpp
Copy code
char element = myQueue.dequeue();
Check if Queue is Empty
To check if the queue is empty, use the isEmpty method.

cpp
Copy code
if (myQueue.isEmpty()) {
  // Queue is empty
}
Example

A sample Arduino sketch is available in the examples directory.

License

This project is licensed under the MIT License - see the LICENSE.md file for details.

Different Opinions:
Documentation Depth: Some prefer to keep READMEs simple and concise, while others opt for exhaustive documentation including FAQs, Troubleshooting, and more.
Inclusion of Examples: Some argue that examples should be in separate files, while others prefer them within the README itself.