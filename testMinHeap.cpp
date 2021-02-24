#include"minHeap.hpp"
#include"customer.hpp"
#include<iostream>

using namespace std;
int main(){ 

    MinHeap heap;

    int opt;
    
    cout<<"0. Exit" << endl;
    cout<<"1. Inserting Customer Element" << endl;
    cout<<"2. Deleting Minimum Customer Element"<<endl;
    cout<<"3. Getting Minimum Customer Element"<<endl;
    cout<<"4. Printing min heap"<<endl;
    cout << "option: ";
    cin >> opt;

    while (opt !=0)
    {
        int arr, serv, dep;
        arr++;
        serv++;
        dep++;

        Customer customerObj(arr, serv, dep);

        switch(opt)
        {
        case 0:
            exit(0);
        case 1:
            cout<<"Enter the element to be inserted: ";
            heap.insert(customerObj);
            break;
        case 2:
            heap.deleteMin();
            break;
        case 3:
            cout<<"Minimum Element: ";
            if (heap.size() != 0) //if heap is not empty
                cout<<"Minimum Element:  "<<heap.getMin()<<endl; //print customer obj??
            break;
        case 4:
            cout<<"printing heap" << endl;
            //cout << heap; operator overloading
            break;

        cout << "option: ";
        cin >> opt;
    }
    return 0;
}