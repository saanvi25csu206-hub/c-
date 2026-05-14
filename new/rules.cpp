/*
1)
2)It has the sm name as that of a class
3)constructors do not hv a return type,not even void
4)they are always declared in the public section of the class 
5)If we hv not created a constructor in the class,compiler will
automatically create a default constructor  which initialises the variable to sum garbage 
value

Types of constructors
->default constructor(with no argument):which contains no argument.It is automatically created if we do 
not create.
->parameterized constructor(with arguments):They are the one which contain a list of pasrameters or arguments
These arguments are used to initialize the data members of that particular class
->copy constructors(copy of object as an argument):It is the one which takes reference of another object
as a parameter.In this the values of one object is entirely copied into another object.
constructor overloading where we are defining more than one constructor but every constructor is doing
different task.
1)the number of arguments or parameters shall be different
2)If the number of arguments are sm,the data type of atleast one argument shall be different
3)if the data type of every argument is sm , order of argument shall be different
for eg-if first constructor is taking integer,double then second constructor may take double,int

Destructors are used to destroy the objects and release the memory which is occupied by the objects 
destructors are automatically when we close the program 
we can explicitly call a destructor in our program 
destructors also have sm name as that of a class but they are followed by a wave sign(~)*/