/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio <abarrio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 17:18:32 by abarrio           #+#    #+#             */
/*   Updated: 2026/02/02 19:49:37 by abarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include "ft_printf.h"

int    main(void)
{
    int           n = 42;
    int           neg = -42;
    unsigned int  u = 42u;

    /* ================= NULL ================= */
       int i = printf(NULL);
       int j = ft_printf(NULL);

       printf("=== TEST NULL ===\n");
       printf("printf: %d\n", i);
       ft_printf("ft_printf: %d\n", j);

    /* ================== %c ================== */
    printf("=== TEST %%c ===\n");
    printf("printf   : '%c' '%c' '%c'\n", 'A', 'z', 0);
    ft_printf("ft_printf: '%c' '%c' '%c'\n\n", 'A', 'z', 0);

    printf("printf   : 'X%cY'\n", '\0');
    ft_printf("ft_printf: 'X%cY'\n\n", '\0');

    /* ================== %s ================== */
    printf("=== TEST %%s ===\n");
    printf("printf   : '%s'\n", "Hola 42");
    ft_printf("ft_printf: '%s'\n\n", "Hola 42");

    printf("printf   : '%s'\n", "");
    ft_printf("ft_printf: '%s'\n\n", "");

	char *null_str = NULL;
    printf("printf   : '%s'\n", null_str);
    ft_printf("ft_printf: '%s'\n\n", null_str);

    printf("printf   : '%s'\n", "Cadena larga de prueba para ft_printf");
    ft_printf("ft_printf: '%s'\n\n", "Cadena larga de prueba para ft_printf");

    /* ================== %p ================== */
    printf("=== TEST %%p ===\n");
    int x = 123;

    printf("printf   : '%p'\n", (void *)0);
    ft_printf("ft_printf: '%p'\n\n", (void *)0);

    printf("printf   : '%p'\n", &x);
    ft_printf("ft_printf: '%p'\n\n", &x);

    printf("printf   : '%p' '%p'\n", &x, &n);
    ft_printf("ft_printf: '%p' '%p'\n\n", &x, &n);

    /* ================== %d ================== */
    printf("=== TEST %%d ===\n");
    printf("printf   : %d %d %d %d %d\n", 0, 1, -1, INT_MAX, INT_MIN);
    ft_printf("ft_printf: %d %d %d %d %d\n\n", 0, 1, -1, INT_MAX, INT_MIN);

    printf("printf   : %d %d %d\n", 1000, -1000, -2147483647);
    ft_printf("ft_printf: %d %d %d\n\n", 1000, -1000, -2147483647);

    /* ================== %i ================== */
    printf("=== TEST %%i ===\n");
    printf("printf   : %i %i %i %i %i\n", 0, 1, -1, INT_MAX, INT_MIN);
    ft_printf("ft_printf: %i %i %i %i %i\n\n", 0, 1, -1, INT_MAX, INT_MIN);

    printf("printf   : %i %i %i\n", 42, -42, 9999);
    ft_printf("ft_printf: %i %i %i\n\n", 42, -42, 9999);

    /* ================== %u ================== */
    printf("=== TEST %%u ===\n");
    printf("printf   : %u %u %u\n", 0u, u, UINT_MAX);
    ft_printf("ft_printf: %u %u %u\n\n", 0u, u, UINT_MAX);

    printf("printf   : %u %u\n", UINT_MAX - 1u, UINT_MAX - 42u);
    ft_printf("ft_printf: %u %u\n\n", UINT_MAX - 1u, UINT_MAX - 42u);

    /* ================== %x ================== */
    printf("=== TEST %%x ===\n");
    printf("printf   : %x %x %x\n", 0u, 1u, UINT_MAX);
    ft_printf("ft_printf: %x %x %x\n\n", 0u, 1u, UINT_MAX);

    printf("printf   : %x %x %x\n", 16u, 255u, 4096u);
    ft_printf("ft_printf: %x %x %x\n\n", 16u, 255u, 4096u);

    /* ================== %X ================== */
    printf("=== TEST %%X ===\n");
    printf("printf   : %X %X %X\n", 0u, 1u, UINT_MAX);
    ft_printf("ft_printf: %X %X %X\n\n", 0u, 1u, UINT_MAX);

    printf("printf   : %X %X %X\n", 16u, 255u, 4096u);
    ft_printf("ft_printf: %X %X %X\n\n", 16u, 255u, 4096u);

    /* ================== %% ================== */
    printf("=== TEST %%%% ===\n");
    printf("printf   : '%%' '%%%%'\n");
    ft_printf("ft_printf: '%%' '%%%%'\n\n");

    printf("printf   : inicio%%medio%dfinal\n", 123);
    ft_printf("ft_printf: inicio%%medio%dfinal\n\n", 123);

    /* =========== COMBINADOS =========== */
    printf("=== TEST COMBINADO 1 ===\n");
    printf("printf   : c=%c s=%s p=%p d=%d i=%i u=%u x=%x X=%X %%=%%\n",
           'A', "combo", &n, n, neg, u, u, u);
    ft_printf("ft_printf: c=%c s=%s p=%p d=%d i=%i u=%u x=%x X=%X %%=%%\n\n",
           'A', "combo", &n, n, neg, u, u, u);

    printf("=== TEST COMBINADO 2 ===\n");
    printf("printf   : [%d] [%i] [%u] [%x] [%X] [%p] [%s] [%c] [%%]\n",
           INT_MIN, INT_MAX, UINT_MAX, 3735928559u, 3735928559u,
           &u, "larga", 'Z');
    ft_printf("ft_printf: [%d] [%i] [%u] [%x] [%X] [%p] [%s] [%c] [%%]\n\n",
           INT_MIN, INT_MAX, UINT_MAX, 3735928559u, 3735928559u,
           &u, "larga", 'Z');

    return 0;
}
