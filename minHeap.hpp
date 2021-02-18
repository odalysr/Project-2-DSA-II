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


		/*
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
