#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

string vowel(string S){
  string output;
  for(int i=0;i<S.length();i++){
    if(S[i]=='a' or S[i]=='e' or S[i]=='i' or S[i]=='o' or S[i]=='u'){
      output+=S[i];
    }
  }
  return output;
}

int main(){
  string S="aeoibsddaeioudb";
  cout<<vowel(S);
}
