#include "lecturer.h"

lecturer::lecturer(int amountOfScientificArticles,int achievementAmount,string firstName, string secondName, string lastName) 
: sportsman(achievementAmount,firstName, secondName, lastName)
{
    this->amountOfScientificArticles = amountOfScientificArticles;
}

void lecturer::setAmountOfScientificArticles(int amountOfScientificArticles)
{
    this->amountOfScientificArticles = amountOfScientificArticles;
}


int lecturer::getAmountOfScientificArticles()
{
    return amountOfScientificArticles;
}
