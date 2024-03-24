// ALL bitwise operator perform operation after converting them to binary

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{

int a=5;
int b=10;
cout << (a&b) << endl; //AND - 
cout << (a|b) << endl; //OR
cout << (a^b) << endl; //Ex-OR
cout << (~a) << endl;  //NOT (1s and 2s complement)
cout << (a<<1) << endl; //left shift a bit (after convertin them into binary
cout << (a>>1) << endl;  //right shift

    return 0;
}