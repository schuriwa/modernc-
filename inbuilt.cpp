#include <iostream>
#include<algorithm>
using namespace std;
int main()
{

int arr[6] = {1,2,3,4,5,-6};


//all_of 
all_of(arr, arr+6,[](int x){return x>0;})?
cout<<"All are positive elements" : 
cout<<"All are not positive elements";


//any_of
any_of(arr,arr+6,[](int x){return x<0;})?
cout<<"There exists a negative element" :
cout<<"All elements are positive";
}
