#include<bits/stdc++.h>
using namespace std;
class Citizen
{
    string citizenname;
    int phone;
    string address;
    int date;
    int citizenID;
    static int citizenCount;
    public:
    Citizen()
    {
        citizenID=citizenCount++;
    }
    Citizen(string name,int ph,string add,int d)
    {
        citizenname=name;
        phone=ph;
        address=add;
        date=d;
    }
    void adduser()
    {
        cout<<"New user added successfully"<<endl;
    }
    void modifyuser()
    {
        cout<<"User details modified successfully"<<endl;
    }
    void display()
    {
        cout<<"Citizen ID: "<<citizenID<<endl;
        cout<<"Citizen Name: "<<citizenname<<endl;
        cout<<"Phone Number: "<<phone<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Date of Grievance: "<<date<<endl;
    }
};

int main()
{
    cout<<"Welcome to the Public Grievance Portal"<<endl;
    cout<<"choose a process"<<endl;
    cout<<"Add a user - 1\nModify user details - 2\nSearch user - 3\nDisplay - 4"<<endl;
    int choice;
    string name,address;
    int ph,d;
    Citizen c1(name,ph,address,d);
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            
            cout<<"Enter your name: ";
            cin>>name;
            cout<<"Enter your phone number: ";
            cin>>ph;
            cout<<"Enter your address: ";
            cin>>address;
            cout<<"Enter the date of grievance: ";
            cin>>d;
            c1.adduser();
            break;
        }
        case 4:
        {
            c1.display();
            break;
        }
    }

    
    
    return 0;
}