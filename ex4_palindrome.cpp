#include<iostream>
#include <string>

using namespace std;
int main()
{
  string str;
  cin>>str;

  int len=0;
  len=str.length();

  bool answer=true;

  for(int i=0;i<int(len/2);i++){
    if(str[i]==str[len-1-i]){
      continue;
    }
    else{
      answer=false;
    }
  }

  cout<<answer<<endl;
  return 0;
}
