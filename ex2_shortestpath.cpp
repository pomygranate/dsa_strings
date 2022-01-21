//cin.getline(variable,limit,criteria);
//eg. cin.getline(sent,100,'.');

#include<iostream>
using namespace std;
int main()
{
  char ch;
  int x=0;
  int y=0;

  ch=cin.get();

////////////////////////////////////////////////////////////////////////////////
//////below one can also be done using cin.getline store path in char array/////
///// use for loop over array and do x++ or so... to get value//////////////////
////////////////////////////////////////////////////////////////////////////////

  while(ch != '\n'){

    if(ch == 'N'){
      y++;
    }
    else if(ch == 'S'){
      y--;
    }
    else if(ch == 'E'){
      x++;
    }
    else if(ch == 'W'){
      x--;
    }

    ch=cin.get();

  }
///////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

  while(x>0){
    cout<<"E";
    x--;
  }
  while(x<0){
    cout<<"W";
    x++;
  }
  while(y>0){
    cout<<"N";
    y--;
  }
  while(y<0){
    cout<<"S";
    y++;
  }




}
