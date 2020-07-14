// Fig. 12.11: SalariedEmployee.h
// SalariedEmployee class derived from Employee.
#ifndef SALARIED_H
#define SALARIED_H

#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class SalariedEmployee {
    public:
        double monthlySalary;

        SalariedEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0);
        // virtual destructor

        void setMonthlySalary(double); // set weekly salary
        double getMonthlySalary() const; // return weekly salary

        // keyword virtual signals intent to override
        virtual double earnings() const ; // calculate earnings
        virtual std::string toString() const ; // string representation

         // salary per week
};

#endif // SALARIED_H
