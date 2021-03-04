#include"fifo.hpp"
#include<vector>
#include<iostream>
#include"customer.hpp"

using namespace std;
int main(){
    Customer a, b, c;
    Fifo f;

    f.add(a);
    f.add(b);
    f.add(c);

    f.print();

    std::cout<< "removed elemnt" << std::endl;
    f.remove();

    f.print();
}