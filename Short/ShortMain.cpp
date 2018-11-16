/*****************************************************
Shane Harris
CISP 400 - Mon Wed 3:00 pm
Project 2
Feb 17, 2016
*****************************************************/

#include <iostream>
#include "Short.h"
using namespace std;

int stringlen( char *s );

int main ()
{
    int x;
    int y;
    int z;
    int w;
    cout<<"Enter two values for the class 'Short' ..."<<endl;
    cin>>x;
    cout<<"Enter second value."<<endl;
    cin>>y;

    Short S1(x);
    Short S2(y);

    cout<<"The numbers added are."<<endl;
    S1.add(S2);
    S1.display();
    cout<<endl;
    S2.display();
    cout<<endl;

    cout<<"The numbers subtracted are "<<endl;
    S1.sub(S2);
    S1.display();
    cout<<endl;
    S2.display();
    cout<<endl;

    cout<<"The numbers divided are "<<endl;
    S1.div(S2);
    S1.display();
    cout<<endl;
    S2.display();
    cout<<endl;

    cout<<"The numbers multiplied are "<<endl;
    S1.mult(S2);
    S1.display();
    cout<<endl;
    S2.display();
    cout<<endl;

    cout<<"Enter a number between -128 and 127 to convert to binary."<<endl;
    cin>>z;

    cout<<"The binary version of "<<z<<" is..."<<endl;
    Short S3(z);
    S3.set_display_type(BIN);
    S3.display();
    cout<<endl;

    cout<<"Enter a number between -128 and 127 to convert to hexadecimal."<<endl;
    cin>>w;

    cout<<"The hexadecimal version of "<<w<<" is..."<<endl;
    Short S4(w);
    S4.set_display_type(HEX);
    S4.display();

	return 0;
}
