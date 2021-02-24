#include"minHeap.hpp"
#include<iostream>
#include<vector>

using namespace std;

int MinHeap::leftChildIndex(int parent){
	int leftChild;
	leftChild = 2 * parent + 1;

    if(leftChild < minHeap.size())//check to not go out of scope
        return leftChild;
    else
        return -1;//error
}
int MinHeap::rightChildIndex(int parent){
	int rightChild;
	rightChild = 2 * parent + 2;

    if(rightChild < minHeap.size())//check to not go out of scope
        return rightChild;
    else
        return -1;
}
int MinHeap::parentIndex(int child){
	int parent;
	parent = (child - 1)/2;

    if(child == 0)//the child is the root
        return -1;
    else
        return parent;
}
void MinHeap::percolateUp(int index){
	if (index >= 0 && parentIndex(index) >= 0 && minHeap.at(parentIndex(index)) > minHeap.at(index))
    {
        swap(minHeap.at(index),minHeap.at(parentIndex(index)));

		/*
		int temp = minHeap[index];
        minHeap[index] = minHeap[parentIndex(index)];
        minHeap[parentIndex(index)] = temp;
		*/

        percolateUp(parentIndex(index));
    }
}
void MinHeap::percolateDown(int index){
	int leftChild = leftChildIndex(index);
    int rightChild = rightChildIndex(index);

    if (leftChild >= 0 && rightChild >= 0 && (minHeap.at(leftChild) > minHeap.at(rightChild)))
    {
       leftChild = rightChild;
    }
    if (leftChild > 0)
    {
       swap(minHeap[index],minHeap[leftChild]);
	   /* int temp = heap[in];
        heap[in] = heap[child];
        heap[child] = temp;
		*/
        percolateDown(leftChild);
    }
}
MinHeap::MinHeap(){
	//
}
int MinHeap::size(){
	return minHeap.size();
}
void MinHeap::swap(Customer x, Customer y){
	Customer temp = x;
	x = y;
	y = temp;	
}
void MinHeap::insert(Customer customer){
	//check to see if capacity has reached
	minHeap.push_back(customer);
    percolateUp(minHeap.size() - 1);
}
void MinHeap::deleteMin(){
	if (minHeap.size() == 0)//check for empty heap
    {
        cout<<"minHeap is empty"<<endl;
        return;
    }
    minHeap.at(0) = minHeap.at(minHeap.size() - 1);//set min elemnt to last elemnt
    minHeap.pop_back();//delete last elemnt of vector
    percolateDown(0);//fixes any heap violations

    cout<<"Min element removed successfully"<<endl;
}
Customer MinHeap::getMin(){
	if(minHeap.size() != 0)
		return minHeap.front();
	// else return what?
}

/*
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


void MinHeap::heapify(){
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

	if(customerArray[parent].pqTime > customerArray[i].pqTime){
		swap(&customerArray[parent], &customerArray[i]);
		siftUp(parent);
	}
}
void MinHeap::push(Customer c){//inserts a new elemnt of type customer, value
	if(this->heapSize != this->capacity){//if not full

		//insert new elemnt in end
		heapSize++;
		int lastEl = heapSize - 1; //last elemnt
		customerArray[lastEl] = c;

		//fix violations of heap property
		siftUp(lastEl);
	}
}
void MinHeap::deleteMin(){
	if(heapSize == 0)
		return 0;
	
	swap(customerArray[heapSize-1],customerArray[0]);
	heapSize--;
	siftDown(0);
	
}


*/