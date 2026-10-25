#include <iostream>
#include <algorithm>

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
            auto r = double(i)/(image_width-1);
            auto g = double(j)/(image_height-1);
            auto b = 0.;

            int ir = std::min(255, int(256 * r));
            int ig = std::min(255, int(256 * g));
            int ib = std::min(255, int(256 * b));

            std::cout << ir << ' ' << ig << ' '<< ib <<'\n';
        }
    }
    std::clog << "\rDone.                      \n";
}