#include <iostream>
using namespace std;
void displayStudentID(int studentID);
void costSlab1(int matrix[][3]);
void costSlab2(int matrix[][3]);
void costSlab3(int matrix[][3]);

int main() {
    int studentID = 12345;

    int electricityMatrix[3][3] = {
        {50, 120, 250},
        {80, 150, 300},
        {110, 180, 350}
    };

    displayStudentID(studentID);

    char choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Display the bill of slab 1 and slab 2\n";
        cout << "2. Display the bill of slab 3\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                costSlab1(electricityMatrix);
                costSlab2(electricityMatrix);
                break;
            case '2':
                costSlab3(electricityMatrix);
                break;
            case '3':
                cout << "Exiting program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != '3');

    return 0;
}

void displayStudentID(int studentID) {
    cout << "Student ID: " << studentID << "\n";
}

void costSlab1(int matrix[][3]) {
    int unitRange = 100;
    int unitCost = 10;
    int unitsConsumed = matrix[0][0];

    int totalCost = unitsConsumed * unitCost;

    cout << "\nBill for Slab 1 (0-100 units):\n";
    cout << "Units consumed: " << unitsConsumed << "\n";
    cout << "Total cost: Rs. " << totalCost << "\n";
}

void costSlab2(int matrix[][3]) {
    int unitRangeStart = 101;
    int unitRangeEnd = 200;
    int unitCost = 15;
    int unitsConsumed = matrix[1][0];

    int totalCost = unitsConsumed * unitCost;

    cout << "\nBill for Slab 2 (101-200 units):\n";
    cout << "Units consumed: " << unitsConsumed << "\n";
    cout << "Total cost: Rs. " << totalCost << "\n";
}

void costSlab3(int matrix[][3]) {
    int unitRangeStart = 201;
    int unitRangeEnd = 300;
    int unitCost = 20;
    int unitsConsumed = matrix[2][0];

    int totalCost = unitsConsumed * unitCost;

    cout << "\nBill for Slab 3 (201-300 units):\n";
    cout << "Units consumed: " << unitsConsumed << "\n";
    cout << "Total cost: Rs. " << totalCost << "\n";
}