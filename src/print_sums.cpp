#include <iostream>
#include <map>
#include <vector>
#include <numeric>

using my_map_t = std::map<std::string, std::vector<double>>;

void PrintMapSums(const my_map_t& map)
{
    // Range based for loop iterating through the pairs of the map
    for (auto const &pair : map) {
        // records the sum the elements of each vector
        // starts from zero for each vector
        double sum_of_elements = std::accumulate(pair.second.begin(), pair.second.end(), 0);

        std::cout << pair.first << " : " << sum_of_elements << std::endl ;
    }
}

