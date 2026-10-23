#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    complex()
    {
        real=0;
        imag=0;

    }
    complex(float r,float i)
    {
        real=r;
        imag=i;

    }
    complex(int r,int i)
    {
        real=r;
        imag=i;
    }

    void display(void)
    {
        cout<<real<<"+"<<imag<<"i"<<endl;

    }
    complex operator-(complex c)
    {
        float r=real-c.real;
        float i=imag-c.imag;
        return complex(r,i);

    }
    complex operator+(complex c)
    {
        float r=real+c.real;
        float i=imag+c.imag;
        return complex(r,i);
    }
    complex operator*(complex c)
    {
        float r=real*c.real;
        float i=imag*c.imag;
        return complex(r,i);
    }
    };
    int main()
    {
        complex c1(7,5.0);
        cout<<"\nComplex number 1 is=";
        c1.display();

        complex c2(9,5.0);
        cout<<"Complex number 2 is=";
        c2.display();

        complex c3(4,6);
        cout<<"Complex number 3 is=";
        c3.display();

        complex sub=c1-c2;
        cout<<"\nSubtraction is =";
        sub.display();

        complex sum=c1+c2;
        cout<<"Addition is =";
        sum.display();

        complex mult=c1*c2;
        cout<<"Muitiplication is =";
        mult.display();

        return(0);
 

    
 
}
//output:
PS D:\shrutika007> cd "d:\shrutika007\" ; if ($?) { g++ complexnumber.cpp -o complexnumber } ; if ($?) { .\complexnumber }

Complex number 1 is=7+5i
Complex number 2 is=9+5i
Complex number 3 is=4+6i

Subtraction is =-2+0i
Addition is =16+10i
Muitiplication is =63+25i
PS D:\shrutika007> 




