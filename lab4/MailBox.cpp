//
//  MailBox.cpp
//  lab4
//
//  Created by Fredrik Sellgren on 2018-12-10.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#include "MailBox.hpp"
MailBox::MailBox(size_t size)
:Emails(size)
{
    
}

void MailBox::SortWho()
{
    std::sort(Emails.begin(), Emails.end(), CompWhoDateSubject());
}
void MailBox::SortDate()
{
    std::sort(Emails.begin(), Emails.end(), CompDateWhoSubject());
}
void MailBox::SortSubject()
{
    std::sort(Emails.begin(), Emails.end(), CompSubjectWhoDate());
}

void MailBox::WriteMail(const Email& Email)
{
    Emails.push_back(Email);
}
size_t MailBox::size()
{
    return Emails.size();
}
Email& MailBox::operator[](size_t index)
{
    return Emails[index];
}
void MailBox::ReadMail(size_t index)
{
    std::cout << Emails[index];
}
