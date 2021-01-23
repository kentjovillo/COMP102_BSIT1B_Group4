#include <iostream>
using namespace std;
int main()
{
int rows = 5;
// 1st loop is for the number of rows
for(int i = 1; i <= rows; ++i)
{
//2nd loop is for the number of column per row
for(int j = 5; j >= i; --j)
{
cout << "* ";
}
cout << "\n";
}
return 0;
}



