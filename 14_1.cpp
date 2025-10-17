// Write a C++ program to define a class Student with data members Name, Rollno, and Course.
//Derive a class Test from a student with data members as marks in 3 subjects. Derive a class
//GraceMarks from a student with a data member BonusMark. Derive a class result from both Test and
//Gracemarks and calculate the Total marks. Display the result with all the details. Use the concept of a
//Virtual base class.




#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int Rollno;
    string course;

public:
    void student_details() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> Rollno;

        cout << "Enter course name: ";
        cin >> course;
    }

    void display_details() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << Rollno << endl;
        cout << "Course: " << course << endl;
    }
};

class Test : virtual public Student {
private:
    float m1, m2, m3;

public:
    void marks() {
        cout << "Enter 3 marks: ";
        cin >> m1 >> m2 >> m3;
    }

    void display_marks() {
        cout << "\nMARKS IN 3 SUBJECTS: " << m1 << ", " << m2 << ", " << m3 << endl;
    }

    float total_marks() {
        return m1 + m2 + m3;
    }
};

class GraceMarks : virtual public Student {
private:
    float bonusmark;

public:
    void input_bonus() {
        cout << "Enter Bonus Marks: ";
        cin >> bonusmark;
    }

    void display_bonus() {
        cout << "BONUS MARKS: " << bonusmark << endl;
    }

    float get_bonus() {
        return bonusmark;
    }
};

class result : public Test, public GraceMarks {
private:
    float total;

public:
    void calculate_total() {
        total = total_marks() + get_bonus();
    }

    void display_result() {
        cout << "\n---- STUDENT DETAILS ----" << endl;
        display_details();
        display_marks();
        display_bonus();
        cout << "TOTAL MARKS: " << total << endl;
    }
};

int main() {
    result rslt;

    cout << "\nENTER STUDENT DETAILS:\n";
    rslt.student_details();

    cout << "\nENTER MARKS:\n";
    rslt.marks();

    cout << "\nENTER BONUS MARKS:\n";
    rslt.input_bonus();

    rslt.calculate_total();

    cout << "\nRESULT:\n";
    rslt.display_result();

   
}

