/***************************************************************
  Student Name: Odalys Rodriguez
  File Name: testHeap.cpp
  Project 2
  test heap Class
***************************************************************/  
#include <iostream>
#include "customer.hpp"
#include "minHeap.hpp"
using namespace std;
int main(){
    Customer a, b, c;
    a.setArrivalTime(1);
    b.setArrivalTime(2);
    c.setArrivalTime(3);
    MinHeap PQ;
    PQ.insert(b);
    PQ.insert(c);
    PQ.insert(a);
    cout << PQ.size() << endl;
    PQ.print();
    cout << PQ.getMin() << endl;
    cout << PQ.getMin() << endl;
    cout << PQ.getMin() << endl;
}