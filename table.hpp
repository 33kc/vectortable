#ifndef TABLE_FUNCTIONS_HPP
#define TABLE_FUNCTIONS_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <numeric>
#include <sstream>

namespace table {
    // Function to insert an element into a vector at a specified position
    template<typename T>
    void insert(std::vector<T>& table, size_t index, const T& value) {
        if (index > table.size()) {
            throw std::out_of_range("Index out of range");
        }
        table.insert(table.begin() + index, value);
    }

    // Other functions remain unchanged...
    
    // Function to remove an element from a vector at a specified position
    template<typename T>
    void remove(std::vector<T>& table, size_t index) {
        if (index >= table.size()) {
            throw std::out_of_range("Index out of range");
        }
        table.erase(table.begin() + index);
    }

    // Function to get the length of a vector
    template<typename T>
    size_t getn(const std::vector<T>& table) {
        return table.size();
    }

    // Function to concatenate elements of a vector into a string
    template<typename T>
    std::string concat(const std::vector<T>& table, const std::string& sep = "") {
        std::ostringstream oss;
        for (size_t i = 0; i < table.size(); ++i) {
            oss << table[i];
            if (i < table.size() - 1) {
                oss << sep;
            }
        }
        return oss.str();
    }

    // Function to sort elements of a vector
    template<typename T>
    void sort(std::vector<T>& table, bool ascending = true) {
        if (ascending) {
            std::sort(table.begin(), table.end());
        } else {
            std::sort(table.begin(), table.end(), std::greater<T>());
        }
    }

    // Function to reverse elements of a vector
    template<typename T>
    void reverse(std::vector<T>& table) {
        std::reverse(table.begin(), table.end());
    }

    // Function to find an element in a vector and return its index
    template<typename T>
    size_t find(const std::vector<T>& table, const T& value) {
        auto it = std::find(table.begin(), table.end(), value);
        if (it != table.end()) {
            return std::distance(table.begin(), it);
        } else {
            return table.size();
        }
    }

    // Function to count occurrences of an element in a vector
    template<typename T>
    size_t count(const std::vector<T>& table, const T& value) {
        return std::count(table.begin(), table.end(), value);
    }

    // Function to sum all elements of a vector
    template<typename T>
    T sum(const std::vector<T>& table) {
        return std::accumulate(table.begin(), table.end(), T());
    }

    // Function to apply a function to each element of a vector
    template<typename T, typename Func>
    void foreach(std::vector<T>& table, Func func) {
        std::for_each(table.begin(), table.end(), func);
    }

    // Function to filter elements of a vector based on a predicate
    template<typename T, typename Pred>
    void filter(std::vector<T>& table, Pred pred) {
        table.erase(std::remove_if(table.begin(), table.end(), pred), table.end());
    }

    // Function to map elements of a vector using a function
    template<typename T, typename Func>
    void map(std::vector<T>& table, Func func) {
        std::transform(table.begin(), table.end(), table.begin(), func);
    }
}

#endif 
