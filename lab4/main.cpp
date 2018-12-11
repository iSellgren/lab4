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
void Show(const T& show)
{
    std::cout << show << "\n";
}

int main() {
    MailBox mailBox(3);
    Email e2("Olle","2018-11-11","Svar");
    Email e3("Anna","2019-09-10","Jobb");
    Email e4("Olle","2018-11-11","Svar");
    
    mailBox.WriteMail({"Fredrik","2018-10-12","Tenta"});
    mailBox.WriteMail(e2);
    mailBox.WriteMail(e3);
    mailBox.WriteMail(e4);
    mailBox.SortWho();
    mailBox.ReadMail(3);
    
    std::for_each(mailBox.begin(), mailBox.end(),[](const auto&value)
    {
        Show(value);
    });
//    Show(*mailBox.begin());
    
    return 0;
}
