/*
** EPITECH PROJECT, 2018
** Arcade
** File description:
**         Text.hpp
*/

#pragma once

#include <string>

#include "Color.hpp"
#include "Drawable.hpp"
#include "Transformable.hpp"
#include "Vector.hpp"

namespace engine
{
	class Text final : public Transformable, public Drawable
	{
	public:
		Text() = default;
		virtual ~Text() = default;

		Text(Text const &) = delete;
		Text(Text &&) = default;

		Text &operator=(Text const &) = delete;
		Text &operator=(Text &&) = default;

		// Here you'll need to specifiy the prototypes of the pure
		// virtual member functions inherited from Transformable and
		// Drawable

		/**
		 * \brief Set the text value.
		 * \param std::string text
		 */
		void setText(std::string const &text);
		
		/**
		 * \brief Set the font path.
		 * \param std::string fontpath
		 */
		void setFont(std::string const &fontpath);
		
		/**
		 * \brief Set the text size.
		 * \param std::size_t size
		 */
		void setSize(std::size_t size);
		
		/**
		 * \brief Set the text color.
		 * \param Color color
		 */
		void setColor(Color const &color);
		
		/**
		 * \brief Get the text value
		 * \return std::string
		 */
		std::size_t const &getText() const;

		/**
		 * \brief Get the font path.
		 * \return std::string
		 */
		std::size_t const &getFont() const;

		/**
		 * \brief Get the text size.
		 * \return std::size_t
		 */
		std::size_t getSize() const;

		/**
		 * \brief Get the text color.
		 * \return Color
		 */
		Color const &getColor() const;
	};
}
