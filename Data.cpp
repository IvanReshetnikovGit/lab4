#include "Data.h"

int exceptionCheck(int &number)
{
    bool correctOption = false;
    while (correctOption == false) 
    {
        try 
        {
            correctOption = true;
            cin.clear();
            cin.ignore();  
            cin >> number;

            if (cin.fail()) 
            {
                correctOption = false;
                cin.clear();
                cin.ignore();
                throw runtime_error("Enter a number");
            }
        } 
        catch (const exception& e1) 
        {
            cerr << "\nError: " << e1.what() << endl;
        }
    }
    return number;
}

void sportsmanData(int &achievementAmount,string &firstName,string &secondName,string &lastName)
{
    cout<<"Enter first name: ";
    cin>>firstName;
    cout<<"Enter second name: ";
    cin>>secondName;
    cout<<"Enter last name: ";
    cin>>lastName;
    cout<<"Enter achievement amount: ";
    exceptionCheck(achievementAmount);
    
}
void lecturerData(int &amountOfScientificArticles,int &achievementAmount,string &firstName,string &secondName,string &lastName)
{
    sportsmanData(achievementAmount,firstName,secondName,lastName);
    cout<<"Enter amount of scientific articles: ";
    exceptionCheck(amountOfScientificArticles);
}

void trainerData(int &amountOfStudents,int &amountOfScientificArticles,int &achievementAmount,string &firstName,string &secondName,string &lastName)
{
    lecturerData(amountOfScientificArticles,achievementAmount,firstName,secondName,lastName);
    cout<<"Enter amount of students: ";
    exceptionCheck(amountOfStudents);
}

