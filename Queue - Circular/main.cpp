#include <iostream>

using namespace std;

#define SIZE 5

template <class itemType> class Queue {

	public:
		Queue();
		void enqueue(itemType item);
		itemType dequeue();
		itemType peek();
		bool isFull();
		bool isEmpty();
		
	private:
		itemType arr[SIZE];
		int front;
		int rear;
				
};

template <class itemType> Queue<itemType>::Queue()
{
	front = -1;
	rear = -1;
};

template <class itemType> bool Queue<itemType>::isFull()
{
	if(front == 0 && rear == SIZE - 1){
		return true;
	}
	
	if(front == rear + 1) {
		return true;
	}
	
	return false;
};

template <class itemType> bool Queue<itemType>::isEmpty()
{
	if(front == -1){
		return true;
	} else {
		return false;
	}
};

template <class itemType> void Queue<itemType>::enqueue(itemType item)
{
	if(isFull()){
		cout << "Queue Overflow" << endl;
		return;
	}
	
	if(front == -1) {
		front = 0;
	}
	rear = (rear + 1) % SIZE;
	
	arr[rear] = item;
	
	cout << "Item inserted in queue " << item << endl;
};

template <class itemType> itemType Queue<itemType>::dequeue()
{
	itemType element;
	
	if(isEmpty()){
		cout << "Queue underflow" << endl;
		return -1;
	}
	
	element = arr[front];
	
	if(front == rear){
		front = -1;
		rear = -1;
	} else {
		front = (front + 1) % SIZE;
	}
	
	return element;	
	
};

template <class itemType> itemType Queue<itemType>::peek()
{
	if(isEmpty()) {
		cout << "No item in the queue" << endl;
		return -1;
	}
	
	return arr[front];
}

int main(){
	
	Queue<int> queue;
	
	queue.enqueue(10);
	queue.enqueue(20);
	queue.enqueue(30);
	queue.enqueue(40);
	queue.enqueue(50);
	
	cout << "Queue Front item is " << queue.peek() << endl;
	
	cout << "Deleted item is " << queue.dequeue() << endl;
	cout << "Deleted item is " << queue.dequeue() << endl;
	cout << "Deleted item is " << queue.dequeue() << endl;
	cout << "Deleted item is " << queue.dequeue() << endl;
	
	queue.enqueue(60);
	
	cout << "Queue Front item is " << queue.peek() << endl;
	
	return 0;
}
