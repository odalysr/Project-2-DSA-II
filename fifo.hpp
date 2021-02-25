#ifndef FIFO_HPP
#define FIFO_HPP
#include<vector>
#include"customer.hpp"

class Fifo{
    private:
        std::Vector<Customer> fifo;
    public:
        Fifo();
        void remove();//remove front
        void add();//add to back
};
#endif