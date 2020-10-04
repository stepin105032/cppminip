#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include<iostream>
#include<string>
using namespace std;
class student
{

public:
    string school_name;
    string location;
    string name;
    int standard;
    student()
    {

    }
    student(string A,string B, string C, int D)
    :school_name(A),location(B),name(C),standard(D)
    {

    }
};


#endif // STUDENT_H_INCLUDED
