#include <iostream>
#include "Node.h"
#include "2list.h"
using namespace std;
int main()
{
    LinkedList<int> list;
    list.insertHead(323);
    list.insertHead(510);
    list.insertHead(111);
    list.insertTail(7);
    list.insertTail(1298);
    list.removeHead();
    list.removeTail();
    cout<<"Lista con elementos quitados:"<<endl;
    list.print();

    LinkedList<double> listitaB;
    listitaB.insertHead(3.4);
    listitaB.insertHead(32.12);
    listitaB.insertTail(7.0);
    listitaB.print();
    LinkedList<char> listitaC;
    listitaC.insertHead('L');
    listitaC.insertHead('O');
    listitaC.insertHead('H');
    listitaC.insertTail('A');
    listitaC.print();
    LinkedList<string> list2;
    list2.insertHead("como");
    list2.insertHead("como");
    list2.insertTail("estas");
    list2.removeHead();
    list2.print();
    cout << "Probando el iterador:" << endl; 
    for ( LinkedList<int>::Iterator iterator = list.begin(); iterator != list.end(); iterator++) 
    { 
        cout << *iterator << " "; 
    }
    cout<<endl; 
    list.insertHead(2);
    cout<<"Lista base: "<<endl;
    list.print();

  
}
