#include "invalidShapeException.h"

invalid_shape_exception::invalid_shape_exception(const std::string& message) : std::domain_error(message) {};
