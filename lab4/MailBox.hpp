//
//  MailBox.hpp
//  lab4
//
//  Created by Fredrik Sellgren on 2018-12-10.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef MailBox_hpp
#define MailBox_hpp

#include <stdio.h>
#include <vector>
#include "Email.hpp"
#include <algorithm>
class MailBox
{
public:
    typedef std::vector<Email>::const_iterator const_iterator;
    const_iterator begin() const {return Emails.begin();}
    const_iterator end() const {return Emails.end();}
    
    MailBox(size_t size = 0);
    
    void add(const Email& Email);
    size_t size();
    void SortWho();
    void SortDate();
    void SortSubject();
    
    void ReadMail(size_t index);
    void WriteMail(const Email& Email);
    
    Email& operator[](size_t index);
    
    
    
private:
    
    std::vector<Email> Emails;
};

#endif /* MailBox_hpp */
