#include <iostream>
#include <string>
using namespace std;

int main()
{
    char again='y';
    while(again=='y'){
    string name;
    int age;
    int option;

    // Name
    cout << "What Is Your Name? \n";
    cin >> name;

    cout << "Welcome " << name << "\n";

    // Chess option
    cout << "Select An Option(Number):- "
         << "1) RAPID CHESS(10+0) ; "
         << "2) BLITZ CHESS(3+0); "
         << "3) BULLET CHESS(1+0) \n";

    cin >> option;

    // Option 1 - Rapid Chess
    if(option == 1)
    {
        cout << name << " You Have Opted For Rapid Chess. \n";
    }

    // Option 2 - Blitz Chess
    else if(option == 2)
    {
        cout << name << " You Have Opted For Blitz Chess. \n";
    }

    // Option 3 - Bullet Chess
    else if(option == 3)
    {
        cout << name << " You Have Opted For Bullet Chess. \n";
    }

    // Invalid option
    else
    {
        cout << name << " Please Select A Valid Option. \n";
    }

    // Age
    cout << "What Is Your Age? \n";
    cin >> age;

    // Under 14 category
    if(age <= 13)
    {
        cout << name << " You Will Play Under 14. \n";
    }

    // Under 17 category
    else if(age < 18)
    {
        cout << name << " You Will Play Under 17! \n";
    }

    // Open category
    else
    {
        cout << name << " You Will Play Open Category. \n";
    }
        cout<<"Do you want to try again? (y/n): ";
    cin>>again;

    if(again=='y'){
    cout<<"Sure, you can try again.\n";
}
    else{
    cout<<"Okay, you can try again later. Thank you.\n";
}
    }

    return 0;
}
