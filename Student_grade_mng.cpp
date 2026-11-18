#include <iostream>
#include <string>
using namespace std;

double calculateAverage(double math, double cpp, double english) {
    return (math + cpp + english) / 3;
}

char calculateGrade(double average) {
    if (average >= 90) return 'A';
    else if (average >= 80) return 'B';
    else if (average >= 70) return 'C';
    else if (average >= 60) return 'D';
    else return 'F';
}

void displayResult(string name, double math, double cpp, double english,
                   double average, char grade) {
    cout << "-----------------------------" << endl;
    cout << "           Result            " << endl;
    cout << "-----------------------------" << endl;
    cout << "Student name: " << name << endl;
    cout << "Math score:   " << math << endl;
    cout << "C++ score:    " << cpp << endl;
    cout << "English score:" << english << endl;
    cout << "Average:      " << average << endl;
    cout << "Grade:        " << grade << endl;
}

int main() {
    cout << "===========================================" << endl;
    cout << "         Student Grade Management          " << endl;
    cout << "===========================================" << endl;

    string studentName;
    double math, english, cpp;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter Math score: ";
    cin >> math;
    cout << "Enter English score: ";
    cin >> english;
    cout << "Enter C++ programming score: ";
    cin >> cpp;

    double average = calculateAverage(math, cpp, english);
    char grade = calculateGrade(average);

    displayResult(studentName, math, cpp, english, average, grade);

    return 0;
}
 