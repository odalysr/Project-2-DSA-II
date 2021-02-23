#ifndef MINHEAP_HPP
#define MINHEAP_HPP
#include<iostream>
#include"customer.hpp"

class MinHeap{
	private:
		int capacity;//capacity of minHeap 
		int heapSize;//curr num of elemnt in heap
		Customer *customerArray;//ptr to array of Customer elemnts in Heap
	public:
		MinHeap(int capacity); //default constructor;
		int parent(int i);//parent of node at index i
		int leftChild(int i);//left child of node at index i
		int rightChild(int i);//right child of node at index i
		Customer getMin();
		void heapify(); //build heap
		void siftDown(int i);
		void siftUp(int i);
		void push(Customer c);//inserts customer at end of array and fixes min heap violations
		/*
		void swap(Customer *x, Customer *y); //swap function for customerArray		
		bool isFull();
		bool isEmpty();
		void siftUp();
	
		void deleteMin();
		*?


		/*
		void heapify();
		void percolateData(Customer customer);
		void push(Customer customer);
		void pop(Customer customer);
		*/
		/*friend ofstream& operator <<(std::ofstream &out, const PQ &pq){
			while(!pq.empty()){
				out << pq.top() << std::endl;
				pq.pop();
			}
		}*/
	   	       	   
};
#endif
