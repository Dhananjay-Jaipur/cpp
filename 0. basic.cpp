#include<iostream>  //pre-defined
#include "iostream"  //user defined lib

using namespace std;  //to directly use methods of iostream

int main()
{

std :: cout << "std tell this function belog to standard lib, thatswhy we use namespace";


int a=5;
int b=6;
cout << "jai shree ram" << endl;  //excertion
cin  >>  ; 		//insertion

printf("%d\n",printf("%*c %*c",a,' ',b,' '));

// 80% student got A out of them 17 are boys
//find no of girls ?
int st=45;
int b=25;
int x, result;
x = (45*80)/100;
result = x-17;
cout << result << endl;


int * int = int
int * float = float
float * float = float
float + int = float

// datatypes statement array
primitive  -  int char float (bby  defout)
seccoddary -  string,array (derived)
user define -  class, structure

char  a[20]="array";
char b[]="array";
char c[]={'a','r','r','a','y'};

cout<<sizeof(a)<<endl;
cout<<sizeof(b)<<endl;  //ccharacter array as string, thatswhy +1 is end of file operator "array\o"
cout<<sizeof(c)<<endl;

int age[] =  {1,2,3};  //4 bit each
cout<<sizeof(age)<<endl; //12

int n[][]={{1,2},
            {3,4}};
cout<<sizeof(n)<<endl; //error - multidimensional array must have bounds for all dimensions except the first

int n[][2]={{1,2},
            {3,4}};
cout<<sizeof(n)<<endl;  //16


// 3-colloum, 3-row,  represents a 1-d array of [3 colloum] inside  2d array

//3rd colulm [] say 1d array inside 2d [][] array
int n[3][3][3]={{{1,1,1},
                {2,2,2},
                {3,3,3}}};
cout<<sizeof(n)<<endl;  //108

// a 2d array inside an 2d array
int n[3][3][3][3]={{{{1,1,1},
                {2,2,2},
                {3,3,3}}}};
                
                

//value depends on compiler
int a;
char b;
cout<<a<<endl;
cout<<b<<endl;


//struccture  and cclass
struct emp{
int a;   //by defout public
}a;

class st{
public:
int a;    //by defoult private
}b;

cout<<a.a<<endl;  //result=0    default value  = 0
cout<<b.a<<endl;  //result=0    defoult value  = depend on compiler


}
