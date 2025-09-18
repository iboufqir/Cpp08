#include "Span.hpp"

Span::Span() : _maxSize(0) {}
Span::Span(unsigned int n) : _maxSize(n) {}
Span::Span(const Span &other) : _maxSize(other._maxSize), _data(other._data) {}
Span::~Span() {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _maxSize = other._maxSize;
        _data = other._data;
    }
    return *this;
}

void Span::addNumber(int number) {
    if (_data.size() >= _maxSize)
        throw std::runtime_error("Span is already full");
    _data.push_back(number);
}

int Span::shortestSpan() const {
    if (_data.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");

    std::vector<int> copy = _data;
    std::sort(copy.begin(), copy.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < copy.size(); ++i) {
        int diff = copy[i] - copy[i - 1];
        if (diff < minSpan)
            minSpan = diff;
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (_data.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");

    int min = *std::min_element(_data.begin(), _data.end());
    int max = *std::max_element(_data.begin(), _data.end());

    return max - min;
}
