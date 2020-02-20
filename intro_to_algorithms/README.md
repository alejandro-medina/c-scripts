
## Commands

Write out a file with text using the command `echo hello world > my_file.txt`

hello world

My firt file on algorithm class

command: pwd - shows current directory
command: ll - shows permissions 
------------- r = read, w = write, x = execute
------------- rwxrwxrwx
------------- those which have a "-" don't have that permission
------------- first group: user who created, second: group, third: public

command: chmod - change permissions
command: ls - shows directory
command: ls *.c - shows all files with extension .c

## Class Feb 20th 2020

How to enter arguments to our C program

The main function can have parameters to receive the arguments thourgh the command line 

```
int main (int argc, char** argv) { 

	// Argc = Argument count
	// Argv = Argument vector

}
```

- The first parameter indicated the number of arguments entered by the user:
-- The number of arguments considers the name of the program (argv[0])

- The second parameter is the vector or arguments that the user entered
-- if is only char* -> is a complete string, if it is char** -> receive a vector


### Commands

```
man [command] // shows the manual for the command given
atoi // converts a string into a number
```

