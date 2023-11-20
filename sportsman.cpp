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

void sportsman::exportToFile(ofstream &fout, string path)
{
    fout.open(path);
    fout<<"First name: "<<firstName<<endl;
    fout<<"Second name: "<<secondName<<endl;
    fout<<"Last name: "<<lastName<<endl;
    fout<<"Amount of achievements: "<<achievementAmount<<endl;
    fout.close();
}
void sportsman::exportToFile(string path)
{
    ofstream fout; 
    exportToFile(fout, path);
}