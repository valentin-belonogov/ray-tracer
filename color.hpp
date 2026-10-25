#ifndef COLOR_H
#define COLOR_H

#include "vec3.hpp"

#include <iostream>

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color) {
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // Translate the [0,1] component values to the byte range [0,255].
    int rbyte = std::min(255, int(256 * r));
    int gbyte = std::min(255, int(256 * g));
    int bbyte = std::min(255, int(256 * b));

    // Write out the pixel color components.
    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif