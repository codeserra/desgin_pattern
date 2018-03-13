Intent
- Ensure a class has only one instance, and provide a global point of access to it
- Encapsulated "just-in-time initialization" or "initialization on first use"

Singleton should be considered only if all three of the following criteria are satisfied:
- Ownership of the single instance cannot be reasonably assigned
- Lazy initialization is desirable
- Global access is not otherwise provided for

An implementation of singleton class should have following properties:
- It should have only one instance :
         - This is done by providing instance of class from within the class
         - Outer classes or subclasses should be prevented to create the instance
         - This is done by making the constructor private so that no class can access the constructor and hence cannot instantiate it
- Instance should be globally accessible :
         - Instance of singleton class should be globally accessible so that each class can use it
         - This is done by making the access-specifier of instance public


Singleton class can be instantiated by two methods:
- Early initialization : 
         - In this method, class is initialized whether it is to be used or not
         - Main advantage of this method is its simplicity
         - You initiate the class at the time of class loading
         - Its drawback is that class is always initialized whether it is being used or not
         
- Lazy initialization :
         - In this method, class in initialized only when it is required
         - It can save you from instantiating the class when you don’t need it
         - Generally lazy initialization is used when we create a singleton class
         
         
         
refernce:
[1] https://sourcemaking.com/design_patterns/singleton
[2] https://www.geeksforgeeks.org/singleton-design-pattern-introduction/
