#include "Student.h"
#include <iostream>
#include"cstring"
using namespace std;


// Assign studentId and name
void Student::assignDetails(int stid, char sname[]) {
   studentId= stid;
   strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {
  std::cout<<"Student ID :"<<studentId;
  std::cout<<endl;
  std::cout<<"Student name :"<<name<<endl;
}
