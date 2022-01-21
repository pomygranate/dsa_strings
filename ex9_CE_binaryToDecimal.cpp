#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<iostream>
#include<sstream>

using namespace std;

int binaryToDecimal(string S){
  int n= S.length();
  int output=0;
  int power=0;
  for(int i=n-1;i>=0;i--){
    stringstream ss;
    int eq=0;
    ss << S[i];
    ss >> eq;
    eq=eq*(pow(2,power));
    output+=eq;
    power++;
    }
  return output;
}

int main(){
  string S="111";
  cout<<binaryToDecimal(S);
}
