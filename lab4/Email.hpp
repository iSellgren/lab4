//
//  Email.hpp
//  lab4
//
//  Created by Fredrik Sellgren on 2018-12-10.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Email_hpp
#define Email_hpp

#include <stdio.h>
#include <string>
#include <iostream>

struct Email{
    Email(std::string who = "", std::string date = "", std::string subject = "");

    void print() const;
    friend std::ostream& operator<<(std::ostream& ostr, const Email& Emails);
    
    
    friend struct CompWhoDateSubject;
    friend struct CompDateWhoSubject;
    friend struct CompSubjectWhoDate;
    
private:
    std::string who;
    std::string date;
    std::string subject;
};

#endif /* Email_hpp */
