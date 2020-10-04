#ifndef STUDENTDB_H_INCLUDED
#define STUDENTDB_H_INCLUDED

#include<iostream>
#include<string>
#include<list>
#include<iterator>
#include"student.h"

using namespace std;
class studentdb:public student
{
public:
    studentdb();
    studentdb(string ,string , string , int );
    void read_data(list<student>&);
    void display(list<student>&);
};

#endif // STUDENTDB_H_INCLUDED
