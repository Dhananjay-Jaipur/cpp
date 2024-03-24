//generate random function

 
#include <cstdlib> 
#include <iostream> 
using namespace std; 

// this both function is an inbuilt function in C++ STL, which is defined in <cstdlib> header file

int main() 
{ 
	// rand() - This program will create same sequence of random numbers no matter how many time you run it will give you that same numbers
 
	for (int i = 0; i < 5; i++) 
		cout << rand() << endl; 
	
	for (int i = 0; i < 5; i++) 
		cout << rand()%10 << endl;  // get num in single digit






	// srand() - depending on srand parameter rand function will generate num
	
	srand(0); 
   	for (int i = 0; i < 4; i++) 
        	cout << rand() << endl; 

	
   	for (int i = 0; i < 4; i++){
		srand(i);  
        	cout << rand() << " ";    //This program will create new sequence of random numbers every time you call
	}

        
	// Use current time as seed (parameter) for random generator 

	cout << time(0) << endl;  // returns the current time in seconds from EPOCH (January 1, 1970)
	
    	srand(time(0)); 
   	for (int i = 0; i < 4; i++) 
        	cout << rand() << endl; 	   


	return 0; 
}