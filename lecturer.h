#pragma once
#include "sportsman.h"
class lecturer : public sportsman
{
    string title;
    int amountOfScientificArticles;

    public:
    lecturer(int amountOfScientificArticles,int achievementAmount,string firstName, string secondName, string lastName);

    void setAmountOfScientificArticles(int amountOfScientificArticles);

    int getAmountOfScientificArticles();

    void exportToFile(ofstream &fout, string path);
};