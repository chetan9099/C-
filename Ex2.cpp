#include<iostream>  // input and output stream

using namespace std; // name space conflicts

main() //  main function that invoke

{
int a=5; // integer have 4 byte and -2 billons -2  billons
short int b=10; //memory 2 byte and -32768 tgo 32768
char c='g';//  1 byte and -128 to 127
float f=52.25; // 4 byte and upto 32 zero
double j=5.5; // 8 byte upto 308 zero
cout<<a<<endl<<&a<<endl;
cout<<b<<endl<<&b<<endl;
cout<<c<<endl<<&c<<endl;
cout<<f<<endl<<&f<<endl;
cout<<j<<endl<<&j<<endl;
}
