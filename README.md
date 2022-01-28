# KBC

CHARACTERISTICS OF THE PROGRAM

The C++ Program titled, “KAUN BANEGA CROREPATI” brings forth the Computerized version of the globally acclaimed Television show syndicated by the same name, maneuvered with the help of the C++ Language and its multifarious features.
An attempt at the Computerized “Kaun Banega Crorepati” Quiz Show allows the Users to test their Knowledge to the fullest extent, driving minds to excogitate with exciting questions in limited time frames.
Identical circumstances to the Television Show provide the user with an experience unlike any before. Specified time limits with timer sounds and Computerized reverberations extend throughout the duration of the Quiz and keep the excitement and tension whirring.
The Project utilizes and involves the following C++ topics in the development of the “KAUN BANEGA CROREPATI” computerized panel game system.

![image](https://user-images.githubusercontent.com/57800546/151580004-b6fd8f98-d8f9-4fc7-8765-699ba04d7118.png)

 	DATA FILE HANDLING
 	CLASSES AND OBJECTS
 	FUNCTIONS

The Program is developed to provide the User with three options, which are based on the Basic Quizzing format.


FIRST CHOICE: EVALUATION MODE 
This Option provides the User with the hands-on experience of the Quiz along with the basic validation features for the panel game, wherein, the User can have a meticulous look into the Project. It provides the Evaluator with the Answer Key to the entire Quiz show to be able to conduct in-depth analysis through the course of the Quiz and experience all possible outcomes.


SECOND CHOICE: TEST MODE:
This Option provides the testing frame for the User to enter the competition and obtain the glory of a “Kaun Baega Crorepati” victor. 10 Questions of gradually ascending complexity test the User within the determined timespan to reach the ultimate goal of overcoming their own barriers of Knowledge.
It provides conditions much alike that of the actual Quiz Show by gathering Candidate Information and allotting prizes for each varying level of question intricacy.
It also gives the User the ability to Return to Menu at any given point of time, using the specified ‘M’ or ‘m’ keys on the keyboard, with their yielded purse or Quit to Exit the Program instantly with the ‘Q’ or ‘q’ keys. 


THIRD CHOICE: QUIT MODE:
This Option gives the User the possibility of exiting the panel show instantly, at any point of time. 




PROGRAM OUTLINE:

	INCORPORATED HEADER FILES 

•	#include<iostream.h>: - This header file is used for input and output function and is a C++ library function 
•	#include<conio.h>: - This header file is a C header file used mostly by MS-DOS compilers to provide console input/output 
•	#include<fstream.h>: - This header file is a console input/output stream to operate on files 
•	#include<stdio.h>: - This header file is used for input output function and is a C library function
•	#include<process.h>: - This header file includes macros and declarations. These are especially used during work with thread and processes. 
•	#include<string.h>: - This header file performs string manipulation operations
•	#include<windows.h>: - This header file contains declarations of all basic windows macros and different typesdef, like the Sleep() function.
•	#include<ctype.h>: - This header file performs character type functions

	INCOPORTATED DECLARED FUNCTIONS

•	char checkans(char answer,int level): - To check whether the option selected by the user is correct.
•	Sleep(Time): - Pauses the program timer for ‘Time’ number of seconds
•	Beep(Frequency, Duration):- Generates synchronous tones on the speaker of ‘Frequency’ Frequency in Hertz and  ‘Duration’ time in miliseconds.
•	kbhit(): - It returns a non-zero integer if a key is in the keyboard buffer. It will not wait for a key to be pressed.

	INCORPORATED DECLARED VARIABLES:

•	char name[20]: - To obtain Name of the candidate
•	int age: - To obtain Age of the candidate
•	char place[30]: - To obtain Place of Residence of Candidate
•	char money[10][10]: - To assign money to the varying levels of questions 
•	char ch: - To get Enter values
•	char answer='n': - To obtain the verdict of correct answer
•	char choice: - To select the mode of choice
•	char back: - To jump between functions
•	int level: - To specify level of Questions
•	char ans[]: - To declare the list of correct answers
•	char question[200]: - To specify the Questions
•	int l=0: - To specify the timer variable
•	char opta[40]: - To specify the Option ‘A’
•	char optb[40]: - To specify the Option ‘B’
•	char optc[40]: - To specify the Option ‘C’
•	char optd[40]: - To specify the Option ‘D’


![image](https://user-images.githubusercontent.com/57800546/151533900-ec2eaf40-8341-4bac-b12f-313ae2916465.png)



