# operator_overloading
The program overloads the + and - operators in the Time class thus enabling the user to add or subtract timestamps

## Description
This is a C++ program that overloads the Time class to give the ability to the user to add or subtract timestamps. The code defines a Time class that encapsulates hour, minute, and second within a 24-hour time format. The class provides methods for setting time, normalizing it (to ensure minutes and seconds are within conventional bounds), displaying it, adding two Time instances together, or subtracting them. The code is fairly simple and its time and space complexity are at *O*(1).

## Usage
Run the program using Visual Studio 2022 or built it in your Linux machine using:
```
g++ -std=c++20 -o opov operator_overload.cpp
```
Then run the executable produced by typing:
```
./opov
```
Here is an example:
```
Enter time (hours minutes seconds): 15 40 53
Enter time (hours minutes seconds): 12 38 44
Time t1: 15:40:53
Time t2: 12:38:44
Sum of t1 and t2: 4:19:37
Difference of t1 and t2: 3:2:9
```

## License
This project is licensed under the MIT license.