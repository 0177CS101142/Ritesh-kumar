#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void login();
void registration();
void forgot();
int main()
{
    int c;
    cout<<"\t\t\t___________________________________________________________\n\n\n";
    cout<<"\t\t\t            WELCOME TO THE LOGIN PAGE                       \n\n\n";
    cout<<"\t\t\t                          MENU                               \n\n\n";
    cout<<"                                                                    \n\n\n";
    cout<<"\t| press 1 to LOGIN              |"<<endl;
    cout<<"\t| press 2 to REGISTER           |"<<endl;
    cout<<"\t| press 3 to FORGOT PASSWORD    |"<<endl;
    cout<<"\t| press 4 to EXIT               |"<<endl;

    cout<<"\n\t\t\t please Enter your choice : ";
    cin>>c;
    cout<<endl;

    switch(c)
    {
    case 1:
        login();
        break;

    case 2:
        registration();
        break;

    case 3:
        forgot();
        break;

    case 4:
        cout<<"\t\t\t THANK YOU!  \n\n";
        break;

    default:
        system("cls");
        cout<<"\t\t\t please select from the options given above \n"<<endl;
        main();
    }
    }

    void login()
    {
        int  count;
        string userId,password,id,pass;
        system("cls");
        cout<<"\t\t\t please Enter the userName and password :"<<endl;
        cout<<"\t\t\t USETNAME :";
        cin>>userId;
        cout<<"\t\t\t PASSWORD :";
        cin>>password;

        ifstream input("records.txt");

        while(input>>id>>pass)
        {
            if(id==userId && pass==password)
            {
                count=1;
                system("cls");
            }
        }
        input.close();

        if(count==1)
        {
            cout<<userId<<"\n YOUR LOGIN IS SUCCESSFULL! \n";
            main();
        }
        else{
            cout<<"\n LOGIN ERROR \N PLEASE CHECK YOUR USERNAME AND PASSWORD \n";
            main();
        }
    }

    void registration()
    {
        string ruserId,rpassword,rid,rpass;
        system("cls");
        cout<<"\t\t\t Enter the USERNAME : ";
        cin>>ruserId;
        cout<<"\t\t\t Enter the PASSWORD : ";
        cin>>rpassword;

        ofstream f1("records.txt", ios::app);
        f1<<ruserId<<' '<<rpassword<<endl;
        system("cls");
        cout<<"\n\t\t\t Registration is SUCCESSFULL! \n";
        main();
    }

    void forgot()
    {
        int options;
        system("cls");
        cout<<"\t\t\t you forgot the password? No worries \n";
        cout<<"\t\t\t press 1 to search your id by userName \n";
        cout<<"\t\t\t press 2 to go back to the main menu \n";

        cout<<"\t\t\t Enter your choice : ";
        cin>>options;

        switch(options)
        {

        case 1:{
            int count=0;
            string suserId,sId,spass;
            cout<<"\n\t\t\t Enter the userName which your remembered : ";;
            cin>>suserId;

            ifstream f2("records.txt");
            while(f2>>sId>>spass)
            {
                if(sId==suserId)
                {
                    count=1;
                }
            }
            f2.close();
            if(count==1)
            {
                cout<<"\n\n your Account is found! \n";
                cout<<"\n\n your Password id :"<<spass;
                main();
            }
            else{
                cout<<"\n\t sorry! your Account is not found! \n";
                main();
            }
            break;
        }

        case 2:
            {
                main();
            }
        default:
            cout<<"\t\t\t Wrong choice ! please try again "<<endl;
            forgot();
    }
    }

