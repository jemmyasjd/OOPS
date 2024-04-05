
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
## Pillars of OOPS

* ## Encapsulation:

**Encapsulation:** Wrapping of the data members and function into a single entity is called Encapsulation.

**Fully Encapsulated Class:** The class is said to be Fully Encapsulated when all its members or properties is marked as private.

**Why Encapsulation is needed ??**

-> It is used for data hiding or information hiding.

-> Advantages : 

* Data hiding which increase the security concern.
* If we want we can make the class read-only.
* Code Resuability
* Encapsulation helps in unit testing.
--------------

* ## Inheritance:

**Inheritance:** Inheritance is a mechanism of reusing and extending existing classes without modifying them, thus producing hierarchical relationships between them.

**Types of Inheritance:**

* **Single Level** : The inheritance in which a single derived class is inherited from a single base class is known as the Single Inheritance. 
* **Multilevel**: When one class inherits another class it is further inherited by another class. It is known as multi-level inheritance.
* **Multiple** : Multiple Inheritance is a feature of C++ where a class can inherit from more than one classes.
* **Hierarchical**: one base class is inherited by more than one derived class.
* **Hybrid** :The process of combining more than one type of Inheritance together while deriving subclasses in a program is called a Hybrid Inheritance. 

---------------

* ## Polymorphism:

**Polymorphism:** Polymorphism means, the same entity (function or object) behaves differently in different scenarios.

**Types of Polymorphism:**

* **Compile Time Polymorphism:(also called static polymorphism)** When the relationship between the definition of different functions and their function calls, is determined during the compile-time, it is known as compile-time polymorphism. 

It has two types : 1) Function Overloading and 2) Operator Overloading
* **Run Time Polymorphism:(also called dynamic polymorphism):** In runtime polymorphism, the compiler resolves the object at run time and then it decides which function call should be associated with that object. It is also known as dynamic or late binding polymorphism. 

The type of runtime polymorphism is : Method Overriding.

**Rules for method Overriding:**

* method must have same name
* must have same parameter 
* possible through inheritance only

---------------

* ## Abstraction:

**Abstraction:**  It refers to showing only relevant information to the outside world. In simple words, we can say it means hiding any background information from the outside world.

It can be done through 3 ways : 1) Using access modifiers  2) Abstract Class 3) Using Data Abstraction

-------------

**Interface:** 🔗 https://www.geeksforgeeks.org/cpp-program-to-create-an-interface/

**Friend function:** A friend function is a function that isn't a member of a class but has access to the class's private and protected members.

🔗 https://www.geeksforgeeks.org/friend-class-function-cpp/
