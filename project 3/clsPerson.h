#pragma once
#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _First_Name;
    string _Last_Name;
    string _Email;
    string _Phone;

public:
    clsPerson()
    {
        
    }
    clsPerson(string First_Name, string Last_Name, string Email, string Phone)
    {
        _First_Name = First_Name;
        _Last_Name = Last_Name;
        _Email = Email;
        _Phone = Phone;
    }

    void Set_First_Name(string First_Name)
    {
        _First_Name = First_Name;
    }
    string Get_First_Name() const
    {
        return _First_Name;
    }

    void Set_Last_Name(string Last_Name)
    {
        _Last_Name = Last_Name;
    }
    string Get_Last_Name() const
    {
        return _Last_Name;
    }

    void Set_Email(string Email)
    {
        _Email = Email;
    }
    string Get_Email() const
    {
        return _Email;
    }

    void Set_Phone(string Phone)
    {
        _Phone = Phone;
    }
    string Get_Phone() const
    {
        return _Phone;
    }

     string Full_Name() const
    {
        return _First_Name + " " + _Last_Name;
    }
};
