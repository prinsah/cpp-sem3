#include <iostream>
#include <string>
using namespace std;


class Student {
protected:
    string Name;
    int Rollno;
    string Course;

public:
    void get_student_details() {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll No: ";
        cin >> Rollno;
        cout << "Enter Course: ";
        cin >> Course;
    }

    void display_student_details() {
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << Rollno << endl;
        cout << "Course: " << Course << endl;
    }
};


class Test : virtual public Student {
protected:
    int marks[3];
public:
    void get_marks() {
        cout << "Enter marks in 3 subjects: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }
    int total_marks() {
        return marks[0] + marks[1] + marks[2];
    }
};


class GraceMarks : virtual public Student {
protected:
    int BonusMark;
public:
    void get_bonus() {
        cout << "Enter Bonus Marks: ";
        cin >> BonusMark;
    }
    int get_bonus_mark() {
        return BonusMark;
    }
};


class Result : public Test, public GraceMarks {
public:
    void display_result() {
        int total = total_marks() + get_bonus_mark();
        cout << "\n----- STUDENT RESULT -----\n";
        display_student_details();
        cout << "Total Marks (with Bonus): " << total << endl;
    }
};


int main() {
    Result r;
    r.get_student_details();
    r.get_marks();
    r.get_bonus();
    r.display_result();
    return 0;
}
