# Final Project - Operating Systems Course (2021-2022)
## Team Members
- [Arsanios Isaac Helmy](https://github.com/arsaniisaac)
- [Clara Raef Nasry](https://github.com/Clara-Raef)
- [Mark Magdy Amin](https://github.com/markmagdy822000)
- [Mina Nagy Latif](https://github.com/MinaNagyLatif)
- [Youssef Nazeer Tawfik](https://github.com/Yousef-nazeer)

The project consists of 2 sub-projects, so we filed the repository accordingly. 
The programming language we used is C.


## Part (1): wcat, wgrep, wzip & wunizp
In this part, we cloned the functionality of 4 basic UNIX utilities.


### 1.1 wcat

A clone of a UNIX command called cat (short for concatenate). This command's function is to display the contents of a file.

- ***Code overview***
Mainly based on the routines fopen(), fgets(), and fclose(). Their jobs are as simple as their names indicate.
Since we're passing command line arguments, main() is defined with argc and argv: a number and a list of command-line arguments.
The name of the file whose contects we want to print is passed. If the open call is unsuccessful, a fail message will be printed. Otherwise, the contents in the file are read line by line into a buffer, then printed out. The file is then closed.

- The code was compiled as follows:

```
gcc -o wcat wcat.c -Wall -Werror
```

- We created a text file named (text1.txt) that we wanted to print its contents using our wcat code.

![text1](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wcat/test/WCAT%20-%20Text%20file.png)

- Then we prompted the wcat & the file name

```
./wcat text1.txt
```

![wcat](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wcat/test/WCAT.png)

- The result of running the tests from the reference directory:

![Test](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wcat/test/WCAT%20TEST.jpeg)
_____________________________________________________________________________________________________________________________________________

### 1.2 wgrep

A clone of a UNIX command called grep. This command's function is for searching plain-text data sets for lines that match a regular expression.

- ***Code overview***

3 libraries are included in this code: stdio for input & output. stdlib which includes fopen(), fgets() & fclose(). string allows us to operate on strings.
Since we're passing command line arguments, main() is defined with argc and argv: a number and a list of command-line arguments.
The code will first make sure that the user has entered any arguments. If not, it will print a message asking them to complete the input by giving the searchterm and the filename. Otherwise, the code will point to the word which the user wants to search for (the second element on the argv list). The desired file will be opened by fopen() and read from it using fgets() into the buffer. As long as the line contains the specified search term, it will be concatenated to the previous similar lines. The output is finally printed. The stream is closed, and everything is freed.

- The code was compiled as follows:

```
gcc -o wgrep wgrep.c -Wall -Werror
```

- We created a text file named (text2.txt) that we wanted to print the lines containing the word "This" from it.

![text2](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wgrep/test/WGREP%20-%20Text%20file.png)

- Then we prompted the wgrep & the file name

```
./wgrep This text2.txt
```

![wgrep](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wgrep/test/WGREP.png)

- The result of running the tests from the reference directory:

![Test](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wgrep/test/WGREP%20TEST.jpeg)
_____________________________________________________________________________________________________________________________________________

### 1.3 wzip

A clone of a UNIX command called zip. This command is used to compress the files to reduce file size.

- ***Code overview***

The code will first make sure whether the user has entered more than 2 arguments. If not, it will print a message informing them of incorrect format. Then, the specified file will be opened. A buffer is created, alongside counter & temporary variables. As long as it's not the end of the file, the command will keep comparing and counting the occurences of each character. When the character isn't repeated anymore, the number of occurences and the character itself are written by fwrite in the compressed file. The file is then closed.
_____________________________________________________________________________________________________________________________________________

### 1.4 wunzip

A clone of a UNIX command called unzip. This command is used to decompress a certain file's contents.

- ***Code overview***

The file is first opened 




- The wzip code was compiled as follows:

```
gcc -o wzip wzip.c -Wall -Werror
```

- We created a text file named (text3.txt) that we wanted to compress.

![text3](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wzip%20%26%20wunzip/test/WZIP%20-%20Text%20file.png)

- Then we prompted the wzip, the file name & the compression destination.

```
./wgrep text3.txt > text3.z
```

And the compressed version was created!

![compression](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wzip%20%26%20wunzip/test/Screen%20Shot%202022-01-05%20at%201.23.50%20AM.png)

- Then we compiled the wunzip code as follows:

```
gcc -o wunzip wunzip.c -Wall -Werror
```

The "text3.z" file that was compressed by wzip is now decompressed again and its contents appear on the command line.

![wunzip](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wzip%20%26%20wunzip/test/WZIP%20-%20WUNZIP.jpeg)

- The result of running the tests from the reference directory:

![WzipTest](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wzip%20%26%20wunzip/test/WZIP%20TEST.jpeg)

![WunzipTest](https://github.com/Clara-Raef/OS-Final-Project/blob/main/Part%201/wzip%20%26%20wunzip/test/WUNZIP%20TEST.jpeg)
_____________________________________________________________________________________________________________________________________________
## Part (2): 



##### Reference
Arpaci-Dusseau, Remzi H., Arpaci-Dusseau, Andrea C.. (2014). Operating Systems: Three Easy Pieces. : Arpaci-Dusseau Books.




