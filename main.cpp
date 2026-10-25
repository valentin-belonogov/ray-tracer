#include <iostream>
#include <algorithm>
#include "color.hpp"

int main()
{
    int image_width = 100;
    int image_height = 600;

    std::cout << "P3\n" << image_width << ' '<< image_height << "\n255\n";
    for (int j = 0; j < image_height; ++j)
    {
        std::clog << "\rScanlines remaining: " << image_height - j << ' ' << std::flush;
        for (int i = 0; i < image_width; ++i)
        {
            auto pixelColor = color(double(i)/(image_width-1), double(j)/(image_height-1), 0.);
            write_color(std::cout, pixelColor);
        }
    }
    std::clog << "\rDone.                      \n";
}