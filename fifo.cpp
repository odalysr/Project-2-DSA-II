#include"fifo.hpp"
#include"customer.hpp"
#include<vector>

void Fifo::remove(){
    if(fifo.size() != 0)
        fifo.pop_back();
    return;
}
void Fifo::add(Customer c){
    fifo.push_back(c);
}