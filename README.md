# VectorTable Library

VectorTable Library is a C++ header-only library providing functions for manipulating vectors in a way similar to Lua tables.

## Features

- Insert an element into a vector at a specified position.
- Remove an element from a vector at a specified position.
- Get the length of a vector.
- Concatenate the elements of a vector into a string.
- Sort the elements of a vector.
- Reverse the order of the elements in a vector.
- Find the index of a specified element in a vector.
- Count the occurrences of a specified element in a vector.
- Sum all elements in a vector.
- Apply a function to each element of a vector.
- Filter elements of a vector based on a predicate.
- Map elements of a vector using a function.

## Usage

Add the header file to your project folder to use it

```cpp
#include "table.hpp"
#include <iostream>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    
    // Inserting an element at index 2
    table::insert(vec, 2, 10);
    
    // Removing an element at index 3
    table::remove(vec, 3);
    
    std::cout << "Vector length: " << table::getn(vec) << std::endl;
    std::cout << "Concatenated vector: " << table::concat(vec, ", ") << std::endl;
    
    // Sorting the vector
    table::sort(vec);
    
    // Outputting vector elements
    for (auto& element : vec) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
