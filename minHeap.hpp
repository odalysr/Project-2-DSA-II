#ifndef MINHEAP_HPP
#define MINHEAP_HPP
#include<iostream>
#include<vector>
#include"customer.hpp"

class MinHeap{
	private:
		vector <Customer> minHeap;//includes size function
		int leftChildIndex(int parent);
		int rightChildIndex(int parent);
		int parentIndex(int child);
		void percolateUp(int index);
		void percolateDown(int index);
		int capacity;//capacity of heap

		/*
		int capacity;//capacity of minHeap 
		int heapSize;//curr num of elemnt in heap
		Customer *customerArray;//ptr to array of Customer elemnts in Heap
		*/
	public:
		MinHeap();
		int size();//returns size of heap
		void swap(Customer x, Customer y);
		void insert(Customer customer);
		void deleteMin();
		Customer getMin();
		

	/*
		MinHeap(int capacity); //default constructor;
		int parent(int i);//parent of node at index i
		int leftChild(int i);//left child of node at index i
		int rightChild(int i);//right child of node at index i
		Customer getMin();

		void heapify(); //build heap
		void siftDown(int i);
		void siftUp(int i);
		void push(Customer c);//inserts customer at end of array and fixes min heap violations
		void swap(Customer *x, Customer *y); //swap function for customerArray		
		void deleteMin();
		void heapify();
*/
		/*
		void percolateData(Customer customer);
		void push(Customer customer);
		void pop(Customer customer);
		*/
		/*friend ofstream& operator <<(std::ofstream &out, const MinHeap &h){
			while(!h.empty()){
				out << h.getMin() << std::endl;
				//h.pop();
			}
		}*/
	   	       	   
};
#endif
