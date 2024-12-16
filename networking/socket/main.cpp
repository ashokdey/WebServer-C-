#include <iostream>
#include "listening_socket.hpp"

int main() 
{

  std::cout << "Starting..." << std::endl;
  std::cout << "Binding socket..." << std::endl;

  AD::BindingSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY);
}