//
// Created by Ivette Pizarro on 11/1/24.
//

#include "priority_queue.h"

Queue::Queue(int maxSize): max_size(maxSize), head (0), tail(0){
    customers = new string[max_size];
    priorities = new string[max_size];
}
Queue::Queue(const Queue &queue):
max_size(queue.max_size), head(queue.head), tail(queue.tail){
    customers = new string[max_size];
    priorities = new string[max_size];
    for (int i = 0; i < (head + tail); i++){
        customers[i] = queue.customers[i];
        priorities[i] = queue.priorities[i];
    }
}

Queue::~Queue(){
    delete[] customers;
    delete[] priorities;
}

bool Queue::IsFull(){
    return (head + tail) >= max_size;

}

bool Queue::IsEmpty(){
    return (head == 0) && (tail == 0);
}

void Queue::Insert(const string& customer, const string& priority){
    if (IsFull()){
        cout << "Overflow" << endl;
        return;
    }

    if (priority == "high"){
        if (head >= max_size){
            cout << "Error Head out of bounds\n";
            return;
        }
        for (int i = head ; i > 0 ; i--){
            customers[i] = customers[i-1];
            priorities[i] = priorities[i-1];
        }
        customers[0] = customer;
        priorities[0] = priority;
        head++;
    }
    else{
        if (max_size -1 - tail < 0){
            cout << "Error tail out of bound\n";
            return;
        }
        customers[max_size - 1 - tail] = customer;
        priorities[max_size - 1 - tail] = priority;
        tail++;
    }
    cout << "Insert " << customer << " " << priority << " ok" << endl;

}
void Queue::Remove(){
    if (IsEmpty()){
        return;
    }
    if (head > 0){
        cout << "Remove " << customers[0] << " high ok" << endl;
        for (int i = 0; i < head - 1; i++){
            customers[i] = customers[i+1];
            priorities[i] = priorities[i+1];
        }
        head--;
    }
    else if (tail > 0){
        int li = max_size-tail;
        cout << "Remove " << customers[li] << " low ok" << endl;

        tail--;
    }
}

void Queue::Print() const{
    cout << "High Priority Names: " << endl;
    for (int i = 0; i < head; i ++){
        cout << customers[i] << endl;
    }

    cout << "Low Priority Names: " << endl;
    for (int i = max_size-tail; i < max_size;i++){
        cout << customers[i] << endl;
    }
}
