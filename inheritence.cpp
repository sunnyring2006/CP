#include<bits/stdc++.h>
using namespace std;

class person{
public:
    string name;
    int age;

    person(string name,int age){
        this->name=name;
        this->age;
    }
};

class student:public person{
public:
  int rollno;

  student(){
    cout<<"child constructor"<<endl;
  }

  void getInfo(){
    cout<<"name:"<<name<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"rollno:"<<rollno<<endl;
  }
};

int  main(){
    student s1;
    s1.name="rahul kumar";
    s1.age=20;
    s1.rollno=1234;

    s1.getInfo();
    return 0;
}