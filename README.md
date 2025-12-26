*This project was created as part of the 42 curriculum by abarrio.*

Description

This project consists of recreating the printf function from the C standard library. The result is a static library called libftprintf.a that contains the function ft_printf. The main goal is to learn how variadic functions work and how to structure a clean and modular project.

Instructions

Compilation:

MAKEFILE:

	make - Compiles the project and generates the static library libftprintf.a.

	make clean - Removes all object files generated during compilation.

	make fclean - Removes object files and the libftprintf.a library.

	make re - Runs fclean and then recompiles the project from scratch.

cc -Wall -Wextra -Werror -I. -Ilibft libftprintf.a libft/libft.a

Usage:
ft_printf works similarly to printf and supports the following conversions:
c, s, p, d, i, u, x, X and %.

Algorithm

The function goes through the format string character by character. When a '%' is found, the conversion type is identified, the argument is retrieved using va_arg, and the corresponding function is called to print it. Each conversion is handled separately to keep the code organized and easy to extend.

Resources

- printf(3) manual
- stdarg.h documentation
- 42 ft_printf subject
- GitHub repositories from other 42 students to compare structures and ideas

Use of AI

AI was mainly used as a support tool to clarify specific doubts about variadic functions, format parsing, and design decisions. GitHub was used to compare different approaches and understand common patterns.