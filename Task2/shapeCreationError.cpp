#include "shapeCreationError.h"

ShapeCreationError::ShapeCreationError(const std::string& reason)
    : std::domain_error("������ �������� ������. �������: " + reason) {}
