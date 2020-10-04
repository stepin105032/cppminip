#include<iostream>
#include<string>
#include<list>
#include<iterator>
#include"studentdb.h"
#include <bits/stdc++.h>
#include<sstream>
#include"student.h"

studentdb::studentdb():student()
{

}
studentdb::studentdb(string A,string B, string C, int D):student(A,B,C,D)
{

}

void studentdb::read_data(list<student> &thelist)
{
    string S, T, A,B,C,D,E,F;

    fstream fin;
    fin.open("Sample100.csv", ios::in);
    while( getline(fin, S))
    {
        stringstream X(S);

        getline(X, A, ',');
        getline(X, B, ',');
        getline(X, C, ',');
        getline(X, D, ',');
        getline(X, E, ',');

        student temp(A,B,C,stoi(E));

        thelist.push_back(temp);


    }
}

 void studentdb::display(list<student>&thelist)
 {list<student>::iterator iter;
 for(iter=thelist.begin(); iter!=thelist.end(); ++iter)
    {
     cout<<"Name:"<<iter->name<<"\n";
     cout<<"School Name:"<<iter->school_name<<"\n";
     cout<<"Standard:"<<iter->standard<<"\n";
     cout<<"Location:"<<iter->location<<"\n";

     cout<<"\n \n \n";

 }}
