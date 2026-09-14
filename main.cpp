// Andrew
// CIS 5 - Week 3 Homework - Types & Variables

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Andrew";
    int age = 17;
    double height_m = 1.75;
    char initial = 'A';
    bool student = true;
    const int CURRENT_YEAR = 2026;

    // credits is an int because you can't register for a fraction of a credit —
    // the number of credits is always a whole number
    int credits = 12;

    // gpa is a double because grade point averages need decimal precision
    // (e.g. 3.8), not just whole numbers
    double gpa = 3.8;

    // credits started at 12. I changed it to 13. The paragraph now says 13
    // because cout prints credits, not a leftover 12 in quotes.
    credits = 13;

    cout << "=== About me ===" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Credits: " << credits << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Year: " << CURRENT_YEAR << endl;
    cout << endl;

    cout << name << " is " << age << ", taking " << credits
         << " credits in " << CURRENT_YEAR << ", with a " << gpa
         << " GPA." << endl;

    // int age2 = "seventeen";   // would not compile — a string does not fit in an int
    // CURRENT_YEAR = 2027;      // would not compile — const cannot be assigned again

    return 0;
}
