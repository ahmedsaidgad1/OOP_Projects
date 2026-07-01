#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "clsString.h"
#include "clsPerson.h"
#include <string>
using namespace std;

class clsBank_Client : public clsPerson
{
private:
    enum enMode
    {
        Empty_Mode = 0,
        Update_Mode = 1
    };
    enMode _Mode;
    string _Account_Number;
    string _Account_Balance;
    string _Pin_Code;

    static string _Convert_Client_Object_To_Line(clsBank_Client Client, string Separator = "#//#")
    {
        string stClient_Record = "";

        stClient_Record += Client.Get_First_Name() + Separator;
        stClient_Record += Client.Get_Last_Name() + Separator;
        stClient_Record += Client.Get_Email() + Separator;
        stClient_Record += Client.Get_Phone() + Separator;
        stClient_Record += Client._Account_Number + Separator;
        stClient_Record += Client._Pin_Code + Separator;
        stClient_Record += Client._Account_Balance;

        return stClient_Record;
    }

    static clsBank_Client _Convert_Line_To_Client_Object(string line, string separator = "#//#")
    {
        vector<string> vClient_Data;
        vClient_Data = clsString::Split(line, separator);

        if (vClient_Data.size() < 7)
            return _Get_Empty_Client_Object();

        return clsBank_Client(enMode::Update_Mode, vClient_Data[0], vClient_Data[1], vClient_Data[2],
                              vClient_Data[3], vClient_Data[4], vClient_Data[5], vClient_Data[6]);
    }
    static clsBank_Client _Get_Empty_Client_Object()
    {
        return clsBank_Client(enMode::Empty_Mode, "", "", "", "", "", "", "");
    }

public:
    bool Is_Empty()
    {
        return (_Mode == enMode::Empty_Mode);
    }

    string AccountNumber()
    {
        return _Account_Number;
    }

    void SetPinCode(string Pin_Code)
    {
        _Pin_Code = Pin_Code;
    }

    string Get_Pin_Code()
    {
        return _Pin_Code;
    }

    void Set_Account_Balance(float Account_Balance)
    {
        _Account_Balance = to_string(Account_Balance);
    }

    float Get_Account_Balance()
    {
        if (_Account_Balance.empty())
            return 0;

        return stof(_Account_Balance);
    }

    clsBank_Client() : clsPerson("", "", "", "")
    {
        _Mode = enMode::Empty_Mode;
    }

    clsBank_Client(enMode Mode, string FirstName, string LastName, string Email, string Phone,
                   string Account_Number, string Pin_Code, string Account_Balance)
        : clsPerson(FirstName, LastName, Email, Phone)
    {
        _Mode = Mode;
        _Account_Number = Account_Number;
        _Pin_Code = Pin_Code;
        _Account_Balance = Account_Balance;
    }
    static clsBank_Client Find(string Account_Number)
    {
        fstream My_File;
        My_File.open("Clients.txt", ios::in);
        if (My_File.is_open())
        {
            string Line;
            while (getline(My_File, Line))
            {
                clsBank_Client Client = _Convert_Line_To_Client_Object(Line);
                if (Client._Account_Number == Account_Number)
                {
                    My_File.close();
                    return Client;
                }
            }
            My_File.close();
        }
        return _Get_Empty_Client_Object();
    }
    static clsBank_Client Find(string Account_Number, string Pin_Code)
    {
        fstream My_File;
        My_File.open("Clients.txt", ios::in);
        if (My_File.is_open())
        {
            string Line;
            while (getline(My_File, Line))
            {
                clsBank_Client Client = _Convert_Line_To_Client_Object(Line);
                if (Client._Account_Number == Account_Number && Client._Pin_Code == Pin_Code)
                {
                    My_File.close();
                    return Client;
                }
            }
            My_File.close();
        }
        return _Get_Empty_Client_Object();
    }
    void Print()
    {
        cout << endl;
        cout << "Client Card:" << endl;
        cout << "-----------------------------" << endl;
        cout << "FirstName   : " << Get_First_Name() << endl;
        cout << "LastName    : " << Get_Last_Name() << endl;
        cout << "Full Name   : " << Full_Name() << endl;
        cout << "Email       : " << Get_Email() << endl;
        cout << "Phone       : " << Get_Phone() << endl;
        cout << "Acc. Number : " << _Account_Number << endl;
        cout << "Password    : " << _Pin_Code << endl;
        cout << "Balance     : " << _Account_Balance << endl;
        cout << "-----------------------------" << endl;
    }
};