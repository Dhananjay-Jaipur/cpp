// C++ program to find length of a string
#include <iostream>
#include <cstring>
using namespace std;

// Driver code
int main()
{
	// String obj
	string str = "pagal";
	int i;
	

	// size of string object using size() method
	cout << str.size() << endl;
	
	// size of string object using length method
        cout << str.length() << endl;
        
         // size of string object using strlen function  ?????????
        //cout << strlen(str) << endl;
        
        // for(; NOT NULL
    for ( i = 0; str[i]; i++);
    cout << i << endl;
    
    //using '\0' is referred to as NULL character
    i = 0;
    while (str[i]!='\0')
        i++;
    cout << i << endl;
    
    if('\0' == 0)
    cout << "(/0) - character equivalent of integer 0(zero)" << endl;

	return 0;
}

