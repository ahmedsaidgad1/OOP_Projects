#include<iostream>
#include"clsBank_Client.h"
int main()
{
    clsBank_Client Client1 = clsBank_Client::Find("A07", "125");

    if (Client1.Is_Empty())
    {
        cout << "This PIN code is not found for any client."<<endl;;
    }
    else
    {
        cout << "This PIN code exists."<<endl;
        Client1.Print();
    }

    return 0;
}       