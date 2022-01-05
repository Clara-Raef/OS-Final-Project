# Final Project - Operating Systems Course (2021-2022)
## Team Members
- [Arsanios Isaac Helmy](https://github.com/arsaniisaac)
- [Clara Raef Nasry](https://github.com/Clara-Raef)
- [Mark Magdy Amin](https://github.com/markmagdy822000)
- [Mina Nagy Latif](https://github.com/MinaNagyLatif)
- [Youssef Nazeer Tawfik](https://github.com/Yousef-nazeer)

The project consists of 2 sub-projects, so we filed the repository accordingly. The programming language we used is C.

### Part (1): wcat, wgrep, wzip & wunizp
In this part, we cloned the functionality of 4 basic UNIX utilities.

#### 1.1 wcat
A clone of a UNIX command called cat (short for concatenate). This command's function is to display the contents of a file.
***Code overview***
Mainly based on the routines fopen(), fgets(), and fclose(). Their jobs are as simple as their names indicate.
Since we're passing command line arguments, main() is defined with argc and argv: a number and a list of command-line arguments.
The name of the file whose contects we want to print is passed. If the open call is unsuccessful, a fail message will be printed. Otherwise, the contents in the file are read line by line into a buffer, then printed out. The file is then closed.

The code was compiled as follows:
```
gcc -o wcat wcat.c -Wall -Werror
```
We created a text file named (text1.txt) that we wanted to print its contents using our wcat code.
![text1](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wcat/test/WCAT%20-%20Text%20file.png)
Then we prompted the wcat & the file name
```
./wcat text1.txt
```
The output:
![wcat](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wcat/test/WCAT%20TEXT.png)
The result of running the tests from the reference directory:
![Test](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wcat/test/WCAT%20TEST.jpeg)


#### 1.2 wgrep
A clone of a UNIX command called grep. This command's function is for searching plain-text data sets for lines that match a regular expression.
***Code overview***
3 libraries are included in this code: stdio for input & output. stdlib which includes fopen(), fgets() & fclose(). string allows us to operate on strings.
Since we're passing command line arguments, main() is defined with argc and argv: a number and a list of command-line arguments.
The code will first make sure that the user has entered any arguments. If not, it will print a message asking them to complete the input by giving the searchterm and the filename. Otherwise, the code will point to the word which the user wants to search for (the second element on the argv list). The desired file will be opened by fopen() and read from it using fgets() into the buffer. As long as the line contains the specified search term, it will be concatenated to the previous similar lines. The output is finally printed. The stream is closed, and everything is freed.
The code was compiled as follows:
```
gcc -o wgrep wgrep.c -Wall -Werror
```
We created a text file named (text2.txt) that we wanted to print the lines containing the word "This" from it.
![text2](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wgrep/test/WGREP%20-%20Text%20file.png)
Then we prompted the wgrep & the file name
```
./wgrep This text2.txt
```
The output:
![wgrep](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wgrep/test/WGREP.png)
The result of running the tests from the reference directory:
![Test](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wgrep/test/WGREP%20TEST.jpeg)



##### Reference
Arpaci-Dusseau, Remzi H., Arpaci-Dusseau, Andrea C.. (2014). Operating Systems: Three Easy Pieces. : Arpaci-Dusseau Books.




