// binary to decimal

#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int binary_number, decimal_number = 0, i = 0, remainder;
    cout << "Enter a binary number: ";
    cin >> binary_number;
    while (binary_number != 0)
    {
        remainder = binary_number % 10;
        decimal_number += remainder * pow(2, i);
        binary_number /= 10;
        i++;
    }
    cout << "decimal: " << decimal_number << endl;

  

// decimal to binary
  int n, data;
  cout << "Enter a decimal number: ";
  cin >> data;

  // Create an array to store the binary digits
  int binary[32];
  int i=0;
  n = data;

  while (n > 0) {
    binary[i] = n % 2;
    n /= 2;
    i++;
  }


  // Print the binary representation
  cout << "The binary representation of " << data << " is: ";
  for (int j = i-1; j>0 ; j--) {
    cout << binary[j]  << 0;
  }


return 0;
}
    