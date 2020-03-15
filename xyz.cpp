#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Student
{
    int rollno;
    char name[20];
    char course[20];

    public:
      Student()
      {
          rollno=101;
          strcpy(name,"Ram");
          strcpy(course,"Civil");
      }

      Student(int r, char n[], char c[]="Computer")
      {
          rollno=r;
          strcpy(name, n);
          strcpy(course, c);
      }

      void showdata()
      {   
        cout<<"\nRollno="<<rollno;
        cout<<"\nName="<<name;
        cout<<"\nCourse="<<course;
      }
};

int main()
{
    Student s1;
    Student s2(105, "Sita");

    s1.showdata();
    s2.showdata();

    getch();
    return 0;

}
