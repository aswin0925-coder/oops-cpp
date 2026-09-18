# C++ Curriculum Learning Exercises

This repository is an unfinished, regularly updated C++ learning project. It is a personal side project created while learning C++ as part of my curriculum.

This is not a final product or a complete application. The files and folders will change as I learn new topics, practice concepts, and add more exercises.

The project is mainly used for:

- Beginners learning how a C++ program is written and compiled
- Practicing input, output, variables, arithmetic, and classes
- Experimenting with small debugging exercises
- Learning the difference between source code and compiled programs

You do not need to be a programmer to understand the purpose of this project. In simple terms, the files in this repository are small learning experiments. Each experiment helps me understand a question such as "How do I add two numbers?", "How does a class store information?", or "What does this operator do?"

## What Is In This Project?

The project currently includes three learning areas, and more may be added over time:

1. **Basic C++**: A program that reads two numbers and displays their sum and average.
2. **Object-oriented programming**: Programs that use classes and objects to store and display information.
3. **Debugging practice**: Small programs for checking program flow, numeric types, division, and remainders.

## Project Structure

```text
oops-cpp/
+-- README.md                 # This guide
+-- INFO/                     # Notes about the project and compilation
|   +-- compile.txt           # Example compiler command
|   +-- intro.txt             # Notes about source and build folders
|   +-- plan.txt              # Notes describing the folder plan
+-- src/                      # General or unfinished source code
|   +-- hello.cpp             # Adds two numbers and calculates their average
+-- build/                    # General compiled programs
|   +-- hello1                # Compiled version of hello.cpp
+-- oop.src/                  # Source code for OOP exercises
|   +-- oop1.cpp              # Person class: name and age
|   +-- oop2.cpp              # Temperature class exercise
+-- oop.build/                # Compiled OOP exercises
|   +-- oop1                  # Compiled version of oop1.cpp
|   +-- oop2                  # Compiled version of oop2.cpp
+-- debug.src/                # Source code for debugging exercises
|   +-- debug001.cpp          # Checks a simple increment operation
|   +-- debug002.cpp          # Checks addition using short integers
|   +-- debug003.cpp          # Checks division and remainder
+-- debug.build/              # Compiled debugging exercises
|   +-- debug001              # Compiled version of debug001.cpp
|   +-- debug002              # Compiled version of debug002.cpp
|   +-- debug003              # Compiled version of debug003.cpp
+-- debug.rough/              # Workspace for early debugging attempts
```

## Source Code And Build Files

### Source files

A source file is the human-readable code written by the developer. In this project, source files end in `.cpp`, for example `src/hello.cpp`.

Source code can be opened, read, changed, and compiled again.

### Build files

The files in the build folders are compiled programs. A compiler translates C++ source code into a form that the computer can execute. The compiled program does not normally have a `.cpp` extension on Linux.

For example:

```text
src/hello.cpp  ->  build/hello1
```

The source file is the recipe. The build file is the executable result made from that recipe.

### Important GitHub note

The `src` directory is not automatically hidden when this repository is published on GitHub. GitHub shows every committed file and folder unless the repository is private, the file is ignored before committing, or access is otherwise restricted.

## Exercises

### Basic calculator: `src/hello.cpp`

This program:

1. Asks the user for two numbers.
2. Adds the numbers together.
3. Displays the sum.
4. Divides the sum by two and displays the average of those two input values.

Example interaction:

```text
enter two numbers :
10 20
the sum is 30
average is 15
```

### Person class: `oop.src/oop1.cpp`

This exercise introduces object-oriented programming:

- `person` is a class, which is a blueprint for a type of object.
- Each person object stores a name and an age.
- `getdata()` reads the person's details.
- `display()` prints the stored details.
- `main()` creates one person object and uses its functions.

### Temperature class: `oop.src/oop2.cpp`

This exercise uses a class named `temp` to read a temperature in Fahrenheit and display a Celsius value.

The current code calculates Celsius with `far + 12`. That is the code's present learning behavior, but it is not the standard Fahrenheit-to-Celsius conversion. The standard formula is:

```text
celsius = (fahrenheit - 32) * 5 / 9
```

This makes the file a useful place to practice identifying and correcting a logic error.

### Debugging exercises: `debug.src/`

- `debug001.cpp` increments an integer and prints its value. It also demonstrates how comments can disable a line of code.
- `debug002.cpp` adds two `short` integer values and prints the result. This is useful for observing numeric types and arithmetic.
- `debug003.cpp` calculates both the quotient and remainder of `10 / 5` using integer division and the remainder operator `%`.

## Requirements

You need:

- A Linux, macOS, or Windows computer
- A C++ compiler such as `g++`
- A terminal or command prompt
- C++17 support

On Ubuntu or another Debian-based Linux distribution, the compiler is commonly installed with:

```bash
sudo apt update
sudo apt install g++
```

## Compile And Run

Run these commands from the project root, the folder containing `README.md`.

### Compile and run the basic calculator

```bash
g++ -std=c++17 -Wall -Wextra src/hello.cpp -o build/hello1
./build/hello1
```

### Compile and run the OOP exercises

```bash
g++ -std=c++17 -Wall -Wextra oop.src/oop1.cpp -o oop.build/oop1
./oop.build/oop1
```

```bash
g++ -std=c++17 -Wall -Wextra oop.src/oop2.cpp -o oop.build/oop2
./oop.build/oop2
```

### Compile and run the debugging exercises

```bash
g++ -std=c++17 -Wall -Wextra debug.src/debug001.cpp -o debug.build/debug001
./debug.build/debug001
```

```bash
g++ -std=c++17 -Wall -Wextra debug.src/debug002.cpp -o debug.build/debug002
./debug.build/debug002
```

```bash
g++ -std=c++17 -Wall -Wextra debug.src/debug003.cpp -o debug.build/debug003
./debug.build/debug003
```

The options used above mean:

- `-std=c++17`: Compile using the C++17 language standard.
- `-Wall`: Show many common compiler warnings.
- `-Wextra`: Show additional useful warnings.
- `-o`: Choose the name and location of the compiled program.

## A Simple Workflow

When adding a new exercise:

1. Write or copy the `.cpp` source file into the appropriate source folder.
2. Compile it with `g++`.
3. Put the resulting executable in the matching build folder.
4. Run the executable and check its output.
5. If the program is only an early experiment, keep it in `debug.rough/` until it is ready to move into `debug.src/` and `debug.build/`.

The matching folder names make it easy to find the source code that produced each compiled program.

## Common Terms

- **Project**: The complete collection of files that work together for this learning goal.
- **Repository**, or **repo**: The project folder tracked by Git. This repository is named `oops-cpp`.
- **Directory**: Another name for a folder, such as `src/` or `oop.src/`.
- **Source code**: Human-readable instructions written in C++.
- **Compiler**: A program that translates source code into an executable program.
- **Executable**: A compiled program that the computer can run.
- **OOP**: Object-oriented programming, a way of organizing code around objects that contain data and functions.
- **Debugging**: Finding and correcting mistakes in a program.

## Project Status

This is an active and incomplete learning repository. The programs are intentionally small so that each concept is easy to isolate and practice. Some exercises may contain unfinished logic or intentionally incorrect behavior for debugging practice, especially `oop.src/oop2.cpp`.

The repository will be updated regularly as I continue studying my curriculum. Future updates may include corrected exercises, new C++ concepts, additional practice programs, and improvements to existing code.
