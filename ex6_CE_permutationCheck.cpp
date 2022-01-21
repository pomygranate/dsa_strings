#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<iostream>

using namespace std;


bool arePermutation(string A,string B){
  int m = A.length();
  int n = B.length();
  if(m!=n){
    return false;
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());

    // Compare sorted strings
    for (int i = 0; i < n;  i++)
       if (A[i] != B[i])
         return false;

    return true;

}


int main(){
  string a="test";
  string b="ttew";
  cout<<arePermutation(a,b);
}
