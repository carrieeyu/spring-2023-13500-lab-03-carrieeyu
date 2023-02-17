#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"
#include <fstream>
#include <cstdlib>
#include <climits>

int main()
{

  //testing Task A
  std::cout << "The East Basin storage on 01/01/2018 " << "is " << get_east_storage("01/01/2018") << " billion gallons." << std::endl; 

  std::cout << "The East Basin storage on 05/20/2018 " << "is " << get_east_storage("05/20/2018") << " is billion gallons." << std::endl; 
  //--------------------------------------------------------
  
  //testing Task B
  std:: cout << "The minimum storage in the East Basin is " << get_min_east() << " is billion gallons." << std:: endl;

  std:: cout << "The maximum storage in the East Basin is " << get_max_east() << " is billion gallons." << std:: endl;
  //--------------------------------------------------------
  
  //testing Task C
  std:: cout << "Higher basin: " << compare_basins("09/13/2018") << std:: endl;

  std:: cout << "Higher basin: " << compare_basins("09/17/2018") << std:: endl;
  //--------------------------------------------------------
  
  //testing Task D
  std:: cout << "West basin elevation for the days between 01/04/2018 and 01/10/2018:" << std:: endl;
  reverse_order("01/04/2018", "01/10/2018");

  std:: cout << "West basin elevation for the days between 05/29/2018 and 06/02/2018:" << std:: endl;
  reverse_order("05/29/2018", "06/02/2018");


  return 0;
}
