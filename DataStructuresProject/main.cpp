#include <iostream>
using namespace std;

void mainMenu()
{
    cout<<"Main Menu"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"1. Input File"<<endl;//maybe later accept multiple types of files by going to another menu to ask for type of file
    cout<<"2. Search File"<<endl;//gets data on a part and prints it
    cout<<"3. Start Comparing P&ID"<<endl;
    cout<<"4. Delete"<<endl;
    cout<<"Q. Quit"<<endl;
}

void searchMenuDisplay()
{
    cout<<"Search Menu"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"1.search by tag"<<endl;
    cout<<"2.search by P&ID"<<endl; //prints all parts on page
    cout<<"3.search by vendor"<<endl;
    cout<<"4.search by pipeline"<<endl;
    cout<<"E.Exit Menu"<<endl;
}
void searchMenu()
{
    string userInput = "";
    while (userInput!= "E" && userInput != "e")
    {
        searchMenuDisplay();
        cin>>userInput;
        if(userInput == "1")
        {
            cout<<"Please enter a Tag"<<endl;
        }
        else if(userInput == "2")
        {
            cout<<"Please enter a P&ID"<<endl;
        }
        else if(userInput == "3")
        {
            cout<<"Please enter a vendor"<<endl;
        }
        else if(userInput == "4")
        {
            cout<<"Please enter a Pipeline"<<endl;
        }
        else if(userInput != "E")
        {
            cout<<"Not a valid input please try again"<<endl;
        }
    }

}

void deleteMenuDisplay()
{
    cout<<"Delete Menu"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"1.Delete Node"<<endl;//make sure to delete it from both the pageHash and mainHash
    cout<<"2.Delete P&ID"<<endl;//delete Page
    cout<<"3.Delete All"<<endl;//clears all data to free up memory;
    cout<<"E.Exit Menu"<<endl;
}
void deleteMenu()
{
    string userInput = "";
    while (userInput!= "E" && userInput != "e")
    {
        deleteMenuDisplay();
        cin>>userInput;
        if(userInput == "1")
        {
            cout<<"Please enter a Tag"<<endl;
        }
        else if(userInput == "2")
        {
            cout<<"Please enter a P&ID"<<endl;
        }
        else if(userInput == "3")
        {
            cout<<"Clearing memory"<<endl;
        }
        else if(userInput != "E")
        {
            cout<<"Not a valid input please try again"<<endl;
        }
    }
}


int main() {
    string userInput="";
    while (userInput!= "Q" && userInput != "q")
    {
        mainMenu();
        cin>>userInput;
        if(userInput == "1")
        {
            cout<<"Inputting file"<<endl;
            cout<<"Please enter file name"<<endl;
            cin>>userInput;
        }
        else if (userInput=="2")
        {
            searchMenu();
        }
        else if (userInput=="3")
        {
            cout<<"Start comparing P&ID"<<endl;
            //starts comparing P&ID to Instrument Index
        }
        else if(userInput == "4")
        {
            deleteMenu();
        }
        else if(userInput != "Q")
        {
            cout<<"Not a valid input, Please select the number that goes with the option"<<endl;
        }
    }
    return 0;
}