#include"fifo.hpp"

int main(){
    Customer a, b, c;
    Fifo f;

    f.add(a);
    f.add(b);
    f.add(c);

    for(int i=0; i < f.size(); i++){
        std::cout<< f.at(i) << std::endl;
    }

    f.remove(a);

    for(int i=0; i < f.size(); i++){
        std::cout<< f.at(i) << std::endl;
    }

    
}