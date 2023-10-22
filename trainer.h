#pragma once
#include "lecturer.h"

class trainer : public lecturer
{
    int amountOfStudents;

    public:

    trainer(int amountOfStudents,int amountOfScientificArticles,int achievementAmount,string firstName, string secondName, string lastName);

    void setAmountOfStudents(int amountOfStudents);
    
    int getAmountOfStudents();
};