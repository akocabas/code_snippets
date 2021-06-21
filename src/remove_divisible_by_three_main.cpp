//given a vector of ints the below code removes numbers divisible by 3

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> values{1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    // it is an iterator pointing the first element of the vector
    // and points to following elements as the loop continues
    for (auto it = values.begin() ; it != values.end() ; ++it) {
        // remove multiples of 3
        if (*it % 3 == 0) { // dereference the iterator and check remainder when its divided by 3
        // erase () , a member funtion of vector is used
            values.erase(it--); // iterator is first passed to the erase () then it is decremented
        }
    }
}