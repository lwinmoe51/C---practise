copy from geekforgeek
https://www.geeksforgeeks.org/abstraction-in-c/#:~:text=Abstraction%20means%20displaying%20only%20essential,the%20background%20details%20or%20implementation.

# Abstraction

## Meaning
displaying only essential information and hiding the details. Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or implementation.

## Example
 a man driving a car
 The man only knows that pressing the accelerators will increase the speed of car or applying brakes will stop the car.
 BUT the man don't know how the accelerators and break work in behing the scence of car mechanism.
 That's ABSTRACTION.

## Abstraction using Classes
Class helps us to group data members and member functions using available access specifiers (public, private, protected)
A Class can decide which data member will be visible to outside world and which is not.

### Access specifiers
->Members declared as public in a class, can be accessed from anywhere in the program.
->Members declared as private in a class, can be accessed only from within the class. They are not allowed to be accessed from any part of code outside the class.


## Abstraction in Header files
### Example
he pow() method present in math.h header file.
Whenever we need to calculate power of a number, we simply call the function pow() present in the math.h header file and pass the numbers as arguments without knowing the underlying algorithm according to which the function is actually calculating power of numbers.
