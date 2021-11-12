#include <Eigen/Dense>
#include <Eigen/Geometry>

#include <algorithm>
#include <numeric>
#include <cmath>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <memory>
#include <ostream>
#include <random>
#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

#define FMT_HEADER_ONLY
#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <fplus/fplus.hpp>
#include <fplus/generate.hpp>

//#inlcude <sciplot/sciplot.hpp>
//#inlcude <sciplot/Plot.hpp>

int main(){
  std::vector<int> v = {1, 2, 3};
  fmt::print(" v = {}\n", v);
  return 0;
}
