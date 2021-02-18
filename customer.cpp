#include"customer.hpp"

Customer::Customer(){
    this->arrivalTime = 0;
    this->startOfServiceTime = 0;
    this->departureTime = 0;

    this->nextCustomer = nullptr; //PTR TO NULL??
}
Customer::Customer(float arrivalTime, float startOfServiceTime, float departureTime){
    this->arrivalTime = arrivalTime;
    this->startOfServiceTime = startOfServiceTime;
    this->departureTime = departureTime;
}
Customer::~Customer(){
    delete this->nextCustomer; //delete ptr?
}
void Customer::setArrivalTime(float arrivalTime){
    this->arrivalTime = arrivalTime;
}
void Customer::setStartOfServiceTime(float startofServiceTime){
    this->startOfServiceTime = startOfServiceTime;
}
void Customer::setDepartureTime(float departureTime){
    this->departureTime = departureTime;
}
float Customer::getArrivalTime(){
    return this->arrivalTime;
}
float Customer::getStartOfServiceTime(){
    return this->startOfServiceTime;
}
float Customer::getDepartureTime(){
    return this->departureTime;
}
Customer* Customer::getNextCustomer(){//FIFO
    return this->nextCustomer;
}
