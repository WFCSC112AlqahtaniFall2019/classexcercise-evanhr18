//
// Created by Henry Evans on 10/3/19.
//

#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H
#include <iostream>
using namespace std;
class Faculty{
public:
    Faculty();
    Faculty(string n, string i, double s, string a, string d, string deg, double ss);
    string name;
    string id;
    string address;
    string DoB;
    string degree;
//getter and setter for salary


private:
    double salary;
    double SSN;
};
#endif //CLASSEXCERCISE_FACULTY_H
