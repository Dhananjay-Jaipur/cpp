// GUSS THE NUMBER GAME:-

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    gus_the_num();
}



int gus_the_num() {
    
    srand(time(0));
    int n;
    n=rand()%10;
    
    cout << "enter the num  ";
    int user;
    
    for(int i=0; i<5; i++)
    {
        cin >> user;
        
        if(user==n)
        cout << "👍" << endl;
        
        if(user>n)
        cout << "number is greatee" << endl;
        
        if(user<n)
        cout << "number is smaller" << endl;
        
    }
    
    if(i>5)
    cout << "👎";

    return 0;
}
