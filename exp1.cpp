#include <iostream>
using namespace std;
class Student 
{
private:
    int rollNo;
    string name;
public:
    Student(int r,string n)
    {
        rollNo = r;
        name = n;
        cout << "Student object created" << endl;
    }
    void display() {
       cout << rollNo << endl;
       cout <<name<<endl;
       cout <<"Student Object created"<<endl; 
    }
    ~Student()
    {
       cout << "Student object destroyed" <<endl;
    }
};
int main()
{
    int rollNo; string name;
    cout << "enter your rollno:";
    cin >> name;
    cout << "enter your name";
    cin >> name;
    Student S1(160,"lalitha");
    Student S2(rollNo,name);
    S2.display();
    S1.display();
    return 0;
}