//
//  Email.cpp
//  lab4
//
//  Created by Fredrik Sellgren on 2018-12-10.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include "Email.hpp"
Email::Email(std::string who, std::string date, std::string subject)
:who(who), date(date), subject(subject)
{
    
}
//Overload osteam oprerator for printing Emails.
std::ostream& operator<<(std::ostream& ostr, const Email& Emails)
{
    ostr << Emails.who << " " << Emails.date << " " << Emails.subject;
    return ostr;
}
