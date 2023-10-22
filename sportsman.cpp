#include "sportsman.h"

sportsman::sportsman(int achievementAmount, string firstName, string secondName, string lastName) : firstName(firstName), secondName(secondName), lastName(lastName),achievementAmount(achievementAmount)
{
    
}


void sportsman::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void sportsman::setSecondName(string secondName)
{
    this->secondName = secondName;
}

void sportsman::setLastName(string lastName)
{
    this-> lastName = lastName;
}

void sportsman::setAchievmentAmount(int achievementAmount)
{
    this->achievementAmount = achievementAmount;
}


string sportsman::getFirstName()
{
    return firstName;
}
string sportsman::getSecondName()
{
    return secondName;
}
string sportsman::getLastName()
{
    return lastName;
}
int sportsman::getAchievmentAmount()
{
    return achievementAmount;
}
