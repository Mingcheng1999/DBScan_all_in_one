#ifndef Random_Generator_H
#define Random_Generator_H

#include <string>

double rand_float(double a, double b);
void generate_data(double range, unsigned int size, std::string const& type);
void generate_data(double range, unsigned int size, double delta);
#endif  