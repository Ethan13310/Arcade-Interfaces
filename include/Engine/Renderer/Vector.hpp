/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         Vector.hpp
*/

#pragma once

namespace engine
{
	template <class T>
	struct Vector2 final
	{
		T x;
		T y;
	};

	template <class T>
	struct Vector3 final
	{
		T x;
		T y;
		T z;
	};

	using Vector2i = Vector2<int>;
	using Vector2f = Vector2<float>;
	using Vector2u = Vector2<unsigned>;

	using Vector3i = Vector3<int>;
	using Vector3f = Vector3<float>;
	using Vector3u = Vector3<unsigned>;
}
