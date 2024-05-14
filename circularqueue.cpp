#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node* next;
};

class Queue {
private:
  Node* front;
  Node* rear;
public:
  Queue() {
    front = NULL;
    rear = NULL;
  }

  void enqueue(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    if (front == NULL) {
      front = rear = newNode;
    } else {
      rear->next = newNode;
      rear = newNode;
    }
  }

  int dequeue() {
    if (front == NULL) {
      cout << "Queue is empty" << endl;
      return -1;
    } else {
      int data = front->data;
      Node* temp = front;
      front = front->next;
      delete temp;
      return data;
    }
  }

  bool isEmpty() {
    return front == NULL;
  }

  void print() {
    Node* temp = front;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }
    cout << endl;
  }
};

int main() {
  Queue q;

  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.enqueue(40);

  q.print();

  cout << q.dequeue() << endl;

  q.print();

  return 0;
}