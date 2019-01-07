//
//  main.cpp
//  euler4
//
//  Created by dgomez on 4/12/18.
//  Copyright © 2018 dgomez. All rights reserved.
//

#include <iostream>

class Employee{
public:
    Employee();
    Employee(std::string name,std::string ssn);
    std::string get_name() const;
    std::string get_ssn() const;
    double get_net_pay() const;
    void set_name(std::string newName);
    void set_netpay(std::string newSSN);
    void printCheck() const;
private:
    std::string name,ssn;
    double netPay;
    
};
