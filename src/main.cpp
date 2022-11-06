#include <iostream>
#include <asio.hpp>

void print(const asio::error_code& /*e*/){
  std::cout << "Hello, world!" << std::endl;
}

int main(int argc,const char** argv){
  asio::io_context io;

  asio::steady_timer t(io, asio::chrono::seconds(5));
  t.wait();
  io.run();
  return 0;
}