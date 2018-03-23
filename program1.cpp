#include <iostream>
using namespace std;
class Numbers
{
public:
Numbers()
{
static int i = -1;
cout<<++i;
}
};
int main()
{
Numbers n[100];
}
