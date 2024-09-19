#include <iostream>
using namespace std;

class Deque {
public:
    int *arr;
    int size;
    int front;
    int rear;

    Deque(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Push at the rear
    void pushrear(int data) {
        // Queue is full
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) {
            cout << "Queue is full" << endl;
            return;
        }
        // Single element case
        else if (front == -1) {
            front = rear = 0;
            arr[rear] = data;
        }
        // Circular nature
        else if (rear == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = data;
        }
        // Normal flow
        else {
            rear++;
            arr[rear] = data;
        }
    }

    // Push at the front
    void pushFront(int data) {
        // Queue is full
        if ((front == 0 && rear == size - 1) || (rear == front - 1)) {
            cout << "Queue is full" << endl;
            return;
        }
        // Single element case
        else if (front == -1) {
            front = rear = 0;
            arr[front] = data;
        }
        // Circular nature
        else if (front == 0) {
            front = size - 1;
            arr[front] = data;
        }
        // Normal flow
        else {
            front--;
            arr[front] = data;
        }
    }

    // Pop from the front
    void popFront() {
        // Empty check
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        // Single element condition
        else if (front == rear) {
            arr[front] = -1;
            front = rear = -1;
        }
        // Circular nature
        else if (front == size - 1) {
            front = 0;
        }
        // Normal flow
        else {
            front++;
        }
    }

    // Pop from the rear
    void poprear() {
        // Empty check
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        // Single element condition
        else if (front == rear) {
            arr[rear] = -1;
            front = rear = -1;
        }
        // Circular nature
        else if (rear == 0) {
            rear = size - 1;
        }
        // Normal flow
        else {
            rear--;
        }
    }

    // Get the front element
    int getFfront() {
        if (front == -1) {
            return -1;
        }
        return arr[front];
    }

    // Check if the deque is empty
    bool isempty() {
        return (front == -1);
    }
};

int main() {
    Deque dq(4);

    // Pushing elements from the rear
    dq.pushFront(20);
    dq.pushFront(30);
    dq.pushFront(40);
    dq.pushFront(50);  // This will fill the deque

    dq.poprear();
    dq.popFront();
    dq.pushFront(100);
    dq.pushrear(200);


  
    // Pop elements from the rear and print
    while (!dq.isempty()) {
        cout << dq.getFfront() << " ";
        dq.popFront();
    }

    return 0;
}
