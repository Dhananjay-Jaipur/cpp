// C++ program to find length
// of a string
#include <iostream>
#include <cstring>
using namespace std;

class b1{
      public:
      
      void  fun(){
      cout << "first";
      }
};

class b2{
      public:
      
      void  fun(){
      cout << "sec";
      }
};

class d:  public b1, public b2{
      public:
      
}i;

// Driver code
int main()
{
	i.b1::fun();
	return 0;
}

