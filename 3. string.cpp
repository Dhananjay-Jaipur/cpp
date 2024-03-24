//string

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    //convert string to chrater;
const char *str = user.c_str(); //it returns a null ponter terminated content
int l=user.length();
char a2[l];

strcpy (a2, str);  // copying string to char array



// count frequency charcter in a string ? (how many times a charcter comes in a string)
string str;
  cout << "Enter a string: ";
  cin >> str;

  int freq[26] = {0}; // Array to store the frequency of each character

  // Iterate over the string and increment the frequency of each character ?????????????????????
  for (char c : str) {
    freq[c - 'a']++;
  }


  // Print the frequency of each character
  for (int i = 0; i < 26; i++) {
    if (freq[i] > 0) {
      cout << char(i + 'a') << ": " << freq[i] << endl;
    }
  }


}