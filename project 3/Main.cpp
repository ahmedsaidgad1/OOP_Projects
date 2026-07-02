#include <iostream>
#include "clsBank_Client.h"

int main()

{

    clsBank_Client Client1 = clsBank_Client::Find("A0231");
    if (!Client1.Is_Empty())
    {
        cout << "\nClient Found :-)\n";
    } 
    else
    {
        cout << "\nClient Was not Found :-(\n";
    }
    
    Client1.Print();

    clsBank_Client Client2 = clsBank_Client::Find("A0103", "1234");
    if (!Client2.Is_Empty())
    {
        cout << "\nClient Found :-)\n";
    }
    else
    {
        cout << "\nClient Was not Found :-(\n";
    }
    Client2.Print();

    cout << "\nIs Client Exist? " << (Client1.Is_Empty() ? "No" : "Yes");
    return 0;
}