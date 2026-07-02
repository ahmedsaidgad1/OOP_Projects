#pragma once
#include <iostream>
#include <string>
#include <limits>
using namespace std;

class cls_Input_Validation
{
public:
    static bool Is_Num_Between(int Num, int from, int to)
    {
        return (Num >= from && Num <= to);
    }
    static bool Is_Num_Between(double Num, double from, double to)
    {
        return (Num >= from && Num <= to);
    }

    static int Read_Int_Number(string Error_Message = "Invalid Number, Enter again: ")
    {
        int Number;
        while (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << Error_Message;
        }
        return Number;
    }
    static double Read_Double_Number(string Error_Message = "Invalid Number, Enter again: ")
    {
        double Number;
        while (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << Error_Message;
        }
        return Number;
    }

    static int Read_Int_Num_Between(int from, int to, string Error_Message = "Number is not within range, Enter again: ")
    {
        int Num = Read_Int_Number();
        while (!Is_Num_Between(Num, from, to))
        {
            cout << Error_Message << endl;
            Num = Read_Int_Number();
        }
        return Num;
    }
    static double Read_Double_Num_Between(double from, double to, string Error_Message = "Number is not within range, Enter again: ")
    {
        double Num = Read_Double_Number();
        while (!Is_Num_Between(Num, from, to))
        {
            cout << Error_Message << endl;
            Num = Read_Double_Number();
        }
        return Num;
    }
    static float Read_Float_Number(string Error_Message = "Invalid Number, Enter again: ")
    {
        float Number;
        while (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << Error_Message;
        }
        return Number;
    }
    
    static string Read_string(string Error_Massage = "Invalid Input, Enter again: ")
    {
        string str = "";
        while (true)
        {
            getline(cin >> ws, str);
            if (str == "")
            {
                cout << Error_Massage;
            }
            else
            {
                return str;
            }
        }
    }
};