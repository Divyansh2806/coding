#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;


struct sinfo
{
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[5];
} st[55];

void add_student()
{
    printf("\nAdd Student Details\n");
    printf("-------------------------\n");

    printf("Enter the first name: ");
    scanf("%s", st[i].fname);

    printf("Enter the last name: ");
    scanf("%s", st[i].lname);

    printf("Enter the Roll Number: ");
    scanf("%d", &st[i].roll);

    printf("Enter the CGPA: ");
    scanf("%f", &st[i].cgpa);

    printf("Enter 5 Course IDs: ");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &st[i].cid[j]);
    }

    i++;
    printf("Student added successfully!\n");
}

// Function to find student by roll number
void find_rl()
{
    int x, found = 0;
    printf("Enter the Roll Number of the student: ");
    scanf("%d", &x);

    for (int j = 0; j < i; j++)
    {
        if (x == st[j].roll)
        {
            printf("\nStudent Details:\n");
            printf("First name: %s\n", st[j].fname);
            printf("Last name: %s\n", st[j].lname);
            printf("Roll Number: %d\n", st[j].roll);
            printf("CGPA: %.2f\n", st[j].cgpa);
            printf("Courses: ");
            for (int k = 0; k < 5; k++)
            {
                printf("%d ", st[j].cid[k]);
            }
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Student with Roll Number %d not found.\n", x);
}

// Function to find student by first name
void find_fn()
{
    char a[50];
    int found = 0;

    printf("Enter the First Name: ");
    scanf("%s", a);

    for (int j = 0; j < i; j++)
    {
        if (strcmp(st[j].fname, a) == 0)
        {
            printf("\nStudent Details:\n");
            printf("First name: %s\n", st[j].fname);
            printf("Last name: %s\n", st[j].lname);
            printf("Roll Number: %d\n", st[j].roll);
            printf("CGPA: %.2f\n", st[j].cgpa);
            printf("Courses: ");
            for (int k = 0; k < 5; k++)
            {
                printf("%d ", st[j].cid[k]);
            }
            printf("\n");
            found = 1;
        }
    }
    if (!found)
        printf("No student found with First Name %s\n", a);
}

// Function to find students by course ID
void find_c()
{
    int id, found = 0;
    printf("Enter the Course ID: ");
    scanf("%d", &id);

    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            if (id == st[j].cid[k])
            {
                printf("\nStudent Details:\n");
                printf("First name: %s\n", st[j].fname);
                printf("Last name: %s\n", st[j].lname);
                printf("Roll Number: %d\n", st[j].roll);
                printf("CGPA: %.2f\n", st[j].cgpa);
                found = 1;
                break;
            }
        }
    }
    if (!found)
        printf("No students found in Course ID %d\n", id);
}

// Function to print total students
void tot_s()
{
    printf("\nTotal number of Students: %d\n", i);
    printf("Maximum students allowed: 50\n");
    printf("Remaining students: %d\n", 50 - i);
}

// Function to delete student by roll number
void del_s()
{
    int a, found = 0;
    printf("Enter the Roll Number to delete: ");
    scanf("%d", &a);

    for (int j = 0; j < i; j++)
    {
        if (a == st[j].roll)
        {
            for (int k = j; k < i - 1; k++)
            {
                st[k] = st[k + 1];
            }
            i--;
            found = 1;
            printf("Student with Roll Number %d deleted successfully.\n", a);
            break;
        }
    }
    if (!found)
        printf("No student found with Roll Number %d\n", a);
}

// Function to update student details
void up_s()
{
    int x, found = 0;
    printf("Enter the Roll Number to update: ");
    scanf("%d", &x);

    for (int j = 0; j < i; j++)
    {
        if (st[j].roll == x)
        {
            found = 1;
            printf("What do you want to update?\n");
            printf("1. First Name\n2. Last Name\n3. Roll Number\n4. CGPA\n5. Courses\n");
            int z;
            scanf("%d", &z);

            switch (z)
            {
            case 1:
                printf("Enter new First Name: ");
                scanf("%s", st[j].fname);
                break;
            case 2:
                printf("Enter new Last Name: ");
                scanf("%s", st[j].lname);
                break;
            case 3:
                printf("Enter new Roll Number: ");
                scanf("%d", &st[j].roll);
                break;
            case 4:
                printf("Enter new CGPA: ");
                scanf("%f", &st[j].cgpa);
                break;
            case 5:
                printf("Enter 5 new Course IDs: ");
                for (int k = 0; k < 5; k++)
                {
                    scanf("%d", &st[j].cid[k]);
                }
                break;
            default:
                printf("Invalid choice.\n");
                return;
            }
            printf("Student details updated successfully.\n");
            break;
        }
    }
    if (!found)
        printf("Student with Roll Number %d not found.\n", x);
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n========= Student Management System =========\n");
        printf("1. Add Student\n");
        printf("2. Find Student by Roll Number\n");
        printf("3. Find Student by First Name\n");
        printf("4. Find Students by Course ID\n");
        printf("5. Total Number of Students\n");
        printf("6. Delete Student by Roll Number\n");
        printf("7. Update Student Details\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

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
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}