#include"stats.hpp"
#include <cmath>

Stats::Stats(int l, int M, int m, int n){
    this->l=l;//lambda
    this->M=M;//num of service channels
    this->m=m; //µ
    this->n=n;//num of arrivals to simulate
}
int Stats::factorial(int n){
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
float Stats::Po(){ 
    float summa;

    for(int i =0; i < this->M; i++){
        float a = 1/((float)factorial(i));
        float b = this->l/m;
        float c = pow(b,i); //pow(base, exponent)
        float z = a*c;
        summa += z;
    }


    float d = 1/((float)factorial(M));
    float e = l/m;
    float f = pow(e,M);
    float g = (M*m)/(M*(m-l));
    float h = d*f*g;

    float j = 1/(summa + h);

    return j;
}
float Stats::L(){
    float d1 = (l*m) * pow(l/m, M);
    float d2 = factorial(M-1) * pow((M*m)-l,2);//double check

    int i = (d1/d2) * Po() + (l/m);
    return i;
}
float Stats::W(){
    return L()/l;
}
float Stats::Lq(){
    return L()-(l/m);
}
float Stats::Wq(){
    return Lq()/l;
}
float Stats::rho(){
    return l/(M*m);
}