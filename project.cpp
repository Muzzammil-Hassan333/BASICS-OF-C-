#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students the system can hold

struct Student {
    int id;
    string name;
    string department;
    float grade;
};

// Global array to store student records
Student studentRecords[MAX_STUDENTS];
int studentCount = 0; // Number of students currently in the system

// Function Prototypes
void displayMenu();
void addStudent();
void viewAllStudents();
void searchStudentByID();
void editStudentByID();
void deleteStudentByID();

int main() {
    int choice;

    // Main loop for the menu-driven system
    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        // Handle user choice
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewAllStudents();
                break;
            case 3:
                searchStudentByID();
                break;
            case 4:
                editStudentByID();
                break;
            case 5:
                deleteStudentByID();
                break;
            case 6:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6); // Exit when choice is 6

    return 0;
}

// Function to display the main menu
void displayMenu() {
    cout << "\n--- Student Record Management System ---\n";
    cout << "1. Add New Student\n";
    cout << "2. View All Students\n";
    cout << "3. Search Student by ID\n";
    cout << "4. Edit Student by ID\n";
    cout << "5. Delete Student by ID\n";
    cout << "6. Exit\n";
}

// Function to add a new student to the system
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "Error: Cannot add more students. The system is full.\n";
        return;
    }

    Student newStudent;

    cout << "Enter Student ID: ";
    cin >> newStudent.id;
    cin.ignore(); // To handle newline characters in input

    cout << "Enter Student Name: ";
    getline(cin, newStudent.name);

    cout << "Enter Department: ";
    getline(cin, newStudent.department);

    cout << "Enter Grade (0.0 - 4.0): ";
    cin >> newStudent.grade;

    // Add the new student to the system
    studentRecords[studentCount] = newStudent;
    studentCount++;

    cout << "Student added successfully!\n";
}

// Function to view all student records
void viewAllStudents() {
    if (studentCount == 0) {
        cout << "No student records available.\n";
        return;
    }

    cout << "\n--- List of Students ---\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "ID: " << studentRecords[i].id
             << "\nName: " << studentRecords[i].name
             << "\nDepartment: " << studentRecords[i].department
             << "\nGrade: " << studentRecords[i].grade
             << "\n-----------------------\n";
    }
}

// Function to search for a student by ID
void searchStudentByID() {
    if (studentCount == 0) {
        cout << "No student records available.\n";
        return;
    }

    int searchID;
    cout << "Enter Student ID to search: ";
    cin >> searchID;

    bool found = false;
    for (int i = 0; i < studentCount; i++) {
        if (studentRecords[i].id == searchID) {
            cout << "\n--- Student Found ---\n";
            cout << "ID: " << studentRecords[i].id
                 << "\nName: " << studentRecords[i].name
                 << "\nDepartment: " << studentRecords[i].department
                 << "\nGrade: " << studentRecords[i].grade
                 << "\n-----------------------\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with ID " << searchID << " not found.\n";
    }
}

// Function to edit a student's information by ID
void editStudentByID() {
    if (studentCount == 0) {
        cout << "No student records available.\n";
        return;
    }

    int searchID;
    cout << "Enter Student ID to edit: ";
    cin >> searchID;

    bool found = false;
    for (int i = 0; i < studentCount; i++) {
        if (studentRecords[i].id == searchID) {
            found = true;
            cout << "\n--- Editing Student ---\n";
            cout << "Current Name: " << studentRecords[i].name
                 << "\nEnter New Name: ";
            cin.ignore();
            getline(cin, studentRecords[i].name);

            cout << "Current Department: " << studentRecords[i].department
                 << "\nEnter New Department: ";
            getline(cin, studentRecords[i].department);

            cout << "Current Grade: " << studentRecords[i].grade
                 << "\nEnter New Grade (0.0 - 4.0): ";
            cin >> studentRecords[i].grade;

            cout << "Student record updated successfully!\n";
            break;
        }
    }

    if (!found) {
        cout << "Student with ID " << searchID << " not found.\n";
    }
}

// Function to delete a student by ID
void deleteStudentByID() {
    if (studentCount == 0) {
        cout << "No student records available.\n";
        return;
    }

    int deleteID;
    cout << "Enter Student ID to delete: ";
    cin >> deleteID;

    bool found = false;
    for (int i = 0; i < studentCount; i++) {
        if (studentRecords[i].id == deleteID) {
            found = true;

            // Shift all students after the deleted one to the left
            for (int j = i; j < studentCount - 1; j++) {
                studentRecords[j] = studentRecords[j + 1];
            }
            studentCount--; // Reduce the count of students
            cout << "Student with ID " << deleteID << " deleted successfully.\n";
            break;
        }
    }

    if (!found) {
        cout << "Student with ID " << deleteID << " not found.\n";
    }
}