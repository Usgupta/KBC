#include<iostream>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<string.h>
#include<windows.h>
#include<ctype.h>

class candidate
{
   public:
   char name[20];
   int age;
   char place[30];
} participant;

char money[10][10]={"10000","40000","80000","1.6 lakh","6.4 lakh","12.5 lakh","25 lakh","50 lakh","1 crore","5 crore"};

char ch; //to get enter values

char answer='n';  //for the answer

char choice;// for the mode

char back;// to jump between functions

int level,i;


char ans[]={'D','B','D','C','D','B','D','A','C','D'};

fstream fio;

class quizquestion

{
 public:
 char question[200],opta[40],optb[40],optc[40],optd[40];
} ques[10];

//Checking the Answer

char checkans(char answer,int level);

int l=0;  //timer variable

void main()
{
  fstream fout("KBC.dat",ios::binary);

  strcpy(ques[0].question,"Q1. Which among the following
  companies has crossed the market value 6 trillion in March
  2019?\n");
  strcpy(ques[0].opta,"A. ONGC");
  strcpy(ques[0].optb,"B. TCS");
  strcpy(ques[0].optc,"C. Reliance Industries");
  strcpy(ques[0].optd,"D. HDFC");

  strcpy(ques[1].question,"Q2. What constituencies did PM Mr.
  Narendra Modi and opponent Rahul Gandhi contest elections
  from in 2019?\n");
  strcpy(ques[1].opta,"A. Wayanad and Varanasi");
  strcpy(ques[1].optb,"B. Varanasi and Wayanad");
  strcpy(ques[1].optc,"C. Both from Varanasi");
  strcpy(ques[1].optd,"D. Both from Wayanad");

  strcpy(ques[2].question,"Q3. Potassium Permanganate is used for
  purifying drinking water,because\n");
  strcpy(ques[2].opta,"A. it is a sterilising agent");
  strcpy(ques[2].optb,"B. it is a reducing agent");
  strcpy(ques[2].optc,"C. it dissolves the impurities of water");
  strcpy(ques[2].optd,"D. it is an oxidising agent");

  strcpy(ques[3].question,"Q4. Who was the chief guest of Indian
  Republic Day 2019?");
  strcpy(ques[3].opta,"A. Shinzo Abe of Japan");
  strcpy(ques[3].optb,"B. Jair Bolsonaro of Brazil");
  strcpy(ques[3].optc,"C. Cyril Ramaphosa of South Africa");
  strcpy(ques[3].optd,"D. Emmanuel Macron of France");

  strcpy(ques[4].question,"Q5. Which of the following movie won
  the Best Picture Oscar award in 2019?\n");
  strcpy(ques[4].opta,"A. Black Panther");
  strcpy(ques[4].optb,"B. BlacKkKlansman");
  strcpy(ques[4].optc,"C. A Star is born");
  strcpy(ques[4].optd,"D. Green Book");

  strcpy(ques[5].question,"Q6. The 10th 'BRICS' Summit 2018 was
  held in which of the following countries?\n");
  strcpy(ques[5].opta,"A. Brazil");
  strcpy(ques[5].optb,"B. South Africa");
  strcpy(ques[5].optc,"C. Russia");
  strcpy(ques[5].optd,"D. China");

  strcpy(ques[6].question,"Q7. The world's largest Indian national
  flag was unfurled (in May 2018) in one of the cities of which State
  of India?\n");
  strcpy(ques[6].opta,"A. Karnataka");
  strcpy(ques[6].optb,"B. Andhra Pradesh");
  strcpy(ques[6].optc,"C. West Bengal");
  strcpy(ques[6].optd,"D. Telangana");

  strcpy(ques[7].question,"Q8. What is the national flower of Unites
  States of America?\n");
  strcpy(ques[7].opta,"A. Rose");
  strcpy(ques[7].optb,"B. Lily");
  strcpy(ques[7].optc,"C. Hibiscus");
  strcpy(ques[7].optd,"D. Dahlia");

  strcpy(ques[8].question,"Q9. What is the capital of Morocco?\n");
  strcpy(ques[8].opta,"A. Riga");
  strcpy(ques[8].optb,"B. Valletta");
  strcpy(ques[8].optc,"C. Rabat");
  strcpy(ques[8].optd,"D. Windhoek");

  strcpy(ques[9].question,"Q10. When is the National Sports Day
  celebrated in India every year?\n");
  strcpy(ques[9].opta,"A. 26th Aug");
  strcpy(ques[9].optb,"B. 27th Aug");
  strcpy(ques[9].optc,"C. 28th Aug");
  strcpy(ques[9].optd,"D. 29th Aug");

  for(int i=0;i<10;i++)
  {
	  fout.write((char*)&ques[i],sizeof(ques[i]));
  }
  fout.close();

//Defining the Modes

  menu:
  clrscr();
  cout<<"\n\t\t\t\t\t  Welcome to KAUN BANEGA CROREPATI
\t\t\n";
  cout<<"\n\t\t MAIN MENU \t\t\n";

  cout<< "\n\n \t\t\t 1. Evaluation Mode \n\n";
  cout<< "\n\n \t\t\t 2. Test Mode \n\n";
  cout<< "\n\n \t\t\t 3. Quit \n\n";

  cout<<" \n\n\t\t\t Kindly specify the mode of usage";
  cin>>choice;
	if (choice=='3'||(choice!='2' && choice!='1'))
   	exit(0);
  clrscr();

//Asking for person’s information*********************************

  fio.open("candidate.dat",ios::out|ios::binary);
  cout<<"\n\t\t\t\t\t  Welcome to KAUN BANEGA CROREPATI
\t\t\n";
  cout<<"\n\t\t\t Kindly Enter your Name \t\t\t\n";
  cout<<"\n \t\t\t\t ";
  cin.getline(participant.name,20);
  cin.getline(participant.name,20);
  cout<<"\t\t\t";
  cout<<"\n\t\t\t Kindly Enter your Age \t\t\t\n";
  cout<<"\n \t\t\t\t ";
  cin>>participant.age;
  cout<<"\n \t\t\t";
  cout<<"\n\t\t\t Kindly Enter your Place of Residence\t\t\t\n";
  cout<<"\n \t\t\t\t ";
  cin>>participant.place;
  cout<<"\n \t\t\t";
  fio.write((char*)&participant,sizeof(participant));
  fio.close();
  cout<<"\n\t\tPress Enter to Continue\n\t";
  cin.get(ch);           //check if can be made better
  cin.get(ch);
  if (ch =='\n')
             clrscr();
  else
             {
             cout<<"\t\tInvalid Input. Going back to Menu. Press enter";
             cin.get(ch);
             cin.get(ch);

             if (ch =='\n')
             {	clrscr();
               	goto menu;
             }
             else
                 exit(0);
             }
//Telling the Guidelines of Game**********************************

  fio.open("rules.txt",ios::in);
  char textch;
  while(!fio.eof())
   {
        fio.get(textch);
        cout<<textch;
   }
  fio.close();
  cout<<"\a";
  cout<<"\n\t\tPress Enter to Continue\n\t";
  cin.get(ch);
  if (ch =='\n')
  		clrscr();

  else
       {
 	   cout<<"Invalid input. Going back to Menu. Press Enter to
            Continue";
            cin.get(ch);
            cin.get(ch);
                  if (ch =='\n')
               	{
                           clrscr();
               		goto menu;
                  }
                  else
               	         exit(0);
             }
//Starting the Game**********************************************


 fout.open("KBC.dat",ios::binary);


 for(i=0;i<10;i++)
 {
     start:
     clrscr();
     cout<<"\t\t\t \n\n\n\n"<<"COMING UP: Question for \n\n
     "<<"\t\t\t\t"<<money[i]<<" Rupees";
     Sleep(1000);
     Beep(2000,250);
     Beep(1200,200);
     Beep(1400,280);
     Beep(1000,200);
     Beep(800,300);

      clrscr();

      cout<<"\t\t\t\t\t\tPress Q or q to Quit\n";
      cout<<"\t\t\t\t\t\tPress M or m to Go to Menu\n";

// Code for the Evaluation Mode
      if (choice=='1')
      for(int p=0;p<10;p++)
      cout<<(p+1)<<"."<<ans[p]<<" ";
      fout.read((char*)&ques[i], sizeof(ques[i]));
   cout<<"\n\n"<<ques[i].question<<"\n\n\n"<<ques[i].opta<<"\n\n\n"<<ques[i].optb<<"\n\n\n"<<ques[i].optc<<"\n\n\n"<<ques[i].optd;
      cout<<"\n\n \t\tYou have 20 seconds to answer \n ";
      cout<<"\n \t\t Enter your answer here (Just the Option) \n";


//**********************Timer******************************
      while(l<20 && answer == 'n')

      {
         Sleep(1000);
	Beep(1000,100);
	cout<<"\t\t\t\t";
	cout<<(20-l)<<" secs left ";
	cout<<"\r";
         if(kbhit())
		{
		   answer=getch();
		   break;
	        }
         l++;
      }

      if (l==20)
      {
           Beep(600,1000);
            cout<<"\n\t\tTIME OVER.";
      }

      back=checkans(answer,(i+1));

      answer='n';
//Code for Jumping ***********************
      if (back=='2')
	  goto menu;
      else if(back=='1')
	  goto start;
      else
	  continue;
 }
 fout.close();
 getch();
}
//*********************checkans Function*************************
char checkans(char answer,int level)
{
    answer=toupper(answer);
    if (answer==ans[level-1])
   	{
	   if(level==10)
            {
                 clrscr();
	        fio.open("candidate.dat",ios::out|ios::binary);
                 fio.read((char*)&participant,sizeof(participant));
                 cout<<"\n\n\t\t\tPartcipant name:
                 "<<participant.name<<"\n\n\t\t\tPartcipant age:
                 "<<participant.age<<"\n\n\t\t\tPartcipant Place of
                 Residence:"<<participant.place<<endl;
	        fio.close();
                 cout<<"\n\n\tCONGRATULATIONS! You have become a
                 Crorepati! You win the Ultimate sum of 5 CRORE
                 Rupees!";
	        Beep(2000,200);
	        Beep(2500,200);
	        Beep(3000,300);
	        Beep(1000,200);
	        Beep(2000,200);
	        Beep(2500,200);
	        Beep(3000,300);
	        Beep(1000,200);
	        Beep(2000,200);
	        Beep(2500,200);
	        Beep(3000,300);
                 Sleep(4000);
	        return '2';
	   }
	   cout<<"\n\t Your Answer  "<< answer <<" is correct \n\t";
	   cout<<"\n\tCongratulations! You have won "<<money[level-
            1]<<" rupees ";
	   Beep(2000,200);
	   Beep(2500,200);
            Beep(3000,300);

	   l=0; //to make the timer to 0 again
	   start:
	   cout<<"\n\n\t\tpress enter to continue\n\t";
            cin.get(ch);

	   if (ch =='\n')
	   {
                clrscr();
	       return 'n';
            }
	   else
	   {
                cout<<"Invalid Input. Going back to Menu. Press Enter to
                Continue";
                cin.get(ch);
	       cin.get(ch);
	       if (ch =='\n')
	       {
                    clrscr();
		  return '2';
                }
                else
               	  exit(0);
            }
  }

  else if(answer=='Q'||answer=='q')
  {
	clrscr();
	cout<<"\n\n\tQuitting.";
         if(i==0)
	        cout<<"\n\t\t\tYou have not won anything yet\n\n";
	else
                 cout<<"\n\t\tYou have won "<<money[level-2];

	cout<<"\n\t\tPress Enter to confirm Quitting\n\t\t \n \t\tTo
         return to Quiz, press any other key and then press Enter\t";
         cin.get(ch);
         if (ch =='\n')
		exit(0);
         else
	{
                  --i;
		goto start;
          }
  }
  else if(answer=='M')
  {
         clrscr();
	cout<<"\n\n\tGoing to Menu.";
         if(i==0)
	        cout<<"\n\t\t\tYou have not won anything yet\n\n";
	else
	        cout<<"\n\t\tYou have won "<<money[level-2];
         cout<<"\n\t\tPress enter to confirm going to Menu \n\t\t \n
         \t\tTo Return to Quiz, press any other key and then press
         Enter\t";
	cin.get(ch);
         if (ch =='\n')
          	return '2';
          else
          {
                 --i;
          	goto start;
          }

  }
  else
  {
             cout<<"\n\n\tSorry, your answer is incorrect. The Correct
             answer is "<< ans[level-1]<<endl;
	    Beep(800,200);
	    Beep(600,200);
	    Beep(500,300);

	     cout<<"\n\t\tPress Enter to Continue\n\t";
	     cin.get(ch);
	     cin.get(ch);
              if (ch =='\n'&& level>1)
              {
                       clrscr();
		     cout<<"\n\t You have won a Total of "<<money[level-
                       2]<<” Rupees”;
		     cout<<"\n\t\tPress Enter to Continue\n\t";
 		     cin.get(ch);
                       return '2';
              }
              else
              {
                 cout<<"\n\tYou didn't win any money";
                 cout<<"\n\t\tPress Enter to Continue\n\t";
                 cin.get(ch);
                 return '2';
              }
   }

}
