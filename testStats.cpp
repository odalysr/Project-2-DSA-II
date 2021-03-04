#include"stats.hpp"
#include<iostream>

using namespace std;
int main(){
    Stats s(2, 2, 3, 10);

    cout << "Po: " << s.Po() <<endl;
    cout << "L: " << s.L() <<endl;
    cout << "W: " << s.W() <<endl;
    cout << "Lq: " << s.Lq() <<endl;
    cout << "Wq: " << s.Wq() <<endl;

    return 0;
}