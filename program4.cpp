#include <iostream>
using namespace std;
int myglobal = 10;
int& foo()
{
return myglobal;
}
int main()
{
foo() = 50;
cout<<myglobal;
}
