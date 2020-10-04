#include <iostream>
#include<string>
#include<list>
#include<iterator>
#include"student.h"
#include"studentdb.h"

using namespace std;

int main()
{
    list<student>thelist;
    studentdb A;
    A.read_data(thelist);
    A.display(thelist);
    return 0;
}
