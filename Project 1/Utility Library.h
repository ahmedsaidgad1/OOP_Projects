#pragma once
#include <iostream>
#include <string>
using namespace std;

class clsUtil
{
public:
    enum en_Char_Type
    {
        Small_Letter = 1,
        Capital_Letter = 2,
        Digit = 3,
        Mix_Chars = 4,
        Special_Char = 5
    };
    static void Srand()
    {
        srand((unsigned)time(NULL));
    }

    static int Random_Number(int from, int to)
    {
        int rand_num = rand() % (to - from + 1) + from;
        return rand_num;
    }

    static char Get_Random_Char(en_Char_Type Char_Type)
    {
        if (Char_Type == Mix_Chars)
        {
            // Capital / Small / Digits only
            Char_Type = (en_Char_Type)Random_Number(1, 3);
        }

        switch (Char_Type)
        {
        case en_Char_Type::Digit:
        {
            return char(Random_Number(48, 57));
            break;
        }
        case en_Char_Type::Small_Letter:
        {
            return char(Random_Number(97, 122));
            break;
        }
        case en_Char_Type::Capital_Letter:
        {
            return char(Random_Number(65, 90));
            break;
        }
        case en_Char_Type::Special_Char:
        {
            return char(Random_Number(33, 47));
            break;
        }
        defualt:
        {
            return char(Random_Number(65, 90));
            break;
        }
        }
    }

    static string Generate_Random_Word(en_Char_Type Char_Type, int length)
    {
        string Word = "";
        for (int i = 0; i < length; i++)
        {
            Word += Get_Random_Char(Char_Type);
        }
        return Word;
    }

    static string Generate_Key(en_Char_Type Char_Type = Mix_Chars)
    {
        string Key = "";
        Key = Generate_Random_Word(Char_Type, 4) + "-";
        Key += Generate_Random_Word(Char_Type, 4) + "-";
        Key += Generate_Random_Word(Char_Type, 4) + "-";
        Key += Generate_Random_Word(Char_Type, 4);
        return Key;
    }

    static void Generate_Keys(en_Char_Type Char_Type, int Num_Of_Keys)
    {
        for (int i = 0; i < Num_Of_Keys; i++)
        {
            cout << "Key [ " << i << " ] " << Generate_Key(Char_Type) << endl;
        }
    }

    static void Fill_Array_With_Random_Numbers(int arr[100], int Arr_length, int From, int To)
    {
        for (int i = 0; i < Arr_length; i++)
            arr[i] = Random_Number(From, To);
    }

    static void Fill_Array_With_Random_Words(string arr[100], int Arr_Length, en_Char_Type CharType, short Wordlength)
    {
        for (int i = 0; i < Arr_Length; i++)
        {
            arr[i] = Generate_Random_Word(CharType, Wordlength);
        }
    }

    static void Fill_Array_With_Random_Keys(string arr[100], int Arr_Length, en_Char_Type Char_Type)
    {
        for (int i = 0; i < Arr_Length; i++)
            arr[i] = Generate_Key(Char_Type);
    }

    void Swap_Two_Integer_Nums(int &A, int &B)
    {
        A = A + B;
        B = A - B;
        A = A - B;
    }

    static string Decrypt_Text(string Text, short Encryption_Key)
    {

        for (int i = 0; i <= Text.length(); i++)
        {

            Text[i] = char((int)Text[i] - Encryption_Key);
        }
        return Text;
    }
};
