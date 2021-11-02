/*
* File: pp1.cpp
* --------------------------------------------
* This program implements the pp1.h interface.
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

/** Implementation Notes: part1
* Part 1: Prompts the user to enter a year interval, gender, and name, and
*        displays the ranking and count of the name for years in interval.
* --------------------------------------------------------------
* The part1 function prompts the user to enter a year interval which using a for loop,
* is read in to input the corresponding files. We extract the data (rank, male name and
* count,female name and count) by declaring and assigning each as an array. A while loop
* reads the data into the arrays.Each year in the interval is looped with a for loop for
* each gender that iterates through, searches for the name, and displays its ranking for
* the inputted name and displays its ranking. An accumulator counts up the total number
* who have the name of the specified gender for each year.
*/

void part1()
{

  int x,y;
  cout<<"Enter an year interval from: ";
  cin>>  x;
  cout<<"to: ";
  cin>> y;
  ifstream input;

  string z;
  string gender;
  cout<< "Enter name: ";
  cin>> z;
  cout<< "Gender(F/M): ";
  cin>> gender;

  array<int, 1000> rank;
  array<string, 1000> mname;
  array<int, 1000> mnum;
  array<string, 1000> fname;
  array<int, 1000> fnum;

  int s;
  int sum = 0;
  for (int k = x; k<=y; k++){
    string a = to_string(k);
    ifstream input("babynamesranking"+a+".txt");

    if (!input){
        cout<< "File does not exist."<<endl;
    }


    int j=0;
    while(!input.eof()){
    // read data and add to the array
      input>> rank[j]>>mname[j]>>mnum[j]>>fname[j]>>fnum[j];
      j++;
    }

    if (gender == "F"){
      for (int i = 0; i<=1000; i++){
        if (z == fname[i]) s=i;
      }
      sum+=fnum[s];
      cout<<k<<" "<< "#"<<rank[s] << " "<< z << " "<< fnum[s]<<endl;
    }
    else {
      for (int i = 0; i<=1000; i++){
        if (z == mname[i]) s=i;
      }
      sum+=mnum[s];
      cout<<k<<" "<< "#"<<rank[s] << " "<< z << " "<< mnum[s]<<endl;
    }

  }
  cout<< "Total people that have the name "<<z<<" are: "<<sum<<endl;
  input.close();

}

/** Implementation Notes: part2
* Part 2: Prompts the user to enter a year, finds names used for both genders in
*         that year, then saves and displays them in a new file
* ------------------------------------------------------------------------------
* The part2 function is similar to the part1 function but uses a nested for
* loop to search for names found in both arrays, fname (female names) and mname
* (male names). It then creates a new file (commonname#year#.txt) and outputs
* the shared names to it.
*/

void part2()
{
  string y;
  cout<<"Enter a year for finding common names: ";
  cin>> y;

  ifstream input("babynamesranking"+y+".txt");

  if (!input){
      cout<< "File does not exist."<<endl;
  }


  array<int, 1000> rank;
  array<string, 1000> mname;
  array<int, 1000> mnum;
  array<string, 1000> fname;
  array<int, 1000> fnum;


  int j=0;
  while(!input.eof()){
    // read data and add to the array
    input>> rank[j]>>mname[j]>>mnum[j]>>fname[j]>>fnum[j];
    j++;
  }

  ofstream outfile("commonname#year#.txt");
  outfile<< "Names that are used for both boys and girls: "<<endl;

  string a,b;
  int c= 0;
  for (int i= 0; i< 1000; i++){
    a = fname[i];
    for (int k = 0; k < 1000; k++){
      b = mname[k];
      if (a == b) {
        c++;
        outfile<<left<<setw(14)<<a;
      }
    }
  }
  outfile<< left << '\n'<<"Total common names: "<<c<<endl;
  outfile.close();
  cout<<'\n'<< "Done"<< endl;
}


/** Implementation Notes: part3
* Part 3: Prompts the user to enter a year and letter and displays the most
*         popular three girl and boy names starting with that letter.
* --------------------------------------------------------------------------
* The part3 function is similar to the part1 and part2 functions but iterates
* through both the mname and fname arrays, selects those names starting with a
* given character inputted by the user and and outputs their ranks.
*/

void part3()
{
  char ch;
  string y;
  cout<<"Enter a letter to see most popular three names starts with: ";
  cin>> ch;
  cout<<"Enter an year: ";
  cin>> y;
  ch = ch -32;
  string x(1,ch);


  ifstream input("babynamesranking"+y+".txt");
  if (!input){
      cout<< "File does not exist."<<endl;
  }


  array<int, 1000> rank;
  array<string, 1000> mname;
  array<int, 1000> mnum;
  array<string, 1000> fname;
  array<int, 1000> fnum;


  int j=0;
  while(!input.eof()){
    // read data and add to the array
    input>> rank[j]>>mname[j]>>mnum[j]>>fname[j]>>fnum[j];
    j++;
  }


  string u,w;
  cout << '\n';
  cout<<"Male: "<<endl;
  cout << '\n';

  int s = 0;
  for (int i = 0; i < 1000; i++){
    u = mname[i];
    if (u[0] == x[0] && s<3) {
      s++;
      cout<<"#"<<s<<" "<<mname[i]<<endl;
    }
  }

  cout << '\n';
  cout<<"Female: "<<endl;
  cout << '\n';
  int n = 0;
  for (int i = 0; i < 1000; i++){
    w = fname[i];
    if (w[0] == x[0] && n<3) {
      n++;
      cout<<"#"<<s<<" "<<" "<<fname[i]<<endl;
    }
  }

  input.close();


}
