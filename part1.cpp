#include <bits/stdc++.h>
using namespace std;

class person                                                
{
	public:
	string name;
	int id;
    int salary;

    static int count;

    person(){
        count++;
    }
	

    /* parameterized constructor */
	person(string n, int s,int sy,int sp){
        count++;
        this->name = n;
        this->id=s;
        this->salary = sy;
        this->secret_password = sp;
    }
     void printdetails1(){
        cout<<"this is person: "<<name<<" and id is: "<<id<<" and salary is: "<<salary<<endl;
    }

    void printdetails2(){
        cout<<"this is person: "<<name<<" and id is: "<<this->id<<" and salary is: "<<this->salary<<endl;
    }

    void getsecreat_password(){
        cout<<"The secret password is:  "<<this->secret_password<<endl;
    }

    private:
    int secret_password;
	
	
};

/* static variable in a class must be defined outside the the class */
int person::count = 0;


main() {
	
    person a;
    a.name = "kashi";
    a.id=342;
    a.salary=34424;
    a.printdetails1();


    person b("priyanshu",94,999999,839034);
    b.printdetails2();
    b.getsecreat_password();
    

    person c("riya",95,99999,83934);
    c.printdetails2();
    c.getsecreat_password();
	
    cout<<"count is: "<<c.count;
}
