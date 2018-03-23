#include <boost/range/combine>
#include <iostream>
#include <vector>
#include <list>

int main()
{
std::vector<int> const v{0,1,2,3,4};
std::list<char> const l{'a','b','c','d','e'};

for(auto const& i : boost::combine(v,l))
{
int ti;
char tc;
std::tie<ti,tc> = i;
}}
