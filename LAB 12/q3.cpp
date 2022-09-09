#include <iostream>
#include <iomanip>

using namespace std;

class Participant
{
    protected:

        string name, location;
        int age;

    public:

        Participant()
        {
            cout << "-----------------------------------------" << endl;
            cout << "            Participant Details  " << endl;
            cout << "-----------------------------------------" << endl;
        }
};

class Progress
{
    protected:

        string date[3];
        float rate[3];
        char grade;

    public:

        void mark_entry()
        {
            int sum = 0;
            float average;
            for(int i = 0; i < 3; i++){
                cout << setw(26) << "Enter date (dd/mm/yy)" << " : ";
                cin >> date[i];
                cout << "Enter rating (between 1-5) : ";
                cin >> rate[i];
                sum = sum + rate[i];
            }

            average = sum/3;
            set_grade(average);
        }

        void set_grade(float average)
        {
            if(average >= 4.00)
            {
                grade = 'A';
            }
            else if(average >= 3.00 && average < 4)
            {
                grade = 'B';
            }
            else if(average < 3.00)
            {
                grade = 'C';
            }
        }
};

class Result: public Participant, public Progress
{

    private:

        string prize;

    public:

        void setdetailst()
        {
            cout << left;
            cout << setw(14) << "Enter Name" << " : ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Location : ";
            cin >> location;
            cout << setw(14) << "Enter Age" << " : ";
            cin >> age;
        }

        void display()
        {
            cout << setw(8) << "Name" << " : " << name << endl;
            cout << "Location : " << location << endl;
            cout << setw(8) << "Age" << " : " << age << endl;
            cout << "Rating 1 : " << rate[0] << endl;
            cout << "Rating 2 : " << rate[1] << endl;
            cout << "Rating 3 : " << rate[2] << endl;
            cout << setw(8) << "Grade" << " : " << grade << endl;

            if(grade == 'A')
            {
                prize = "Mug + RM10 book voucher";
            }
            else
            {
                prize = "BPA free Water Bottle";
            }

            cout << "Congrats, you can claim your " + prize << "!" << endl;
        }

        friend void summary(Result[], int);
};

void summary(Result obj[], int size)
{
    int countA = 0;
    int countB = 0;
    int countC = 0;
    for(int i = 0; i < size; i++)
    {
        if(obj[i].grade == 'A')
        {
            countA++;
        }
        else if(obj[i].grade == 'B')
        {
            countB++;
        }
        else if(obj[i].grade == 'C')
        {
            countC++;
        }
    }

    cout << "Grade A : ";
    for(int i = 0; i < countA; i++)
    {
        cout << "*";
    }

    cout << "\nGrade B : ";
    for(int i = 0; i < countB; i++)
    {
        cout << "*";
    }

    cout << "\nGrade C : ";
    for(int i = 0; i < countC; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

int main()
{
    int size;
    cout << "Enter number of participants : ";
    cin >> size;

    Result *Stud1 = new Result[size];
    for(int i = 0; i < size; i++)
    {
        Stud1[i].setdetailst();

        cout << "-----------------------------------------" << endl;
        cout << "         RECITAL PROGRESS DETAILS" << endl;
        cout << "-----------------------------------------" << endl;
        Stud1[i].mark_entry();

        cout << "\n";
        cout << "-----------------------------------------" << endl;
        cout << "              RESULT SLIP" << endl;
        cout << "-----------------------------------------" << endl;
        Stud1[i].display();
        cout << "\n";
    }

    cout << "====================================" << endl;
    cout << "          Summary Results" << endl;
    cout << "====================================" << endl;
    summary(Stud1, size);

    delete[] Stud1;

    return 0;
}
