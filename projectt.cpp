#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;
  
  class student{
    private:
    string Rollno,Name,Grade;
    public:
    student():Rollno(""),Name(""),Grade(""){}
   
setRollno(string rollno){
Rollno = rollno;
    } 
      setName(string name){
Name = name;
    } 
      setGrade(string grade){
Grade = grade;
    } 
    string getRollno(){
        return Rollno;
    }
     string getName(){
        return Name;
    }
     string getGrade(){
        return Grade;
    }
  };
int main(){
    student s;

    bool exit=false;
    while(!exit){
        system("cls");
        int val;
        cout<<"\t  Welcome to student report card system"<<endl;
        cout<<"\t*****************************************"<<endl;
        cout<<"\t1.Report card"<<endl;
cout<<"\t2.Exit"<<endl;
cout<<"\tenter choice:"<<endl;
cin>>val;
if (val==1)
{
    system("cls");
    string rollno,name;
    cout<<"\tenter rollno of student:";
    cin>>rollno;
    s.setRollno(rollno);

     cout<<"\tenter name of student:";
    cin>>name;
    s.setName(name);

int physics,computer,math,total,avg;
cout<<"\t enter physics mark of the student:";
cin>>physics;

cout<<"\t enter computer mark of the student:";
cin>>computer;
cout<<"\t enter math mark of the student:";
cin>>math;
system("cls");
cout<<"\tstudent report card"<<endl;
cout<<"\t**************"<<endl;
total=physics+computer+math;
cout<<"total marks of student:"<<total<<endl;
avg=total/3;
cout<<"\taverage marks of student:"<<avg<<endl;

if(avg >=90 && avg<=100){
    s.setGrade("A");
}
if(avg >=90 && avg<=100){
    s.setGrade("B");
}
if(avg >=80 && avg<=90){
    s.setGrade("C");
}if(avg >=70 && avg<=80){
    s.setGrade("D");
}
if(avg >=60 && avg<=70){
    s.setGrade("E");
}
cout<<"\tgrade fo student:"<<s.getGrade()<<endl;

ofstream out("D:/student.txt",ios::app);//ios::app so that previous student report card will get removed and another student report card will be added
out<<"\t"<<s.getRollno()<<":"<<s.getName()<<":"<<s.getGrade()<<endl<<endl;
out.close();
cout<<"\treport card is saved to file"<<endl;
Sleep(1000);
} 
else if(val==2)
system("cls");
exit =true;
cout<<"\tgood luck"<<endl;
Sleep(3000);
   }

 
 return 0;
}