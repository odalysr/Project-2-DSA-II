#ifndef STATS_HPP
#define STATS_HPP

class Stats{
    private:
        int n;//number of arrivals to simulate

        int l; //lambda 
        int M;//number of service channels
        float m;//Avg number served in a time period (mu) µ
    public:
        Stats(int l, int M, int m, int n);//default constructor
        int factorial(int n);
        float Po();
        float L();
        float W();
        float Lq();
        float Lq();
        float Wq();
        float rho();


};
#endif