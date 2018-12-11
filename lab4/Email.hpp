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

std::ostream& operator<<(std::ostream& ostr, const Email& Emails);


struct CompWhoDateSubject
{
    bool operator() (const Email &lhs, const Email &rhs) const
    {
        if(lhs.who < rhs.who)
            return true;
        else if (lhs.who == rhs.who)
        {
            if(lhs.date < rhs.date)
                return true;
            else if (lhs.date == rhs.date)
            {
                if(lhs.subject < rhs.subject)
                    return true;
            }
        }
        return false;
    }
};
struct CompDateWhoSubject
{
    bool operator() (const Email &lhs, const Email &rhs) const
    {
        if(lhs.date < rhs.date)
            return true;
        else if (lhs.date == rhs.date)
        {
            if(lhs.who < rhs.who)
                return true;
            else if (lhs.who == rhs.who)
            {
                if(lhs.subject < rhs.subject)
                    return true;
            }
        }
        return false;
    }
};
struct CompSubjectWhoDate
{
    bool operator() (const Email &lhs, const Email &rhs) const
    {
        if(lhs.subject < rhs.subject)
            return true;
        else if (lhs.subject == rhs.subject)
        {
            if(lhs.who < rhs.who)
                return true;
            else if (lhs.who == rhs.who)
            {
                if(lhs.date < rhs.date)
                    return true;
            }
        }
        return false;
    }
};


#endif /* Email_hpp */
