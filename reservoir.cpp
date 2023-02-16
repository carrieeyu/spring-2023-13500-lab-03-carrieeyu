#include <iostream>
#include "reservoir.h"
#include <fstream>
#include <cstdlib>
#include <climits>

//Task A
double get_east_storage(std::string date){

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); // exit if failed to open the file
}

  std:: string junk; // new string variable
  getline(fin, junk); // read one line from the file 

  std:: string matchDate;
  double eastSt;

  while(fin >> matchDate >> eastSt){
    if(date == matchDate){
      return eastSt;
    }
    fin.ignore(INT_MAX, '\n');
  }

  fin.close();
  exit(1);

  return 0;
}


//Task B
double get_min_east(){

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); 
  }
    std:: string junk; 
    getline(fin, junk); 

    std:: string matchDate;
    double eastSt;
    double minEast = INT_MAX;

    while(fin >> matchDate >> eastSt){
      if (eastSt < minEast){
        minEast = eastSt;
        return minEast;
      }
      fin.ignore(INT_MAX, '\n');
    }

  fin.close();
  exit(1);
    
    return 0;
}

//Task B--> need to fix later
double get_max_east(){

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); 
  }
    std:: string junk; 
    getline(fin, junk); 

    std:: string matchDate;
    double eastSt;
    double maxEast = INT_MIN;

    while(fin >> matchDate >> eastSt){
      if (eastSt > maxEast){
        maxEast = eastSt;
        return maxEast;
      }
      fin.ignore(INT_MAX, '\n');
    }

  fin.close();
  exit(1);
    
    return 0;
}


//Task C
std::string compare_basins(std::string date){

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); 
  }
    std:: string junk; 
    getline(fin, junk);

  std:: string matchDate;
  double eastEl;
  double westEl;

  while(fin >> matchDate >> eastEl >> westEl){
    if (date == matchDate){
      if(eastEl == westEl){
        return "Equal";
      }
      else if (eastEl > westEl){
        return "East";
      }
      else{
        return "West";
      }
    }
    fin.ignore(INT_MAX, '\n');
  }

  fin.close();
  exit(1);
  
  return 0;
}
