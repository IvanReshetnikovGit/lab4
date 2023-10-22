#include "exportInfo.h"

void ExportSportsmanData(sportsman Sportsman,ofstream &fout)
{
    fout<<"First name: "<<Sportsman.getFirstName()<<endl;
    fout<<"Second name: "<<Sportsman.getSecondName()<<endl;
    fout<<"Last name: "<<Sportsman.getLastName()<<endl;
    fout<<"Amount of achievements: "<<Sportsman.getAchievmentAmount()<<endl;
}
void ExportLecturerData(lecturer Lecturer,ofstream &fout)
{
    ExportSportsmanData(Lecturer,fout);
    fout<<"Amount of scientific articles: "<<Lecturer.getAmountOfScientificArticles()<<endl;
}
void ExportTrainerData(trainer Trainer,ofstream &fout)
{
    ExportLecturerData(Trainer,fout);
    fout<<"Amount of students: "<<Trainer.getAmountOfStudents()<<endl;
}


void exportInfo(vector<sportsman> Sportsmans,vector<lecturer> Lecturers, vector<trainer> Trainers)
{
    string path = "Data.txt";
    ofstream fout;

    fout.open(path);
    if (!fout.is_open())
    {
        cout<<"\nError opening file"<<endl;
    }
    else
    {
        if (Sportsmans.size() > 0)
        {
            fout <<"Sportsmans:\n"<<endl;
            for (size_t i = 0; i < Sportsmans.size(); i++)
            {
                fout<<"Sportsman № "<<i+1<<endl;
                ExportSportsmanData(Sportsmans[i],fout);
                fout<<endl<<endl;
            }
        }
        else
        {
            fout<<"No Sportsmans"<<endl<<endl;
        }
        if (Lecturers.size() > 0)
        {
            fout <<"Lecturers:\n"<<endl;
            for (size_t i = 0; i < Lecturers.size(); i++)
            {
                fout<<"Lecturer № "<<i+1<<endl;
                ExportLecturerData(Lecturers[i],fout);
                fout<<endl<<endl;
            }
        }
        else
        {
            fout<<"No Lecturers"<<endl<<endl;
        }
        if (Trainers.size() > 0)
        {
            fout <<"Trainers:\n"<<endl;
            for (size_t i = 0; i < Trainers.size(); i++)
            {
                fout<<"Trainer № "<<i+1<<endl;
                ExportTrainerData(Trainers[i],fout);
                fout<<endl<<endl;
            }
        }
        else
        {
            fout<<"No Trainers"<<endl<<endl;
        }
    }
}