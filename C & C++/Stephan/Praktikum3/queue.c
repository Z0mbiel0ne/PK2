#include <stdio.h>
#define SIZE 2

int first = 0, last = -1;
int queue[SIZE];
int counter = 0;

void enqueue(int i) {
    last++;
    counter++;
    
    if (last == SIZE && first != 0) {
        last = 0;
    }
    
    if (last == SIZE) {
        last = SIZE - 1;
    }
    
    if (counter > SIZE) {
        counter = SIZE;
    }
    queue[last] = i;
}

int dequeue() {
    if (counter == 0) {
        first = 0;
        last = -1;
        return last;
    }
    
    int res = queue[first];
    first++;
    counter--;
    
    if (first == SIZE) {
        first = 0;
    }
    return res;
}