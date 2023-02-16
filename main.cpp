#include <iostream>
#include "reservoir.h"
#include <fstream>
#include <cstdlib>
#include <climits>


int main()
{

  //testing Task A
  std::cout << "The East Basin storage on 01/01/2018 " << get_east_storage("01/01/2018") << " is billion gallons." << std::endl; 
  std::cout << "The East Basin storage on 01/02/2018 " << get_east_storage("01/02/2018") << " is billion gallons." << std::endl; 

  //testing Task B
  std:: cout << "The minimum storage in the East Basin is " << get_min_east() << " is billion gallons." << std:: endl;
  std:: cout << "The maximum storage in the East Basin is " << get_max_east() << " is billion gallons." << std:: endl;

  //testing Task C
  std:: cout << "Higher basin: " << compare_basins("01/03/2018") << std:: endl;
  std:: cout << "Higher basin: " << compare_basins("01/10/2018") << std:: endl;

  //testing Task D


  return 0;
}
