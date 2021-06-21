#include <iostream>
#include <map>
#include <vector>

using my_map_t = std::map<std::string, std::vector<double>>;

void PrintMapSums(const my_map_t& map)
{
    // Range based for loop iterating through the pairs of the map
    for (auto const &pair : map ) {
        // records the sum the elements of each vector
        // starts from zero for each vector
        double sum_of_elements = 0.0;
        // access the vector using pair . second
        for (auto &n : pair.second ) {
            sum_of_elements += n ;
        }
        std::cout << pair.first << " : " << sum_of_elements << std::endl ;
    }
}