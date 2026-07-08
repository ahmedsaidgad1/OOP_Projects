/* this project is created by Eng. Abdelrahman Mohamed
 I didn’t write this project .
 I just added some features to it and fixed some bugs in it.
 I Just put it here to help people who want to learn c++ and OOP concepts in c++ ,
 and to help my self to learn c++ and OOP concepts in c++ as well,
 and if i want any thing in this project i will just search for it in this project and i will find it easily
 because i have created a table of contents for this project to help me and you to find any thing in this project easily.
 I didn’t write this project from scratch , i just found it on the internet
 and i have modified it to be more useful and more easy to use and more easy to understand.
 thank you for using this project and i hope you will find it useful and easy to use and easy to understand.
*/

#include <iostream>
#include "clsPeriod.h"
using namespace std;

int main()

{

    clsPeriod Period1(clsDate(1, 1, 2022), clsDate(10, 1, 2022));
    Period1.Print();

    cout << endl;

    clsPeriod Period2(clsDate(3, 1, 2022), clsDate(5, 1, 2022));
    Period2.Print();

    cout << Period1.IsOverLapWith(Period2) << endl;

    cout << clsPeriod::IsOverlapPeriods(Period1, Period2) << endl;

    return 0;
}