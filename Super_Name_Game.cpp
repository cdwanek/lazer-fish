#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int endPrgm = 0;

int main(){
int nameSelection = 0;

  do{

      do{
        cout<<endl;
        cout<<"Enter the desired name:"<<endl;
        cout<<" 1. Superhero"<<endl;
        cout<<" 2. Supervillian"<<endl;
        cout<<" 3. Secret Identity"<<endl;
        cin>>nameSelection;

      }while((nameSelection!=1)&&(nameSelection!=2)&&(nameSelection!=3));
      cout<<"Cool"<<endl;
      endPrgm=1;




    }while(endPrgm!=1);
return 0;
}
