#ifndef BASEPLUS_H
#define BASEPLUS_H
#include "CommissionEmployee.h"
#include <string> // C++ standard string class
using std::string;

class BasePlusCommissionEmployee: public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string&, const string&,
        const string&, double = 0.0, double = 0.0, double = 0.0);
    
    void setBaseSalary(double); // set base salary
    double getBaseSalary() const; // return base salary

private:
    double baseSalary; // base salary
}; // end class BasePlusCommissionEmployee

#endif