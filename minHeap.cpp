#include"minHeap.hpp"

using namespace std;

MinHeap::MinHeap(int capacity){//capacity is 2M+1
	this->capacity = (capacity*2)+1;// double check
	heapSize = 0;
	customerArray = new Customer[this->capacity];
}
int MinHeap::parent(int i){//child index i
	return (i-1)/2;
}
int MinHeap::leftChild(int i){//parent index i
	return (2*i+1);
}
int MinHeap::rightChild(int i){//parent index i
	return (2*i+2);
}
Customer MinHeap::getMin(){//find the min of the customerArray 
	return customerArray[0];
}
void heapify(){
//start at last node's parent
int i = heapSize-1;
	for(i; i>=0 ; --i ){
		siftDown(i);
	}
}
void MinHeap::siftDown(int i){//apply level by level toward root
	int leftChild = leftChild(i);
	int rightChild = rightChild(i);

	if(leftChild >= heapSize)
		return; //index is leaf

	int minIndex = i;
	if(customerArray[i] > customerArray[leftChild])
		minIndex = leftChild;

	if((rightChild < heapSize) && (customerArray[minIndex] > customerArray[rightChild]))
		minIndex = rightChild;

	if(minIndex != i){
		swap(customerArray[i], customerArray[minIndex]);
		siftDown(minIndex);
	}
}
void MinHeap::siftUp(int i){//apply to non-leave nodes
	if(i ==0)
		return;
	
	int parent = parent(i);

	if(customerArray[parent] > customerArray[i]){
		swap(&customerArray[parent], &customerArray[i]);
		siftUp(parent);
	}
}
void MinHeap::push(Customer c){//inserts a new elemnt of type customer, value
	if(!isFull){//if not full

		//insert new elemnt in end
		heapSize++;
		int lastEl = heapSize - 1; //last elemnt
		customerArray[lastEl] = c;

		//fix violations of heap property
		siftUp(lastEl);
	}
}


/*
void MinHeap::swap(Customer *x, Customer *y){
		Customer temp = *x;
		*x = *y;
		*y = temp;	
}
bool MinHeap::isFull(){
	if(this->heapSize == this->capacity){
		//std::cout << "Store in FIFO queue";
		return true; //store in fifo queue
	}
}
bool MinHeap::isEmpty(){
	if(heapSize == 0)
		return true;
	else
		return false;
}

void MinHeap::deleteMin(){
	if(!isEmpty()){
		/*swap(customerArray[heapSize-1],customerArray[0]);
		heapSize--;
		siftDown(0);
		*/
/*	}
}
*/

