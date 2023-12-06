//

//  main.cpp
//  example project
//
//  Created by Juicy Ankles on 11/30/22.
//

#include <iomanip>
#include <iostream>
using namespace std;

void displayMainMenu()
{
    cout << "== Main Menu  ==" << endl
        << " |1) view voltage| " << endl
        << " |2) View lumes  |" << endl
        << " |3) Change Modes|"<< endl
        << " |-1) Quit       |" << endl
    << "Choose an Option: ";
}

void ManageVoltzMenu()
{
    int subOption = 0;

    while (subOption != -1)
    {int timeOn[22],i,sum=0;
        for(i=0;i<21;i++)
        {sum=sum+timeOn[21];
}
        cout<<sum << " hours left"<<endl;
        cout << "== View voltage ==" << endl;
        cout << " |1) views hours         | " << endl
             << " |2) lumes               |"<< endl
             << " |3) Modes               | "<< endl
             << " |-1) Return to Main Menu|" << endl
             << " Enter Option: ";
        
        cin >> subOption;

        switch (subOption)
        {
            case 1:
                cout<<"==daily mode=="<< endl;
                       system ("pause");
                       break;
            case 2:
            cout<<"==demo mode=="<<endl;
                system("pause");
            case 3:
                cout << "==Modes=="<<endl;
                cout<<" ==Daily==OFF"<<endl;
                system("pause");
            case 4:
            cout<<"==demo mode== ON"<<endl;
                system("pause");
        case -1:
            cout << "Returning to Main Menu..." << endl;
            break;
        default:
            cout << "====> Error - Invalid Option!" << endl;
            system("pause");
        }

        system("CLS");
    }
    system("pause");
}
void TimeOnMenu()
{int subOption=0;
    while (subOption!=-1)
    {int number = 0;
        int lumens[4] = {15, 65, 200, 400};
        
        int battery[4] = {15, 65, 200, 400};
        
        cout << lumens[number] << endl;
        
        cout << battery[number];}}
void viewVoltage()
{
    cout << "== View Tasks ==" << endl;
    
}

int main()
{
    int command = 0;

    while (command != -1)
    {
        displayMainMenu();
        cin >> command;
        system("-");

        if (command == 1)
        {
            ManageVoltzMenu();
        }
        else if (command == 2)
        {
            viewVoltage();
        }
        else if(command== 3){
            TimeOnMenu();
        }
        else if (command == -1) {
            cout << "Exiting Program" << endl;
            system("pause");
        }
        else {
            cout << "======> Error Invalid Option!" << endl;
            system("pause"); // there was a syntax error in this line and i added a ; 
        }

        system("CLS"); // alos another syntax error which i added a ; 
    }


    return 0;
}
    
   
        


