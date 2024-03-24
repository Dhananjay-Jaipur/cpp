//HANGMAN GAME:-

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    hangman();
}


int hangman() {
    string data[7]={"minions","ashiqui","kabir singh", "raw", "sanam teri kasam"};
    
    int x;
    srand(time(0));
    x=rand()%5;
    
   // cout << data[x] <<endl;
    
    string str = data[x];
    
    int n;
    n = strlen(str);

    cout << "\n enter movies 🎬 " << endl;
    
    
    for(int i=0; i<n; i++)
    {
        cout << "_ ";
    }
    
    char user[x];
    cin >> user;

}
