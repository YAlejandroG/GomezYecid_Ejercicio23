#include <iostream>
#include <random>
#include <cmath>
#include <stdlib.h>

int main(){
  int i;
  float pi = 2.0*asin(1.0);
  float theta = 0.0;
  float x = 0.0;
  float y = 0.0;
  
  srand48(8);

  i = 0;
  while(sqrt(x*x+y*y)<100){  
    theta = drand48()*2.0*pi;
    x = x + cos(theta);
    y = y + sin(theta);
    std::cout << x << " " << y << std::endl;
    i++;
  }
  
  return 0;
}

