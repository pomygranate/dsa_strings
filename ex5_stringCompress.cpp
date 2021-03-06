#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//////////////////////////// BETTER SOLUTION ///////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

//LINEAR COMPLEXITY
string compress2(vector<char>& chars) {
  string output;
  int n = chars.size();
  for(int i=0; i<n; i++){
    int count=1;
    while(i<n-1 and chars[i+1] == chars[i]){
      count++;
      i++;
    }
    output += chars[i];
    if(count>1){
      output += to_string(count);
    }
  }
  return output;

}

/////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////


string compress(vector<char>& chars) {
  string s="";
  char ch=chars[0];
  int num=1;
  for(int i=1;i<chars.size();i++){
    cout<<chars[i]<<" "<<ch<<endl;
    if(ch == chars[i]){
      num++;
      if(i==chars.size()-1){
        s=s+ch+to_string(num);
      }
    }
    else{
      if(num>1){
        cout<<num<<endl;
        s=s+ch+to_string(num);
      }
      else{
        s=s+ch;
      }
      num=1;
    }
    ch=chars[i];
  }
  return s;
    // your code goes here
}

int main(){
  std::string s = "aaabccccc";

  std::vector<char> v(s.begin(), s.end());
  cout<<compress2(v);
}
