/*
object:
class:
three main buillding blocks of oops
1)encapsulation/abstraction-hiding the complexities of the object from outer world 
binding of data and functions together in a class
abstraction-showing only the nescessary details that are required for the outer world.
2)Inheritance-
3)polymorphism


There are three access specifiers
1)private-the data is private to that particular unit and is inaccessible to the outer world
by default access specifier is pvt.
2)public-the data is accessible to outer world .
3)protected-when we are inheriting a class using protected access specifier it means the 
derived class wil have access to protected members of parent class.The protected data is accessible 
to derived class or sub class,but inaccessible to outer world.while pvt data is inaccessible to the 
derived class also.


:: scope resolution operator used to tell the scope of particular function which means that
u are telling to the compiler that get data function belongs to the class addition 
if we are defining the function within the class then there is no need to use the scope 
resolution operator

class is  a user defined data type because class is the collection of similar types of objects.
when we hv to call or access a public function we will be using a dot operator to call a function. 

naming conventions
name the variables as per the given problem statement 
class name shall start with capital letter
function name starts with a small letter and it follows a camel case appproach
class name should be similar to your problem

if the data members would hv been kept as public in our class then we can access the data members also 
using the object .


There are two ways to define a class and its function 
1)we can declare the class which consists of data members and member function
 the member function are defined outside the class by using the scope resolution operator
 2)we can define the class by declaring data members and member functions inside the class 
the member functions are also defined inside the class
in this method we do not need the scope resolution operator


 *In c and c++ the execution of a program starts with main function
When an object can take multiple forms depending upon situations it is known 
as polymorphism 
for eg a human being can be a student,a friend ,sibling ,child etc
polymorhism -one name,many forms
i)compiletime polymorphism
a)function overloading-where we can have sm function name which is performing different tasks.There are
  few conditions for the function overloading
  1)number of arguments passed in each function can be different 
  2)if the number of arguments are same,the data type of atleast one argument shall be different
b)operator overloading
ii)run(dynamic) time polymorphism
a)function overriding(virtual function)

*/