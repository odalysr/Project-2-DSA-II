#ifndef PQ_HPP
#define PQ_HPP
#include<queue>//std:: make_ heap, push_heap, pop_heap functions
#include<iostream>
#include<customer>
class PQ{
	private:
		std::priority_queue< Customer, vector<Customer>, //?? > pq;//200, by default is a vector


	public:
		PQ();
		void service; //check for service availability
		void push(Customer customer);
		void pop(Customer customer);
		/*friend ofstream& operator <<(std::ofstream &out, const PQ &pq){
			while(!pq.empty()){
				out << pq.top() << std::endl;
				pq.pop();
			}
		}*/
	   	       	   
};
#endif
