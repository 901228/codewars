#include <iostream>

std::string factors(int);

int main() {

    int s = 67;
    std::cout << factors(18) << std::endl;

    return 0;
}

std::string factors(int lst) {
  
  int count = 0;
  int i = 2;
  std::string de = "";
  while ( lst > 1 || count != 0 ) {
    
    if ( lst % i == 0 ) {
      
      lst /= i;
      count++;
    }
    else {
      
      if ( count != 0 ) {
        
        if ( count > 1 )
          de += "(" + std::to_string(i) + "**" + std::to_string(count) + ")";
        else
            de += "(" + std::to_string(i) + ")";
      }
      count = 0;
      i++;
    }
  }
  
  return de;
}
