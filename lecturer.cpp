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

void lecturer::exportToFile(ofstream &fout,string path)
{
    sportsman::exportToFile(fout,path);
    fout.open(path);
    fout<<"Amount of scientific articles: "<<amountOfScientificArticles<<endl;
    fout.close();
}