#include <iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    string address;
    public:
    void input()
    {
        cout<<"Enter your name : ";
        cin>>name;
        cout<<"Enter your age : ";
        cin>>age;
        cout<<"Enter your address : ";
        cin>>address;
    }
    void output()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Address : "<<address<<endl;
    }

};
int main()
{
    person person1,person2,person3;
    person1.input();
    person1.output();
    person2.input();
    person2.output();
    person3.input();
    person3.output();

}