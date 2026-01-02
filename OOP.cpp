#include<iostream>
using namespace std;

class student{
public:
string name;
double* cgpaptr;

    student(string name,double cgpa){
        this->name=name;
        cgpaptr=new double;
        *cgpaptr=cgpa;
    }

    student(student &obj){
        this->name=obj.name;
        this->*cgpaptr=*obj.cgpaptr;
    }

    //Destuctor
    ~student(){
         cout<<<"HI,I am a destrcuctor i delete everything"<<endl;
         delete cgpaptr; //memory leak
    }

    void getInfo(){
        cout<<"name:"<<name<<endl;
        cout<<"cgpa:"<<*cgpaptr<<endl;
    }

};

int main(){
    student s1("KImaya Patil",8.68);
    student s2(s1);

    s1.getInfo();
    *(s2.cgpaptr)=9.2;
    s1.getInfo();
    return 0;
}