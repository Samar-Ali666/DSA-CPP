#include <iostream>

using namespace std;

#define size 5

template <class itemType> class Queue {

	private:
		itemType arr[size];
		int front;
		int rear;
		
	public:
		Queue();
		void enQueue(itemType item);
		void deQueue();
		itemType peek();
		bool empty();

};

template <class itemType> Queue<itemType>::Queue()
{
	front = -1;
	rear = -1;
};

template <class itemType> void Queue<itemType>::enQueue(itemType item)
{
	if(rear == size - 1) {
		cout << "Queue overflow " << endl;
		return;
	}
	
	rear++;
	arr[rear] = item;
	
	if(front == -1){
		front++;
	}
};

template <class itemType> void Queue<itemType>::deQueue()
{
	if(front == -1 || front > rear) {
		cout << "No element in the queue " << endl;
		return;
	}
	
	front++;
};

template <class itemType> itemType Queue<itemType>::peek()
{
	if(front == -1 || front > rear) {
		cout << "No element in the Queue " << endl;
		return -1;
	}
	
	return arr[front];
};

template <class itemType> bool Queue<itemType>::empty()
{
	if(front == -1 || front > rear) {
		return true;
	}
	
	return false;
}

int main() {
	
	Queue<int> queue;
	
	queue.enQueue(10);
	queue.enQueue(20);
	queue.enQueue(30);
	queue.enQueue(40);
	queue.enQueue(50);
	
	cout << "The front element is " << queue.peek() << endl;
	
	queue.deQueue();
	
	cout << "The front element is " << queue.peek() << endl;
	
	queue.deQueue();
	
	cout << "The front element is " << queue.peek() << endl;
	
	queue.deQueue();
	
	cout << "The front element is " << queue.peek() << endl;
	
	queue.deQueue();
	
	cout << "The front element is " << queue.peek() << endl;
	
	queue.deQueue();
	
	cout << "Is queue is empty : " << (queue.empty() == 1 ? "Yes" : "No");
	
	
	return 0;
}
