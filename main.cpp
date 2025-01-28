#include <iostream>
#include <string>
#include <stdint.h>

int main()
{
	constexpr int width { 256 };
	constexpr int height { 256 };

	std::cout << "P3\n" << width << ' ' << height << "\n255\n";

	for(int i = 0; i < height; i++) {
		for(int j = 0; j < width; j++) {
			auto r = static_cast<double>(j) / (width - 1);
			auto g = static_cast<double>(i) / (height - 1);
			auto b = 0.0;

			int ir = static_cast<int>(255.999 * r);
			int ig = static_cast<int>(255.999 * g);
			int ib = static_cast<int>(255.999 * b);

			std::cout << ir << ' ' << ig << ' ' << ib << '\n'; 
		}
	}
}