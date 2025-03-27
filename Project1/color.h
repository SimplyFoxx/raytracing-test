﻿#ifndef COLOR_H
#define COLOR_H

#include "interval.h"
#include "vec3.h"

using color = vec3;

inline void write_color(std::ostream& out, const color& pixel_color) {
	auto r = pixel_color.x();
	auto g = pixel_color.y();
	auto b = pixel_color.z();

	//Překládá čísla (0-1) do rozmezí (0-255)

	static const interval intensity(0.000, 0.999);
	int rbyte = int(255.999 * intensity.clamp(r));
	int gbyte = int(255.999 * intensity.clamp(g));
	int bbyte = int(255.999 * intensity.clamp(b));

	//vypíše jednotlivé komponenty pixelu

	out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif