# ft_printf – 42 Project  
A custom recreation of the C standard printf function.

---

# 📌 Table of Contents
- [📖 Introduction](#-introduction)
- [📁 Repository Structure](#-repository-structure)
- [⚙️ Compilation](#️-compilation)
- [🧰 Usage](#-usage)
- [🔧 Supported Conversions](#-supported-conversions)
- [🌿 Bonus Features](#-bonus-features)
- [✅ Summary](#-summary)

---

# 📖 Introduction

The **ft_printf** project challenges you to recreate one of C’s most iconic and useful functions:  
`printf()`.

Its purpose is to make you work with **variadic functions**, formatting logic, and robust code design.  
The project PDF explains (page 1):  
> *“You will reimplement printf(). You will learn to use a variable number of arguments.”*

Once completed, `ft_printf` can be merged into your libft to use it in future 42 projects.

---

# 📁 Repository Structure

```
ft_printf/
 ├── Makefile
 ├── ft_printf.h
 ├── ft_printf.c
 ├── utils/*.c
 ├── utils/*.h
 └── libftprintf.a   (generated after compilation)
```

The PDF states:
- The resulting library must be named **libftprintf.a** (page 5)
- Required Makefile rules: `NAME`, `all`, `clean`, `fclean`, `re` (page 4)

---

# ⚙️ Compilation

```bash
make          # compile mandatory part
make clean    # remove object files
make fclean   # remove objects + library
make re       # full rebuild
```

The Makefile **must not relink** and must use these flags:
```
-Wall -Wextra -Werror
```

---

# 🧰 Usage

Include the header:

```c
#include "ft_printf.h"
```

Compile normally:

```bash
cc main.c -L./ft_printf -lftprintf -I./ft_printf -o program
```

Use it like printf:

```c
ft_printf("Hello %s, number: %d", "world", 42);
```

---

# 🔧 Supported Conversions

You must implement the following conversions (page 6):

| Specifier | Meaning |
|----------|---------|
| `%c` | Single character |
| `%s` | String |
| `%p` | Pointer printed in hexadecimal |
| `%d` | Decimal integer |
| `%i` | Integer (same as `%d`) |
| `%u` | Unsigned decimal integer |
| `%x` | Hexadecimal lowercase |
| `%X` | Hexadecimal uppercase |
| `%%` | Literal % symbol |
