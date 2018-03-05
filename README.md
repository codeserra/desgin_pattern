What is a design pattern?
>> In software engineering, a software design pattern is a general, reusable solution to a commonly occurring problem within a given context in software design. It is not a finished design that can be transformed directly into source or machine code. It is a description or template for how to solve a problem that can be used in many different situations. Design patterns are formalized best practices that the programmer can use to solve common problems when designing an application or system. [2]

What are differnt types design patterns?
>> There are mainly three types of design patterns:
   1. Creational design patterns
   2. Structural design patterns
   3. Behavioral design patterns
   
What are Creational design patterns?
>>These design patterns are all about class instantiation. This pattern can be further divided into class-creation patterns and object-creational patterns. While class-creation patterns use inheritance effectively in the instantiation process, object-creation patterns use delegation effectively to get the job done.[1]
   1. Abstract Factory: Creates an instance of several families of classes
   2. Builder: Separates object construction from its representation
   3. Factory Method: Creates an instance of several derived classes
   4. Object Pool: Avoid expensive acquisition and release of resources by recycling objects that are no longer in use
   5. Prototype: A fully initialized instance to be copied or cloned
   6. Singleton: A class of which only a single instance can exist
  
What are Structural design patterns?
>>These design patterns are all about Class and Object composition. Structural class-creation patterns use inheritance to compose interfaces. Structural object-patterns define ways to compose objects to obtain new functionality.[1]
   1. Adapter: Match interfaces of different classes
   2. Bridge: Separates an object’s interface from its implementation
   3. Composite: A tree structure of simple and composite objects
   4. Decorator: Add responsibilities to objects dynamically
   5. Facade: A single class that represents an entire subsystem
   6. Flyweight: A fine-grained instance used for efficient sharing
   7. Private Class Data: Restricts accessor/mutator access
   8. Proxy: An object representing another object
   
What are  Behavioral design patterns?
>>These design patterns are all about Class's objects communication. Behavioral patterns are those patterns that are most specifically concerned with communication between objects.
   1. Chain of responsibility: A way of passing a request between a chain of objects
   2. Command: Encapsulate a command request as an object
   3.Interpreter: A way to include language elements in a program
   4. Iterator: Sequentially access the elements of a collection
   5. Mediator: Defines simplified communication between classes
   6. Memento: Capture and restore an object's internal state
   7. Null Object: Designed to act as a default value of an object
   8. Observer: A way of notifying change to a number of classes
   9. State: Alter an object's behavior when its state changes
   10. Strategy: Encapsulates an algorithm inside a class
   11. Template method: Defer the exact steps of an algorithm to a subclass
   12. Visitor: Defines a new operation to a class without change


refernce:
[1] https://sourcemaking.com/design_patterns
[2] https://en.wikipedia.org/wiki/Software_design_pattern
[3] https://www.geeksforgeeks.org/software-design-patterns/
