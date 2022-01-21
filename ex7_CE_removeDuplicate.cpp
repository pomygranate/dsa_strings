#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;

string removeDuplicate(string s){
  sort(s.begin(),s.end());
  int n=s.length();
  string output;
  for(int i=0;i<n;i++){
    while(i<n-1 and s[i+1]==s[i]){
      i++;
    }
  output+=s[i];
  }
  return output;
}

int main()
{
  string a="geeksforgeeks";
  cout<<removeDuplicate(a);
}
