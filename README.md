# KBC

# Project Name
> Outline a brief description of your project.
> Live demo [_here_](https://www.example.com). <!-- If you have the project hosted somewhere, include the link here. -->

## Table of Contents
* [Characterstics Of The Program](#characterstics-of-the-program)
* [Program Outline](#program-outline)
* [Screenshots](#screenshots)
* [Room for Improvement](#room-for-improvement)
* [Acknowledgements](#acknowledgements)
* [Contact](#contact)


## Room for Improvement
Include areas you believe need improvement / could be improved. Also add TODOs for future development.

Room for improvement:
- Improvement to be done 1
- Improvement to be done 2

To do:
- Feature to be added 1
- Feature to be added 2


## Acknowledgements
Give credit here.
- This project was inspired by...
- This project was based on [this tutorial](https://www.example.com).
- Many thanks to...


## Contact
Created by [@flynerdpl](https://www.flynerd.pl/) - feel free to contact me!


<!-- Optional -->
<!-- ## License -->
<!-- This project is open source and available under the [... License](). -->

<!-- You don't have to include all sections - just the one's relevant to your project -->

## Characterstics Of The Program 

The C++ Program titled, “KAUN BANEGA CROREPATI” brings forth the Computerized version of the globally acclaimed Television show syndicated by the same name, maneuvered with the help of the C++ Language and its multifarious features.

An attempt at the Computerized “Kaun Banega Crorepati” Quiz Show allows the Users to test their Knowledge to the fullest extent, driving minds to excogitate with exciting questions in limited time frames.

Identical circumstances to the Television Show provide the user with an experience unlike any before. Specified time limits with timer sounds and Computerized reverberations extend throughout the duration of the Quiz and keep the excitement and tension whirring.

The Project utilizes and involves the following C++ topics in the development of the “KAUN BANEGA CROREPATI” computerized panel game system.

* DATA FILE HANDLING
* CLASSES AND OBJECTS
* FUNCTIONS

The Program is developed to provide the User with three options, which are based on the Basic Quizzing format.


### First Choice: EVALUATION MODE 

This Option provides the User with the hands-on experience of the Quiz along with the basic validation features for the panel game, wherein, the User can have a meticulous look into the Project. It provides the Evaluator with the Answer Key to the entire Quiz show to be able to conduct in-depth analysis through the course of the Quiz and experience all possible outcomes.


### Second Choice: TEST MODE:
This Option provides the testing frame for the User to enter the competition and obtain the glory of a “Kaun Baega Crorepati” victor. 10 Questions of gradually ascending complexity test the User within the determined timespan to reach the ultimate goal of overcoming their own barriers of Knowledge.
It provides conditions much alike that of the actual Quiz Show by gathering Candidate Information and allotting prizes for each varying level of question intricacy.
It also gives the User the ability to Return to Menu at any given point of time, using the specified ‘M’ or ‘m’ keys on the keyboard, with their yielded purse or Quit to Exit the Program instantly with the ‘Q’ or ‘q’ keys. 


### Third Choice: QUIT MODE:
This Option gives the User the possibility of exiting the panel show instantly, at any point of time. 




## Program Outline:

### Incorporated Header Files 

• #include<iostream.h>: - This header file is used for input and output function and is a C++ library function 

•	#include<conio.h>: - This header file is a C header file used mostly by MS-DOS compilers to provide console input/output 

•	#include<fstream.h>: - This header file is a console input/output stream to operate on files 

•	#include<stdio.h>: - This header file is used for input output function and is a C library function

•	#include<process.h>: - This header file includes macros and declarations. These are especially used during work with thread and processes. 

•	#include<string.h>: - This header file performs string manipulation operations

•	#include<windows.h>: - This header file contains declarations of all basic windows macros and different typesdef, like the Sleep() function.

•	#include<ctype.h>: - This header file performs character type functions


### Incorporated Declared Functions:

•	char checkans(char answer,int level): - To check whether the option selected by the user is correct.

•	Sleep(Time): - Pauses the program timer for ‘Time’ number of seconds

•	Beep(Frequency, Duration):- Generates synchronous tones on the speaker of ‘Frequency’ Frequency in Hertz and  ‘Duration’ time in miliseconds.

•	kbhit(): - It returns a non-zero integer if a key is in the keyboard buffer. It will not wait for a key to be pressed.


### Incorporated Declared Variables:

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




## Screenshots


### HOME PAGE   

![image](https://user-images.githubusercontent.com/57800546/151584457-3ae4b798-fe47-48dc-bd00-afbb591a1900.png)

### CHOICE 1: EVALUATION MODE

#### USER ENTRY FORM

![image](https://user-images.githubusercontent.com/57800546/151584581-3974177b-4aaf-4cf6-8173-8638de7c7660.png)

          
#### SAMPLE EVALUATION MODE

![image](https://user-images.githubusercontent.com/57800546/151584631-14c0dc00-ea9d-444b-8a41-534670e441f3.png)

 


### 3)	CHOICE 2: TEST MODE
#### USER ENTRY FORM

![image](https://user-images.githubusercontent.com/57800546/151584682-9a18172d-f61e-44a5-9ec0-7493f90e4763.png)


 
#### RULES AND REGULATIONS

![image](https://user-images.githubusercontent.com/57800546/151584728-944bce16-38df-4516-ba0f-6196632526a7.png)

 

#### SAMPLE TEST MODE

![image](https://user-images.githubusercontent.com/57800546/151584815-66f6272b-df2d-4f56-b0db-ff9132cac85e.png)

 



#### CORRECT ANSWER

![image](https://user-images.githubusercontent.com/57800546/151584841-955d066a-1f93-40ea-b3ba-509e1c4f771c.png)

 

#### CORRECT ANSWER TRANSITION

![image](https://user-images.githubusercontent.com/57800546/151584890-7ca2f576-fb0b-4e3f-ac0a-c4db15dab8ac.png)


 

#### WRONG ANSWER

![image](https://user-images.githubusercontent.com/57800546/151585007-451a93b4-3439-4c6e-9e48-dd18b10c880f.png)

 

#### WRONG ANSWER TRANSITION

![image](https://user-images.githubusercontent.com/57800546/151585026-7b7d302e-72a1-4e92-80d7-dea005a031d5.png)

 

#### WINNER

![image](https://user-images.githubusercontent.com/57800546/151585037-e51d2089-9cb4-4780-9390-d162ca52a4aa.png)

 


#### RETURN TO MENU

![image](https://user-images.githubusercontent.com/57800546/151585051-84a6e52c-c0a5-4230-ad60-010b43d11b55.png)

 
#### QUIT                  

![image](https://user-images.githubusercontent.com/57800546/151585071-8bab770f-2513-49c9-a3c9-1d428d4e51e8.png)








