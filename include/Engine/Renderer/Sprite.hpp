/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         Sprite.hpp
*/

#pragma once

#include <string>

#include "Drawable.hpp"
#include "Transformable.hpp"
#include "Vector.hpp"

namespace engine
{
	class Sprite : public Transformable, public Drawable
	{
	public:
		Sprite() = default;
		virtual ~Sprite() = default;

		Sprite(Sprite const &) = delete;
		Sprite(Sprite &&) = default;

		Sprite &operator=(Sprite const &) = delete;
		Sprite &operator=(Sprite &&) = default;

		// Here you'll need to specifiy the prototypes of the pure
		// virtual member functions inherited from Transformable and
		// Drawable

		/**
		 * \brief Set the image file path.
		 * \param std::string filepath
		 */
		void setImageFile(std::string const &filepath);

		/**
		 * \brief Set the ASCII image file path.
		 * \param std::string filepath
		 */
		void setAsciiFile(std::string const &filepath);

		/**
		 * \brief Set the sprite size.
		 * \param std::size_t size
		 */
		void setSize(std::size_t size);

		/**
		 * \brief Get the image file path.
		 * \return std::string
		 */
		std::string const &getImageFile() const;

		/**
		 * \brief Get the ASCII image file path.
		 * \return std::string
		 */
		std::string const &getAsciiFile() const;

		/**
		 * \brief Get the sprite size.
		 * \return std::size_t
		 */
		std::size_t getSize() const;
	};
}
