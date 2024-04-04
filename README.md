
# OOPS
# FAQ 

**Define OOPS** : Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than functions and logic. An object can be defined as a entity that has unique attributes and behavior.

**Why OOPS is needed ??** 

-> It helps to improve the readability of the program. Make the program more modular so that we can reuse again and also make it easier to uprgade or update the system.

**What is Class??** 

-> It is a template for defining the variables and methods for the given object.

**What is the size of the class when it is empty??**

-> 1 byte because for uniquely identify the object created or to keep track.

**Access Modifiers** : It is a restriction of where we can Access the class members.

-> There are 3 Types of Access Modifiers: 

1) Public : Can access the member from any where.
2) Private : Member can access within the class only
3) Protected :



**Define Padding**: Padding is the technique of adding extra bytes to a structure or class to align its data members to specific boundaries. This is done to ensure that the data members are accessed efficiently by the processor, which typically fetches data from memory in chunks of fixed sizes, such as 4 or 8 bytes.

**Define Greedy:** Greedy alignment is a technique used to minimize padding by ordering the data members of a class in decreasing order of size. This ensures that the largest data members are placed first in the class, minimizing the amount of padding required to align the subsequent data members.

**this** : Refer to the current object of the class.(pointer to current object)

**Shallow vs Deep Cloning**: When using copy constructors, shallow copy is when objects share same memory locations for variables. While deep copy is when objects have their own individual memory locations.

-> In shallow cloning if the member is dynamically created then creating the copy of that object will point to the same memory reference thus making change in any property will change for all the object copied but this does not happen in deep copy since they allocate different memory locations.

**Destructor** : Used to dealocate the memory which is being allocate previously. It should not have parameter and return value. And starting with the '~' + 'Classname'

Eg: ~Hero(){}

-> For the statistically allocated property Destructor is automatically called. But for the dynamically allocated member you have to manually call the destructor 

Eg :  ~Hero(){
        delete name;
    }


**const Keyword** :🔗 https://www.javatpoint.com/const-keyword-in-cpp

**Initialization List** :🔗 https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/

**Static Keyword:** When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call.

**Static Member Function** in a class is the function that is declared as static because of which function attains certain properties as defined below:

->A static member function is independent of any object of the class. 

->A static member function can be called even if no objects of the class exist.

-> A static member function can also be accessed using the class name through the scope resolution operator.

->A static member function can only access static data members and static member functions inside or outside of the class.
Static member functions have a scope inside the class and cannot access the current object pointer.

->You can also use a static member function to determine how many objects of the class have been created.
