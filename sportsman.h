#pragma once
#include<iostream>
#include<fstream>
using namespace std;

class sportsman
{
    string firstName;
    string secondName;
    string lastName;
    int achievementAmount;

    public:
    sportsman(int achievementAmount, string firstName, string secondName, string lastName);

    void recieveAchievment();

    void setFirstName(string firstName);
    void setSecondName(string secondName);
    void setLastName(string lastName);
    void setAchievmentAmount(int achievementAmount);

    string getFirstName();
    string getSecondName();
    string getLastName();
    int getAchievmentAmount();

    void exportToFile(ofstream &fout,string path);
    void exportToFile(string path);
};