#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
bool endPrgm = false;
bool startPrgm = true;
bool endCont =false;
string firstNameHolder;
string lastNameHolder;

int main(){
int nameSelection=0;
int numFirst = 0;
int numSec = 0;
string contGame;
string strName;
string enterSpace = " ";
cout<<endl;
cout<<"Sudo-Random Name Generator"<<endl;


  do{
    ///////////////Random Number Generator//////////////
    srand(time(NULL));
    numFirst = rand() % 5+0; //Random number between 0 and 5
    numSec = rand() % 5+0;   //Random number between 0 and 5

      do{
        cout<<endl;
        cout<<"Enter the desired name:"<<endl;
        cout<<" 1. Superhero"<<endl;
        cout<<" 2. Supervillian"<<endl;
        cout<<" 3. Secret Identity"<<endl;
        cin>>nameSelection;

      }while(((nameSelection!=1)&&(nameSelection!=2)&&(nameSelection!=3))&&(startPrgm==true));
      startPrgm=false;
      cout<<endl;

if(nameSelection==1){/////////////Superhero Names ///////////////////////////
      string firstNameHolder[6] = {"Black","Red","Light","Pink","Green","..."};
      string lastNameHolder[6] = {"Cloud","Bunny","Lance","Ice","King","..."};

//cout<<"1st rand # "<<numFirst<<endl; Used for debugging
//cout<<"2st rand # "<<numSec<<endl;
strName = firstNameHolder[numFirst] + enterSpace + lastNameHolder[numSec];
nameSelection=0;

}/////////////////////////////////////////////////////////////////////////

else if(nameSelection==2){////////////////Supervillian Names//////////////////
  string firstNameHolder[6] = {"Lost","Red","Dark","Bad","Evil","..."};
  string lastNameHolder[6] = {"Wisp","Kill","Cost","Doom","Chaos",".."};
  strName = firstNameHolder[numFirst] + enterSpace + lastNameHolder[numSec];
  nameSelection=0;
}//////////////////////////////////////////////////////////////////////////

else if(nameSelection==3){////////////////Secret Identity names/////////////////
  string firstNameHolder[6] = {"Clark","Reid","Bruce","Kevin","Zach","..."};
  string lastNameHolder[6] = {"Dale","Kent","Ford","Wayne","Vanet","..."};
  strName = firstNameHolder[numFirst] + enterSpace + lastNameHolder[numSec];
  nameSelection=0;
}/////////////////////////Print name/////////////////////////////////////////

      cout<<strName<<endl;
      cout<<endl;
      cout<<"Would you like to play again?"<<endl;
      cout<<"'Yes' or 'No'?"<<endl;

do{///////////////////////////Continue Game or Stop////////////////////////////
      cin>>contGame;
      if((contGame=="Yes")||(contGame=="yes")||(contGame=="y")||(contGame=="YES")||(contGame=="Y")||(contGame=="1")){
        startPrgm=true;
        endCont=true;
      }
      else if((contGame=="No")||(contGame=="no")||(contGame=="n")||(contGame=="NO")||(contGame=="N")||(contGame=="2")){
        cout<<"Thanks for playing."<<endl;
        endPrgm=true;
        endCont=true;
      }
      else{
        cout<<"Re-enter: 'Yes' or 'No'"<<endl;
      }
}while(endCont==false);




    }while(endPrgm==false);
return 0;
}
