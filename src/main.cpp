#include <iostream>
#include <mesh.h>
#include <vector>

extern std::vector<staticmesh> mesh;

int main()
{
  std::cout << "Hello World!" << std::endl;


  points pointobject;

  staticmesh anotherobject;

  anotherobject.showme();

  mesh.push_back(staticmesh());




  return 0;
}
