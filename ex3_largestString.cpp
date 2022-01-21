/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////// STRINGS METHODS////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  char sentence[1000];
  char largest[1000];

  int n;
  cin>>n;
  cin.get();
  int max=0;

  while(n--){
    cin.getline(sentence,1000);
    int len = strlen(sentence);
    if(len>max){
      max=len;
      strcpy(largest,sentence);

    }

  }

  cout<<largest<<endl;
  return 0;

}
