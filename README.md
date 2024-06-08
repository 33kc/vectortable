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

To use the Table Functions Library in your C++ project, simply include the `table_functions.hpp` header file in your source files.

```cpp
#include "table_functions.hpp"

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    table::insert(vec, 2, 10);
    table::remove(vec, 3);
    std::cout << "Vector length: " << TableFunctions::getn(vec) << std::endl;
    std::cout << "Concatenated vector: " << TableFunctions::concat(vec, ", ") << std::endl;
    TableFunctions::sort(vec);
    // ... 
    return 0;
}
```

 made out of boredom // mutli language support?
