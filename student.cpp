#include <iostream>
#include <cstring>
#include "student.h"
using namespace std;
Student::Student() : num(0), sex(' ') {
    strcpy(name, "");
}
Student::Student(int n, const char* nm, char s) : num(n), sex(s) {
    strcpy(name, nm);
}
void Student::display()
{
    cout << "num:" << num <<endl;
    cout << "name:" << name <<endl;
    cout << "sex:" << sex << endl;
}