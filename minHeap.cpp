#include"minHeap.hpp"

using namespace std;

MinHeap::MinHeap(int capacity){//capacity is 2M+1
	this->capacity = (capacity*2)+1;// double check
	heapSize = 0;
	customerArray = new Customer[this->capacity];
}
int parent(int i){
	return (i-1)/2;
}
int leftChild(int i){
	return (2*i+1);
}
int rightChild(int i){
	return (2*i+2);
}
void MinHeap::swap(Customer *x, Customer *y){
		Customer temp = *x;
		*x = *y;
		*y = temp;	
}
void MinHeap::push(Customer c){//inserts a new elemnt of type customer
	if(this->heapSize == this->capacity){
		std::cout << "Store in FIFO queue";
		return; //store in fifo queue
	}
	//insert new elemnt in end
	heapSize++;
	int lastEl = heapSize - 1; //last elemnt
	customerArray[lastEl] = c;

	//fix violations of heap property
	while(lastEl != 0 && (customerArray[parent(lastEl)] > customerArray[lastEl])){
		swap(&customerArray[lastEl], &customerArray[parent(lastEl)]);
		lastEl = parent(lastEl);
	}
}


/*
void PQ::pop(Customer customer){
	pq.pop(customer);
}*/
