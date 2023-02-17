#include <iostream>
#include "reverseorder.h"
#include <fstream>
#include <cstdlib>
#include <climits>

//This function should print out the West basin elevation for all days in the interval in reverse chronological order.

void reverse_order(std::string date1, std::string date2){
  
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()) {
    std::cerr << "File cannot be opened for reading." << std::endl;
    exit(1); 
  }
  
  std:: string junk; 
  getline(fin, junk);

  //declare variables
  std:: string matchDate;
  double eastSt, eastEl;
  double westSt, westEl;

  std:: string westElevationDates[365]; //creating an array of dates with this size
  double westElevationFeet[365]; //creating an array of west elevation with this size
  
  int count = 0;

  while(fin >> matchDate >> eastSt >> eastEl >> westSt >> westEl){
    if ((matchDate >= date1) && (matchDate <= date2)) {
      count ++; //counting the number of instances in between date1 and date2
      //std:: cout << westEl << ","; //regular order
      westElevationDates[count] = matchDate; 
      westElevationFeet[count] = westEl; 
      }
  }
  
  for(int i = count; i > 0; i--){ //reverse chronological order
    std:: cout << westElevationDates[i] << "   " << westElevationFeet[i] << " days" << std ::endl;
  }

  fin.close();
}
