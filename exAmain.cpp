// exAmain.cpp
// ENSF 480 Lab 1 -  FALL 2018 - Exercise A
// Author - M. Moussavi

#include <iostream>
using namespace std;
#include "GraphicsWorld.h"

int main(void)
{
  GraphicsWorld* graphics = new GraphicsWorld();
  graphics->run();
  
  cout << "\nProgram terminated successfully." <<endl;
  return 0;
}

