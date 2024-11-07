#include <iostream>
#include "priority_queue.h"

using namespace std;

int main() {
    Queue q(10);

    cout << "Testing Insert" << endl;
    q.Insert("Ivette Pizarro", "high");//1
    q.Insert("Tiger woods", "high");//2
    q.Insert("Micheal Phelps", "low");//3
    q.Insert("Tiger woods", "low");//4
    q.Insert("Wayne Getzki", "high");//5
    q.Insert("lindsey Vonn", "low");//6
    q.Insert("Babe Ruth", "low");//7
    q.Insert("Emmit Ruth" , "low");//8
    q.Insert("Tiger Woods", "high");//9
    q.Insert("Babe Ruth", "high");//10

    cout << endl << "Priority Queue after Insert" << endl;
    q.Print();

    cout << endl << "Testing Remove" << endl;
    q.Remove();
    q.Remove();
    q.Remove();
    q.Remove();

    cout << endl << "Priority Queue after Remove" << endl;
    q.Print();

    cout << endl << "Testing Remove" << endl;
    q.Remove();
    q.Remove();
    q.Remove();
    q.Remove();
    q.Remove();


    cout << endl << "Priority Queue after Remove" << endl;
    q.Print();

    return 0;
}
