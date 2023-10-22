#include "DisplayData.h"

void DisplaySportsmanData(sportsman Sportsman)
{
    cout<<"First name: "<<Sportsman.getFirstName()<<endl;
    cout<<"Second name: "<<Sportsman.getSecondName()<<endl;
    cout<<"Last name: "<<Sportsman.getLastName()<<endl;
    cout<<"Amount of achievements: "<<Sportsman.getAchievmentAmount()<<endl;
}
void DisplayLecturerData(lecturer Lecturer)
{
    DisplaySportsmanData(Lecturer);
    cout<<"Amount of scientific articles: "<<Lecturer.getAmountOfScientificArticles()<<endl;
}
void DisplayTrainerData(trainer Trainer)
{
    DisplayLecturerData(Trainer);
    cout<<"Amount of students: "<<Trainer.getAmountOfStudents()<<endl;
}