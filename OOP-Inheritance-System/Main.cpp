#include <iostream>
using namespace std;

class clsperson
{
private:
    int _ID;
    string _firstname;
    string _lastname;
    string _fullname;
    string _email;
    string _phone;

public:
    clsperson(int id, string fname, string lname, string email, string phone)
    {
        _ID = id;
        _firstname = fname;
        _lastname = lname;
        _fullname = fname + " " + lname;
        _email = email;
        _phone = phone;
    }
    int ID()
    {
        return _ID;
    }

    void setfirstname(string fname)
    {
        _firstname = fname;
    }
    string firstname()
    {
        return _firstname;
    }

    void setlastname(string lname)
    {
        _lastname = lname;
    }
    string lastname()
    {
        return _lastname;
    }

    void setemail(string email)
    {
        _email = email;
    }
    string email()
    {
        return _email;
    }

    void setphone(string phone)
    {
        _phone = phone;
    }
    string phone()
    {
        return _phone;
    }

    string fullname()
    {
        return _firstname + " " + _lastname;
    }

    void print()
    {
        cout << "---------> Info <---------" << endl;
        cout << "First Name : " << _firstname << endl;
        cout << "Last Name  : " << _lastname << endl;
        cout << "Full Name  : " << _fullname << endl;
        cout << "ID         : " << _ID << endl;
        cout << "Email      : " << _email << endl;
        cout << "Phone      : " << _phone << endl;
    }
    void SendEmail(string Subject, string Body)
    {
        cout << endl;
        cout << "The following message sent successfully to email : " << _email << endl;
        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }
    void SendSMS(string TextMessage)
    {
        cout << endl;
        cout << "The following SMS sent successfully to phone: " << _phone << " "
             << TextMessage << endl;
    }
};

class clsemployee : public clsperson
{
private:
    string _title;
    string _department;
    float _salary;

public:
    clsemployee(int id, string firstname, string lastname, string email, string phone, string title, string department, float salary)
        : clsperson(id, firstname, lastname, email, phone)
    {
        _title = title;
        _department = department;
        _salary = salary;
    }

    void settitle(string title)
    {
        _title = title;
    }
    string title()
    {
        return _title;
    }

    void setdepartment(string department)
    {
        _department = department;
    }
    string department()
    {
        return _department;
    }

    void setsalary(float salary)
    {
        _salary = salary;
    }
    float salary()
    {
        return _salary;
    }
    void print()
    {
        clsperson::print();
        cout << "Salary     : " << _salary << endl;
        cout << "Department : " << _department << endl;
        cout << "Title      : " << _title << endl;
    }
};

class clsdeveloper : public clsemployee
{
private:
    string _MainProgrammingLanguage;

public:
    clsdeveloper(int id, string firstname, string lastname,
                 string email, string phone, string title, string department, float salary, string mainprogramminglanguage)
        : clsemployee(id, firstname, lastname, email, phone, title, department, salary)
    {
        _MainProgrammingLanguage = mainprogramminglanguage;
    }

    void setmainprogramminglanguage(string mainprogramminglanguege)
    {
        _MainProgrammingLanguage = mainprogramminglanguege;
    }
    string mainprogramminglanguege()
    {
        return _MainProgrammingLanguage;
    }
    void print()
    {
        cout << "\n=========>>  Info :  <<=========";
        cout << "\n________________________________";
        cout << "\nID          : " << ID();
        cout << "\nFirstName   : " << firstname();
        cout << "\nLastName    : " << lastname();
        cout << "\nFull Name   : " << fullname();
        cout << "\nEmail       : " << email();
        cout << "\nPhone       : " << phone();
        cout << "\nTitle       : " << title();
        cout << "\nDepartment  : " << department();
        cout << "\nSalary      : " << salary();
        cout << "\nPLanguage   : " << mainprogramminglanguege();
        cout << "\n_______________________________";
    }
};

int main()
{
    clsdeveloper developer1(123, "Ahmed", "Gad", "A@a.com", "213", "Software Programming",
                            "11", 12, "C++");
    developer1.print();

    return 0;
}