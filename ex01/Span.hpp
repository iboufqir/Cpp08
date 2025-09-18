#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
#include <limits>

class Span {
private:
    unsigned int _maxSize;
    std::vector<int> _data;

public:
    Span();                            
    Span(unsigned int n);              
    Span(const Span &other);           
    ~Span();                           
    Span &operator=(const Span &other);

    void addNumber(int number);

    template<typename InputIterator>
    void addRange(InputIterator begin, InputIterator end) {
        if (_data.size() + static_cast<size_t>(std::distance(begin, end)) > _maxSize)
            throw std::runtime_error("Not enough space in Span for this range");
        _data.insert(_data.end(), begin, end);
    }

    int shortestSpan() const;
    int longestSpan() const;
};

#endif
