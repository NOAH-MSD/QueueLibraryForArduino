#include <QueueLibrary.h>

QueueLibrary colorQueue(64);  // Initialize a queue with size 64
    // Blue LED connected to pin 10

void setup() {
  pinMode(LEDR, OUTPUT);  // Set LEDR as an OUTPUT
  pinMode(LEDB, OUTPUT);  // Set LEDB as an OUTPUT
  
  // Enqueue 'R' and 'B' characters into the queue for demonstration
  colorQueue.enqueue('R');
  colorQueue.enqueue('B');
  colorQueue.enqueue('R');
  colorQueue.enqueue('B');
}

void loop() {
  if (!colorQueue.isEmpty()) {
    char color = colorQueue.dequeue();
    
    if (color == 'R') {
      digitalWrite(LEDR, HIGH);  // Turn on LEDR
      delay(1000);                // Wait for 1000 ms
      digitalWrite(LEDR, LOW);   // Turn off LEDR
    } else if (color == 'B') {
      digitalWrite(LEDB, HIGH);  // Turn on LEDB
      delay(1000);                // Wait for 1000 ms
      digitalWrite(LEDB, LOW);   // Turn off LEDB
    }
  } else {
    // Queue is empty. Do something or refill the queue.
  }

  delay(500);  // Delay before checking the queue again
}