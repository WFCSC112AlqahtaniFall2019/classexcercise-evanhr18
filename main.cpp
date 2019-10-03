#include <iostream>
using namespace std;

class Faculty{
public:
    string name;
    string id;
    string address;
    string DoB;
    string degree;
//getter and setter for salary
    double getSalary() {return salary;}
    void setSalary(double salary);
/* 1) create a getter and setter for each variable in the class*/
    string getName() {return name;}
    void setName(string name);
    string getID() {return id;}
    void setID(string id);
    string getAddress() {return address;}
    void setAddress(string address);
    string getDoB() {return DoB;}
    void setDoB(string DoB);
    string getDegree() {return degree;}
    void setDegree(string degree);
    double getSSN() {return SSN;}
    void setSSN(double SSN);


private:
    double salary;
    double SSN;
};

void Faculty::setSalary(double s){
    salary=s;
}

void Faculty::setName(string n) {
    name = n;
}

void Faculty::setID(string i) {
    id = i;
}

void Faculty::setAddress(string a) {address = a;}
void Faculty::setDoB(string d) {DoB = d;}
void Faculty::setDegree(string deg) {degree = deg;}
void Faculty::setSSN(double ss) {
    SSN = ss;
}

/* 2) implement each setter and getter */

int main() {
    Faculty prof;
    string temp;
    double x;

/* 3) use the implemented methods to fill prof' info and print them out */
    cin >> temp;
    prof.setAddress(temp);
    cin >> temp;
    prof.setDegree(temp);
    cin >> temp;
    prof.setDoB(temp);
    cin >> temp;
    prof.setID(temp);
    cin >> temp;
    prof.setName(temp);
    cin >> x;
    prof.setSalary(x);
    cin >> x;
    prof.setSSN(x);

    cout << prof.getName() << " " << prof.getAddress() << " " << prof.getDegree() << " " << prof.getDoB() << " " << prof.getID() << " " << prof.getSalary() << " " << prof.getSSN();

    return 0;
}
