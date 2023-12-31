#include "trainer.h"

trainer::trainer(int amountOfStudents,int amountOfScientificArticles,int achievementAmount,string firstName, string secondName, string lastName) 
: lecturer(amountOfScientificArticles,achievementAmount, firstName, secondName, lastName)
{
    this->amountOfStudents = amountOfStudents;
}


void trainer::setAmountOfStudents(int amountOfStudents)
{
    this->amountOfStudents = amountOfStudents;
}


int trainer::getAmountOfStudents()
{
    return amountOfStudents;
}
void trainer::exportToFile(ofstream &fout,string path)
{
    lecturer::exportToFile(fout,path);
    fout.open(path);
    fout<<"Amount of students: "<<amountOfStudents<<endl;
    fout.close();
}
