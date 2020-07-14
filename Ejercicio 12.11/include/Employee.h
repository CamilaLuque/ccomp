 // Fig. 12.9: Employee.h
 // Employee abstract base class.
 #ifndef EMPLOYEE_H
 #define EMPLOYEE_H

 #include <string> // C++ standard string class
 #include "Date.h"

 using namespace std;

 class Employee {
 public:
 Employee(const string&, const string&, const string &, const Date&);
 virtual ~Employee() = default; // compiler generates virtual destructor

 void setFirstName(const string&); // set first name
 string getFirstName() const; // return first name

 void setLastName(const string&); // set last name
 string getLastName() const; // return last name

 void setSocialSecurityNumber(const string&); // set SSN
 string getSocialSecurityNumber() const; // return SSN
 // pure virtual function makes Employee an abstract base class
 virtual double earnings() const = 0; // pure virtual
 void setBirthDate (Date& cumpleanios);
 Date getBirthDate();
 virtual string toString() const; // virtual

 private:
 string firstName;
 string lastName;
 string socialSecurityNumber;
 Date birthDate;
 };
#endif //
