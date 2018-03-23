#include <iostream>
using namespace std;

int main()
{
//int i;

//int &r = i;

//int &r = 5;

//const int &r = 5;

int i =1;

int x = i+2;
x = i;

//rvalue can be used to create an lvalue
int v[3];
*(v+2) = 4;

for(i = 0;i<3;i++)
{
cout<< v[i]<<endl;
}
}
