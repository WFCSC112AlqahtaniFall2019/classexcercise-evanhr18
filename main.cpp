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

Faculty::Faculty(string n, string i, double s, string a, string d, string deg, double ss) {
salary = s;
id = i;
name = n;
address = a;
DoB = d;
degree = deg;
SSN = ss;
}

/* 2) implement each setter and getter */

int main() {
    Faculty prof ("Henry", "2345", 150000, "1472 Brookwood Rd", "April 14", "Bachelor's", 432345678);

/* 3) use the implemented methods to fill prof' info and print them out */

    return 0;
}
