#include"fifo.hpp"
#include"customer.hpp"
#include<vector>
#include<iostream>

void Fifo::remove(){
    if(this->fifo.size() != 0)
        this->fifo.pop_back();
    return;
}
void Fifo::add(Customer c){
    this->fifo.push_back(c);
}
void Fifo::print(){
    for(int i=0; i < (int)fifo.size(); i++){
        std::cout<<  i << std::endl;      
    }
}