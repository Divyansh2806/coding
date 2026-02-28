#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure (can also use class) to store student
struct Student
{
    string fname;
    string lname;
    int roll;
    float cgpa;
    int cid[5]; // fixed to 5 courses
};

vector<Student> students; // dynamic list of students

// Function to add a student
void add_student()
{
    Student s;
    cout << "\nAdd Student Details\n";
    cout << "-------------------------\n";

    cout << "Enter the first name: ";
    cin >> s.fname;

    cout << "Enter the last name: ";
    cin >> s.lname;

    cout << "Enter the Roll Number: ";
    cin >> s.roll;

    cout << "Enter the CGPA: ";
    cin >> s.cgpa;

    cout << "Enter 5 Course IDs: ";
    for (int j = 0; j < 5; j++)
    {
        cin >> s.cid[j];
    }

    students.push_back(s);
    cout << "Student added successfully!\n";
}

// Function to find student by roll number
void find_rl()
{
    int x;
    bool found = false;
    cout << "Enter the Roll Number of the student: ";
    cin >> x;

    for (auto &st : students)
    {
        if (x == st.roll)
        {
            cout << "\nStudent Details:\n";
            cout << "First name: " << st.fname << "\n";
            cout << "Last name: " << st.lname << "\n";
            cout << "Roll Number: " << st.roll << "\n";
            cout << "CGPA: " << st.cgpa << "\n";
            cout << "Courses: ";
            for (int k = 0; k < 5; k++)
            {
                cout << st.cid[k] << " ";
            }
            cout << "\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Student with Roll Number " << x << " not found.\n";
}

// Function to find student by first name
void find_fn()
{
    string a;
    bool found = false;

    cout << "Enter the First Name: ";
    cin >> a;

    for (auto &st : students)
    {
        if (st.fname == a)
        {
            cout << "\nStudent Details:\n";
            cout << "First name: " << st.fname << "\n";
            cout << "Last name: " << st.lname << "\n";
            cout << "Roll Number: " << st.roll << "\n";
            cout << "CGPA: " << st.cgpa << "\n";
            cout << "Courses: ";
            for (int k = 0; k < 5; k++)
            {
                cout << st.cid[k] << " ";
            }
            cout << "\n";
            found = true;
        }
    }
    if (!found)
        cout << "No student found with First Name " << a << "\n";
}

// Function to find students by course ID
void find_c()
{
    int id;
    bool found = false;
    cout << "Enter the Course ID: ";
    cin >> id;

    for (auto &st : students)
    {
        for (int k = 0; k < 5; k++)
        {
            if (id == st.cid[k])
            {
                cout << "\nStudent Details:\n";
                cout << "First name: " << st.fname << "\n";
                cout << "Last name: " << st.lname << "\n";
                cout << "Roll Number: " << st.roll << "\n";
                cout << "CGPA: " << st.cgpa << "\n";
                found = true;
                break;
            }
        }
    }
    if (!found)
        cout << "No students found in Course ID " << id << "\n";
}

// Function to print total students
void tot_s()
{
    cout << "\nTotal number of Students: " << students.size() << "\n";
    cout << "Maximum students allowed: 50\n";
    cout << "Remaining slots: " << 50 - students.size() << "\n";
}

// Function to delete student by roll number
void del_s()
{
    int a;
    bool found = false;
    cout << "Enter the Roll Number to delete: ";
    cin >> a;

    for (auto it = students.begin(); it != students.end(); it++)
    {
        if (it->roll == a)
        {
            students.erase(it);
            cout << "Student with Roll Number " << a << " deleted successfully.\n";
            found = true;
            break;
        }
    }
    if (!found)
        cout << "No student found with Roll Number " << a << "\n";
}

// Function to update student details
void up_s()
{
    int x;
    bool found = false;
    cout << "Enter the Roll Number to update: ";
    cin >> x;

    for (auto &st : students)
    {
        if (st.roll == x)
        {
            found = true;
            cout << "What do you want to update?\n";
            cout << "1. First Name\n2. Last Name\n3. Roll Number\n4. CGPA\n5. Courses\n";
            int z;
            cin >> z;

            switch (z)
            {
            case 1:
                cout << "Enter new First Name: ";
                cin >> st.fname;
                break;
            case 2:
                cout << "Enter new Last Name: ";
                cin >> st.lname;
                break;
            case 3:
                cout << "Enter new Roll Number: ";
                cin >> st.roll;
                break;
            case 4:
                cout << "Enter new CGPA: ";
                cin >> st.cgpa;
                break;
            case 5:
                cout << "Enter 5 new Course IDs: ";
                for (int k = 0; k < 5; k++)
                {
                    cin >> st.cid[k];
                }
                break;
            default:
                cout << "Invalid choice.\n";
                return;
            }
            cout << "Student details updated successfully.\n";
            break;
        }
    }
    if (!found)
        cout << "Student with Roll Number " << x << " not found.\n";
}

// Driver code
int main()
{
    int choice;

    while (true)
    {
        cout << "\n========= Student Management System =========\n";
        cout << "1. Add Student\n";
        cout << "2. Find Student by Roll Number\n";
        cout << "3. Find Student by First Name\n";
        cout << "4. Find Students by Course ID\n";
        cout << "5. Total Number of Students\n";
        cout << "6. Delete Student by Roll Number\n";
        cout << "7. Update Student Details\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            find_rl();
            break;
        case 3:
            find_fn();
            break;
        case 4:
            find_c();
            break;
        case 5:
            tot_s();
            break;
        case 6:
            del_s();
            break;
        case 7:
            up_s();
            break;
        case 8:
            return 0;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}