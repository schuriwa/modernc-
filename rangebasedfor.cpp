#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
std::vector<int> v = {0,1,2,3,4,5};
for(auto i: v)
	cout<< i <<' ';
cout<<endl;

for(auto n : {0,1,2,3,4,5})
	cout<< n<<' ';
cout<<endl;

int a[] = {0,1,2,3,4,5};

for(int n:a)
	cout<<n<<' ';
cout<<endl;

for(int n:a)
	cout<<"In loop"<<' ';
cout<<endl;

string str = "Geeks";
for(char c: str)
	cout<<c<<' ';
cout<<endl;

map<int, int> MAP({{1,1},{2,2},{3,3},{4,4},{5,5}});
for(auto i:MAP)
	cout<<'{'<<i.first<<", "<<i.second<<"}\n";
	


}
