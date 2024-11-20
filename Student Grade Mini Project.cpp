#include <iostream>
using namespace std;

// Function to calculate grade
char calculateGrade(float percentage) {
    if (percentage >= 90) {
        return 'A';
    } else if (percentage >= 80) {
        return 'B';
    } else if (percentage >= 70) {
        return 'C';
    } else if (percentage >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

// Main function
int main() {
    // Variables
    const int TOTAL_MARKS = 300; // Maximum possible marks
    float subject1, subject2, subject3;

    // Input: Get marks for 3 subjects
    cout << "Enter marks for Subject 1 (out of 100): ";
    cin >> subject1;

    cout << "Enter marks for Subject 2 (out of 100): ";
    cin >> subject2;

    cout << "Enter marks for Subject 3 (out of 100): ";
    cin >> subject3;

    // Validate input
    if (subject1 < 0 || subject1 > 100 || subject2 < 0 || subject2 > 100 || subject3 < 0 || subject3 > 100) {
        cout << "Invalid marks entered. Please enter marks between 0 and 100." << endl;
        return 1; // Exit program with error code
    }

    // Calculate total marks and percentage
    float totalObtained = subject1 + subject2 + subject3;
    float percentage = (totalObtained / TOTAL_MARKS) * 100;

    // Calculate grade
    char grade = calculateGrade(percentage);

    // Output results
    cout << "\n=== Student Grade Report ===" << endl;
    cout << "Total Marks Obtained: " << totalObtained << " / " << TOTAL_MARKS << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
