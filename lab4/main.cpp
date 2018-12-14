//
//  main.cpp
//  lab4
//
//  Created by Fredrik Sellgren on 2018-12-10.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "MailBox.hpp"
#include "Email.hpp"
template <class T>
void Show(const T& mailBox)
{
    std::for_each(mailBox.begin(), mailBox.end(),[](const auto&value)
        {
            std::cout << value << '\n';
        });
    
}

int main() {
    MailBox mailBox(3);
    Email e2("Olle","2018-11-11","Svar");
    Email e3("Anna","2019-09-10","Jobb");
    Email e4("Olle","2018-11-11","Svar");
    mailBox[1] = {"Adam","2017-06-09","Lön"};
    
    mailBox.add({"Fredrik","2018-10-12","Tenta"});
    mailBox.add(e2);
    mailBox.add(e3);
    mailBox.add(e4);
    mailBox.SortWho();
    mailBox.ReadMail(3);
    std::cout << "----------------" << "\n";
    
    Show(mailBox);
    
    return 0;
}
