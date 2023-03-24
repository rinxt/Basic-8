#pragma once
#include <stdexcept>

class invalid_shape_exception : public std::domain_error {
public:
    invalid_shape_exception(const std::string& message);
};
