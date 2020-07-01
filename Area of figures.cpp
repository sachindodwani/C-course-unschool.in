#include<iostream>
#include<math.h>
using namespace std ;
double area(double);
int area(int,int);
double area(double, double);
int main()
{ char name[20],x[20]="circle",y[20]="rectangle",z[20]="triangle";
  double r,h,b,areaofig;
  int l,w;
  cout<< "Enter name of the figureof which u want to find area :";
  cin>> name;
  if (name[20]==x[20])
  { cout<< "Enter radius of circle:";
  cin>> r;
    areaofig= area(r);
  }
  else if (name[20]==y[20])
  { cout<< "Enter length of rectangle:";
  cin>> l;
    cout<<"Enter width of rectangle";
	cin>> w;
    areaofig= area(l,w);
  }
  else if (name[20]==z[20])
  { cout<<"Enter height of triangle:";
  cin>> h;
  cout<<"Enter base of triangle:";
    cin>> b;
    areaofig= area(h,b);
  }
  else
  { cout<< "Invalid input!!!";
  }
  cout<< "Area of entered figure :" << areaofig;
  return 0;
}
double area(double r)
{ return(3.14*r*r);
}
int area(int l, int w)
{ return(l*w);
}
double area(double h, double b)
{ return(h*b/2);
}
