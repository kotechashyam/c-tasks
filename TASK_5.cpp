#include<iostream>
using namespace std;

class login
{
    private:
     string uid,pass;
    public:
        void log(string d,string e)
        {
            cout<<"Enter mobile no:";
            cin>>uid;
            cout<<"Enter Password:";
            cin>>pass;
            if(uid==d && pass==e)
            {
                cout<<"\nYou have loginned successfully";
            }
            else
            {
                cout<<"\nIncorrect id or password";
            }
        }
};

int main()
{
    login it;
    string a="0123456789",b="1234";
    int ab;
    cout<<"1.To view the id and password \n";
    cout<<"2.Exit";
    cout<<"Choose your choice:";
    cin>>ab;
    switch(ab)
    {
        case 1:
            cout<<"ID is "<<a<<endl;
            cout<<"Password is "<<b<<endl;
            break;
        case 2:
            break;
    }
    it.log(a,b);
}