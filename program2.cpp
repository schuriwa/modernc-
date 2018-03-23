#include <iostream>
using namespace std;

class dog
{
public:
dog()
{
}
};
int main()
{
int i =0;
int x = 2;
x = i+2;
int *p = &(i+2);
i+2 = 4;
2 = i;

dog d1;
d1 = dog();

int sum(int x, int y){return x + y;}

int i = sum(3,4);
}

//RValue: 2, i+2, dog(), sum(3,4)

