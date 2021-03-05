/***************************************************************
  Student Name: Odalys Rodriguez
  File Name: Customer.cpp
  Project 2
  Customer Class
***************************************************************/  
#include"customer.hpp"

Customer::Customer(){
    this->arrivalTime = 0;
    this->startOfServiceTime = 0;
    this->departureTime = 0;

    this->pqTime = 0;//set pq to arrival when you get a depart, set pq to departure time

    this->nextCustomer = nullptr; //PTR TO NULL??
}
Customer::Customer(float arrivalTime, float startOfServiceTime, float departureTime){
    this->arrivalTime = arrivalTime;
    this->startOfServiceTime = startOfServiceTime;
    this->departureTime = departureTime;
    this->pqTime = arrivalTime;
}
Customer::~Customer(){
    this->nextCustomer = NULL; //delete ptr?
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
