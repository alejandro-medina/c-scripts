# Intro to algorithms class


#### Types of programming languages


#### Variables
Are used to store values with a specific name
To use a variable we need to declare it first, at the beginning of our program, the sintax is _type [name];_ Example:
```c
int age;
char option;
float bmi;
```
You can also assign a value to the variable in two ways: at the moment of declaring or later:

```c
int age;
age = 19; // stores the value 19 inside the var "age"

float bmi = 21.76; // declares the var bmi and assigns directly its value

```
Now you can use variables inside your program in a specific scope, but that is another topic. For the while, use it inside a function or your main function.


#### Functions

Functions are a pretty way to optimize the code inside your program. They are used to avoid repeating code. Basically, when you have a piece of code that is being repeated several times in your program: you're doing sth wrong. The advantajes of functions is that you can use them many times as you want with different parameters. 

You can declare a new function is your programs as: _returning_type [name_of_your_function] (params)_

Example of a function that will return the square of a number:

```c
// a fucntion that returns an int value
int function square(int num) {
	return num*num; // return is important
}
```
Now you can use yor **square** function with different arguments as:

```c
int a = square(4); // returns 16
int b = square(3); // returns 9
int c = square(8); // returns 64
```

#### Pointers
#### Arguments
#### Bash commands
#### Git
#### 
