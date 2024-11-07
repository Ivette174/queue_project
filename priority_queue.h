//
// Created by Ivette Pizarro on 11/1/24.
//

#ifndef PF2PROJECT5_PRIORITY_QUEUE_H
#define PF2PROJECT5_PRIORITY_QUEUE_H

#include <iostream>
#include <string>
#include <queue>
#include <iomanip>

using namespace std;

class Queue{

public:
    //constructors
    Queue(int maxsize = 10);
    Queue(const Queue &queue);
    ~Queue();

    bool IsFull();
    bool IsEmpty();
    void Insert (const string& customer, const string& priority);
    void Remove();
    void Print() const;

private:
    string* customers;
    string* priorities;
    int head, tail, max_size;

};

#endif //PF2PROJECT5_PRIORITY_QUEUE_H
