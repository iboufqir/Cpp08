#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <limits>

class Span {
private:
    unsigned int _maxSize;
    std::vector<int> _data;

public:
    Span(unsigned int n);
    ~Span();

    void addNumber(int number);

    template<typename InputIterator>
    void addRange(InputIterator begin, InputIterator end) {
        if (std::distance(begin, end) + _data.size() > _maxSize)
            throw std::runtime_error("Not enough space in Span for this range");
        _data.insert(_data.end(), begin, end);
    }

    int shortestSpan() const;
    int longestSpan() const;
};

#endif
