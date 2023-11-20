#include <stdexcept>
#include "DisplayData.h"
#include "Data.h"
#include "exportInfo.h"
int main()
{
    bool stop = false;

    vector<sportsman> Sportsmans;
    vector<lecturer> Lecturers;
    vector<trainer> Trainers;

    while(stop != true)
    {
        int choice;
        cout<<"1.Add sportsman"<<endl;
        cout<<"2.Add lecturer"<<endl;
        cout<<"3.Add trainer"<<endl;
        cout<<"4.Display all sportsmans info"<<endl;
        cout<<"5.Display all lecturers info"<<endl;
        cout<<"6.Display all trainers info"<<endl;
        cout<<"7.Export data to file"<<endl;
        cout<<"8.Exit"<<endl;

        try
        {
            cin.clear();
            cin >> choice;

            if (cin.fail()) 
            {
                cin.clear(); 
                cin.ignore();
                throw runtime_error("Choose option between 1 and 8.\n");
            }
        } 
        catch (const exception& e) 
        {
            std::cerr << "\nError: " << e.what() << std::endl;
            continue;
        }

        if(choice == 1)
        {
            string firstName,secondName,lastName;
            int achievementAmount;

            sportsmanData(achievementAmount,firstName,secondName,lastName);
            cout<<"\n";
            sportsman tmpS(achievementAmount,firstName,secondName,lastName);
            Sportsmans.push_back(tmpS);
        }
        else if(choice == 2)
        {
            string firstName,secondName,lastName;
            int achievementAmount, amountOfScientificArticles;

            lecturerData(amountOfScientificArticles, achievementAmount,firstName,secondName,lastName);
            cout<<"\n";
            lecturer tmpL(amountOfScientificArticles, achievementAmount,firstName,secondName,lastName);
            Lecturers.push_back(tmpL);
        }
        else if(choice == 3)
        {
            string firstName,secondName,lastName;
            int amountOfStudents, amountOfScientificArticles, achievementAmount;

            trainerData(amountOfStudents, amountOfScientificArticles, achievementAmount,firstName,secondName,lastName);
            cout<<"\n";
            trainer tmpT(amountOfStudents, amountOfScientificArticles, achievementAmount,firstName,secondName,lastName);
            Trainers.push_back(tmpT);
        }
        else if(choice == 4)
        {
            if (Sportsmans.size() > 0)
            {
                for (size_t i = 0; i < Sportsmans.size(); i++)
                {
                    cout<<endl;
                    DisplaySportsmanData(Sportsmans[i]);
                    cout<<endl;
                }
            }
            else
                cout<<"\nNo sportsmans\n"<<endl;         
        }
        else if(choice == 5)
        {
            if (Lecturers.size() > 0)
            {
                for (size_t i = 0; i < Lecturers.size(); i++)
                {
                    cout<<endl;
                    DisplayLecturerData(Lecturers[i]);
                    cout<<endl;
                }
            }
            else
                cout<<"\nNo lecturers\n"<<endl;         
        }
        else if(choice == 6)
        {
            if (Trainers.size() > 0)
            {
                for (size_t i = 0; i < Trainers.size(); i++)
                {
                    cout<<endl;
                    DisplayTrainerData(Trainers[i]);
                    cout<<endl;
                }
            }
            else
                cout<<"\nNo Trainers\n"<<endl;         
        }
        else if(choice == 7)
        {
            // exportInfo(Sportsmans,Lecturers,Trainers);
            ofstream fout;
            string path = "Data.txt";
            for (size_t i = 0; i < Trainers.size(); i++)
            {
                Trainers[i].exportToFile(fout,path);
            }
            
        }
        else if(choice == 8)
            break;
        else
        {
            cout<<"\nEnter correct option\n"<<endl;
        }
    }

    return 0;
}
