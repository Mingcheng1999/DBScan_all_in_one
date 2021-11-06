//main function TODO:better revise it in another file
#include <fstream>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

#include "include/DataGenerator.hpp"
#include "include/Point.hpp"
#include "include/DBSCan.hpp"

void read_file(std::vector<Point>);
void construct_datasample();
void print_point_vector(std::vector<Point>&);

int main() {

  double eps=2.0;
  int MinPts=3;
  std::vector<Point> Dataset;
  read_file(Dataset);

  DBSCan (Dataset, eps, MinPts);

  std::sort(Dataset.begin(),Dataset.end(), &sortMe);
  
  print_point_vector(Dataset);//testing
  return 0;
} 

void read_file(std::vector<Point> Dataset) {
  std::string filePath = "Data/sample.dat";

  std::ifstream input(filePath);
  std::string line;
  while(input)
  {
    getline(input, line);
    double x, y;
    input >> x >> y;
    Point point(x,y);
    
    //the last line will not be push twice because of the getline() problem in c++
    if(input.fail()){
        break;
    
    }
    
    //add new data to the Vector
    Dataset.push_back(point);
  }
}

void construct_data_sample() {

}

//this function is used for testing vector point
void print_point_vector(std::vector<Point> &a) {
   std::cout << "This is a new point: \n";

   for(unsigned int i = 0; i < a.size(); i++){
   std::cout << "i is:";
   std::cout << i;
   std::cout << "__\n";
   std::cout << "the x is";
   std::cout << a.at(i).get_x() << ' ';
   std::cout << "||\n";
   std::cout << "the y is";
   std::cout << a.at(i).get_y() << ' ';
   std::cout << "||\n";
   std::cout << "it belongs to cluster:";
   std::cout << a.at(i).get_cluster() << ' ';
   std::cout << "||\n";
   }
}