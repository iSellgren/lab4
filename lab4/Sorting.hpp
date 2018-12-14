//
//  Sorting.hpp
//  lab4
//
//  Created by Fredrik Sellgren on 2018-12-14.
//  Copyright © 2018 Fredrik Sellgren. All rights reserved.
//

#ifndef Sorting_hpp
#define Sorting_hpp

#include <stdio.h>
#include "Email.hpp"
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
#endif /* Sort_hpp */
