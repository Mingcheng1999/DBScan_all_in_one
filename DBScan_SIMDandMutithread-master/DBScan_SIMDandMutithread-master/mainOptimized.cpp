
#include <fstream>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <omp.h>

#include "DBSCanOptimized.hpp"

void read_file(std::vector<Point> &p);

int main(int argc,char ** argv) {

  if(argc>=2){
  
    omp_set_num_threads(atoi(argv[1]));
  }


  double eps=2.0;
  unsigned int MinPts=3;
  
  std::vector<Point> p;
  p.reserve(10);



  read_file(p);
  
  std::vector<unsigned int> iVec = DBSCan(p, eps, MinPts);
  return 0;
}

void read_file(std::vector<Point> &pVec) {
  std::string filePath = "../data/sample.dat";
  std::ifstream input(filePath);
  std::string line;
  double x, y;
  Point p1;
  int flag=0;

  //#pragma omp parallel
  while(flag==0)
  {
  
    //#pragma omp critical
    //{
    getline(input, line);
    //#pragma omp critical
    input >> x >> y;
    
    p1.x = x;
    p1.y = y;
    p1.grp_id=POINT_UNDEFINED;
    pVec.push_back(p1);
    //}
    
    if(input.fail()){
        flag=1;
    }
    
  }
    //std::cout << pVec.size();
}
