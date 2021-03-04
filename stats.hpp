#ifndef STATS_HPP
#define STATS_HPP

class Stats{
    private:
        float n;//number of arrivals to simulate

        float l; //lambda 
        float M;//number of service channels
        float m;//Avg number served in a time period (mu) µ
    public:
        Stats(float l, float M, float m, float n);//default constructor
        float factorial(float n);
        float Po();
        float L();
        float W();
        float Lq();
        float Wq();
        float rho();


};
#endif