#ifndef FIFO_HPP
#define FIFO_HPP
#include<vector>
#include"customer.hpp"

class Fifo{
    private:
        std::vector<Customer> fifo;
    public:
        void remove();//remove front
        void add(Customer C);//add to back
        void print();
};
#endif