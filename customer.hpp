
#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP
#include<iostream>


class Customer{
    private:
        float arrivalTime;
        float startOfServiceTime;
        float departureTime;
        Customer* nextCustomer;// FIFO queue
    public:        //setters and getters and initializer for friend to output customer
        Customer();
	Customer(float arrivalTime, float startOfServiceTime, float departureTime);
        ~Customer();
        void setArrivalTime(float arrivalTime);
        void setStartOfServiceTime(float startofServiceTime);
        void setDepartureTime(float departureTime);
        float getArrivalTime();
        float getStartOfServiceTime();
        float getDepartureTime();
        Customer getNextCustomer();
        friend std::ostream &operator <<(std::ostream &out, const Customer &customer){
            //error? object customer??
            out << "Arrival Time " << customer.getArrivalTime() << std::endl;
            out << "Start of Service Time " << customer.getStartOfServiceTime() << std::endl;
            out << "Departure Time " << customer.getDepartureTime() << std::endl;
           
            return out;
        };            
};
#endif
