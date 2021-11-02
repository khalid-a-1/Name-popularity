/*
* File: pp1R.cpp
* --------------------------------------------
* This is the client code for the files.
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>
#include "pp1.h"

using namespace std;

int main(){
  int v;
  cout<<"Choose one of the options…"<<'\n'<<"1. Ranking of the name for the year"<<'\n'<<"2. Displays the names that are used for both genders";
  cout<<'\n'<<"3. Display the most popular three names starting with a letter"<<'\n'<<"4. Exit"<<endl;
  cout<<"Enter an option number: ";
  cin>>v;
  if (v == 1){
    part1();
    cout<<endl;
  }
  else if (v == 2){
    part2();
    cout<<endl;
  }
  else if (v == 3){
    part3();
    cout<<endl;
  }
  else if (v == 4){
    cout<< "Please choose an option from the above menu."<< endl;
  }
  return 0;
}
