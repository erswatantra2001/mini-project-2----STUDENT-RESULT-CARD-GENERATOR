#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    long int adm_no;
    long int reg_id;
    string name;
    int cls;
    int roll;
    string section;
    string remarks;
    int mathsMarks;
    int englishMarks;
    int hindiMarks;
    int scienceMarks;
    int socialMarks;
    int computerMarks;

public:
    void setData(long int ad_no, string nam, int clss, int rol, string sect, string remks)
    {
        adm_no = ad_no;
        name = nam;
        cls = clss;
        roll = rol;
        section = sect;
        remarks = remks;
    }

    int setMarks(int maths, int english, int hindi, int science, int social, int computer)
    {
        mathsMarks = maths;
        englishMarks = english;
        hindiMarks = hindi;
        scienceMarks = science;
        socialMarks = social;
        computerMarks = computer;
    }

    long int getAdmNo()
    {
        return adm_no;
    }

    string getName()
    {
        return name;
    }

    int getCls()
    {
        return cls;
    }

    int getRoll()
    {
        return roll;
    }

    string getSection()
    {
        return section;
    }

    string getRemarks()
    {
        return remarks;
    }
    float calcPercentage()
    {
        float ans = (mathsMarks + englishMarks + hindiMarks + socialMarks + computerMarks + scienceMarks);
        float percent = ans / 600;
        float finalValues = percent * 100;
        return finalValues;
    }

    float getPercentage()
    {
        cout << endl << "--------------------------------------------------------" << endl;
        cout << endl << "--------- marks of all subjects ---------" << endl;
        cout << endl;
        cout  <<  "your maths marks are : "  << mathsMarks << endl;
        cout  <<  "your hindi marks are : "  << hindiMarks << endl;
        cout  <<  "your english marks are : "  << englishMarks << endl;
        cout  <<  "your science marks are : "  << scienceMarks << endl;
        cout  <<  "your computer marks are : "  << computerMarks << endl;
        cout  <<  "your social science marks are : "  << socialMarks << endl;
        cout << endl << "---------- Total percentage occupied ----------" << endl;
        cout << endl;
        cout << "your total percentage for this year's result is : " << calcPercentage() << "%" << endl;
    }

    void getFinalResult()
    {
        cout << endl
             << "---------- Result Card ----------" << endl;
        cout << endl;

        cout << "Admission Number : " << getAdmNo() << endl;
        cout << "Student Name : " << getName() << endl;
        cout << "Class : " << getCls() << endl;
        cout << "Roll Number : " << getRoll() << endl;
        cout << "Section : " << getSection() << endl;
        cout << "Remark : " << getRemarks() << endl;
    }
};

int main()
{

    system("cls");

    cout << endl
         << "------------- Enter details of student ---------------" << endl;
    
    long int reg = 12345678;
    
    long int regNo;
    
    cout << "Enter Registration Number : ";
    cin >> regNo;
    
    if (reg != regNo)
    {
        cout << "Incorrect registeration id ! fill it correct to get enter ..." << endl;
        exit(1);
    }
    else
    {

    student ss;

    float maths;
    float hindi;
    float english;
    float science;
    float computer;
    float social;

    system("cls");

    cout << "Enter marks of maths : ";
    cin >> maths;
    cout << "Enter marks of hindi : ";
    cin >> hindi;
    cout << "Enter marks of english : ";
    cin >> english;
    cout << "Enter marks of science : ";
    cin >> science;
    cout << "Enter marks of computer : ";
    cin >> computer;
    cout << "Enter marks of social science : ";
    cin >> social;

    ss.setMarks(maths, english, hindi, science, social, computer);
    system("cls");

    long int admNo;
    cout << "Enter Addmission Number : ";
    cin >> admNo;
    string name;
    cout << "Enter name of student : ";
    cin.ignore();
    getline(cin, name);
    int cls;
    cout << "Enter class : ";
    cin >> cls;
    int roll;
    cout << "Enter Roll number : ";
    cin >> roll;
    string section;
    cout << "Enter section : ";
    cin.ignore();
    getline(cin, section);
    string remarks;
    cout << "Enter Remarks : ";
    getline(cin, remarks);

    ss.setData(admNo, name, cls, roll, section, remarks);

    system("cls");
    ss.getFinalResult();
    ss.getPercentage();
    }


    cout << endl;
    cout << endl << "****** project creator : swatantra gupta *******" << endl;
    cout << endl;
    return 0;
}