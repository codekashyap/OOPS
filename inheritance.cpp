// C++ program to explain
// Single inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};

// sub class derived from a single base classes
class Car : public Vehicle {

};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}
//**********************************************************************//
/*

// Example:

#include<iostream>
using namespace std;

class A
{
	protected:
	int a;

	public:
		void set_A()
		{
			cout<<"Enter the Value of A=";
			cin>>a;
			
		}
		void disp_A()
		{
			cout<<endl<<"Value of A="<<a;
		}
};


class B: public A
{
	int b,p;
	
	public:
		void set_B()
		{
			set_A();
			cout<<"Enter the Value of B=";
			cin>>b;
		}
		
		void disp_B()
		{
			disp_A();
			cout<<endl<<"Value of B="<<b;
		}
		
		void cal_product()
		{
			p=a*b;
			cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p;
		}
		
};

main()
{
	
	B _b;
	_b.set_B();
	_b.cal_product();
	
	return 0;
	
}
*/
//**********************************************************************//

/*
// C++ program to explain
//2. multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// second base class
class FourWheeler {
public:
	FourWheeler()
	{
		cout << "This is a 4 wheeler Vehicle\n";
	}
};

// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Car obj;
	return 0;
}
//**********************************************************************/

/*
// C++ program to implement
// 3.Multilevel Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle {
public:
	fourWheeler()
	{
		cout << "Objects with 4 wheels are vehicles\n";
	}
};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler {
public:
	Car() { cout << "Car has 4 Wheels\n"; }
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Car obj;
	return 0;
}
//**********************************************************************/
/*
// C++ program to implement
// 4.Hierarchical Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub class
class Car : public Vehicle {
};

// second sub class
class Bus : public Vehicle {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
	Car obj1;
	Bus obj2;
	return 0;
}
//**********************************************************************/
   // encapsulation
/*
#include <iostream>
using namespace std;

class Rectangle {
   private:

    // Variables required for area calculation
    int length;
    int breadth;

   public:

    // Setter function for length
    void setLength(int len) {
      length = len;
    }

    // Setter function for breadth
    void setBreadth(int brth) {
      breadth = brth;
    }

    // Getter function for length
    int getLength() {
      return length;
    }

    // Getter function for breadth
    int getBreadth() {
      return breadth;
    }
    // Function to calculate area
    int getArea() {
      return length * breadth;
    }
};

int main() {
  // Create object of Rectangle class
  Rectangle rectangle1;

  // Initialize length using Setter function
  rectangle1.setLength(8);

  // Initialize breadth using Setter function
  rectangle1.setBreadth(6);

  // Access length using Getter function
  cout << "Length = " << rectangle1.getLength() << endl;

  // Access breadth using Getter function
  cout << "Breadth = " << rectangle1.getBreadth() << endl;

  // Call getArea() function
  cout << "Area = " << rectangle1.getArea();

  return 0;
}
*/