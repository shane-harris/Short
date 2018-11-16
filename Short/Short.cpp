/*****************************************************
Shane Harris
CISP 400 - Mon Wed 3:00 pm
Project 2
Feb 10, 2016
*****************************************************/

#include <iostream>
#include "Short.h"

void Short::_display_BIN() const
{
    int x=_n;
    int p[8];
    int i=7;

    if(x<0)
    {
        x=x+128;
        do
        {
            int temp = x;
            p[i] = temp%2;
            --i;
            x=x/2;
        }
        while(i>=0);
        p[0] = 1;
        cout<<p[0]<<p[1]<<p[2]<<p[3]<<' '<<p[4]<<p[5]<<p[6]<<p[7]<<"b"<<endl;
    }
    else
    {
        do
        {
            int temp = x;
            p[i] = temp%2;
            --i;
            x=x/2;
        }
        while(i>=0);

        cout<<p[0]<<p[1]<<p[2]<<p[3]<<' '<<p[4]<<p[5]<<p[6]<<p[7]<<"b"<<endl;
    }
}

void Short::_display_HEX()const
{
    int x=_n;
    char p[8];
    int i=1;

    if(x<0)
    {
        i=7;
        x=x+128;
        do
        {
            int temp = x;
            p[i] = temp%2;
            --i;
            x=x/2;
        }
        while(i>=0);
        p[0] = 1;

    int hold1, hold2;

    p[0]=p[0]*8;
    p[1]=p[1]*4;
    p[2]=p[2]*2;
    p[3]=p[3]*1;
    p[4]=p[4]*8;
    p[5]=p[5]*4;
    p[6]=p[6]*2;
    p[7]=p[7]*1;
    hold1 = p[0]+p[1]+p[2]+p[3];
    hold2 = p[4]+p[5]+p[6]+p[7];

    if(hold1 < 10)
        hold1 = hold1 + 48;
    else
        hold1 = hold1 + 55;
    if(hold2 < 10)
        hold2 = hold2 + 48;
    else
        hold2 = hold2 + 55;
    p[0]= hold1;
    p[1]= hold2;
    cout<<p[0]<<p[1]<<"h"<<endl;

    }
    else
    {
        do
        {
            int temp = x;
            temp = temp%16;

            if(temp < 10)
                temp = temp + 48;
            else
                temp = temp + 55;
                p[i] = temp;
                --i;
                x=x/16;
        }
        while(i>=0);
        cout<<p[0]<<p[1]<<"h"<<endl;
    }

}

Short::Short()
{
     _n =(0);
     _dt=(DEC);
}


Short::Short(signed char R, display_type I)
{
    _n = R;
	_dt= I;
}


void Short::add( const Short& c )
{
    _n += c._n;

}

void Short::sub( const Short& c )
{
    _n -= c._n;

}

void Short::mult( const Short& c )
{
    _n *= c._n;

}

void Short::div( const Short& c )
{
    _n /= c._n;

}

void Short::display() const
{
    if(_dt == BIN)
    {
        _display_BIN();
    }
    if(_dt == HEX)
    {
        _display_HEX();
    }
    if(_dt == DEC)
    {
        int x=_n;
        cout<<x;
    }


}

void Short::set_display_type(display_type x)
{
    _dt = x;

}
