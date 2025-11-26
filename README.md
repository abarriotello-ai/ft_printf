══════════════════════════════════════════════  
🔵 **ft_printf**  
_Reimplementación de la función `printf` en C — Proyecto 42_  
══════════════════════════════════════════════  


📝 **Descripción del proyecto**  
`ft_printf` es una implementación personalizada de la función estándar `printf`.  
El objetivo es comprender cómo funciona internamente una función capaz de:

- Interpretar una cadena de formato  
- Gestionar argumentos variables (`va_list`)  
- Convertir valores a texto según su tipo  
- Escribir la salida carácter a carácter  
- Devolver el número total de caracteres impresos  

El proyecto incluye también un **tester integrado** (`main_tester.c`) que compara la salida y el valor de retorno con la función original `printf`, permitiendo validar el comportamiento de forma precisa.


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  
🔧 **Cómo funciona internamente `printf`**  
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  

`printf` procesa la cadena de formato e identifica elementos especiales que empiezan por `%`.  
Cada especificador determina cómo debe interpretarse el siguiente argumento.

Flujo simplificado del funcionamiento:

1. Recorrer la cadena de formato  
2. Detectar un `%`  
3. Leer el especificador correspondiente  
4. Obtener el siguiente argumento (`va_arg`)  
5. Convertirlo a texto  
6. Imprimirlo y sumarlo al contador de caracteres  

Ejemplo conceptual:  
```
"El número es %d"  →  detecta %d  → obtiene un int  → lo convierte  → imprime "42"
```


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  
📌 **Especificadores soportados**  
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  

| Especificador | Función |
|--------------|---------|
| `%c` | Carácter |
| `%s` | Cadena |
| `%p` | Dirección de memoria |
| `%d` / `%i` | Entero con signo |
| `%u` | Entero sin signo |
| `%x` | Hexadecimal (minúsculas) |
| `%X` | Hexadecimal (mayúsculas) |
| `%%` | Porcentaje literal |


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  
🚀 **Ejemplo de uso**  
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  

Código:
```
#include "ft_printf.h"

int main(void)
{
    ft_printf("Usuario: %s | Número: %d | Hex: %x\n", "Ana", 42, 42);
    return 0;
}
```

Salida esperada:
```
Usuario: Ana | Número: 42 | Hex: 2a
```


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  
⚙️ **Compilación**  
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━  

Comandos disponibles del Makefile:

- `make` → Compila la librería `libftprintf.a`  
- `make clean` → Elimina objetos  
- `make fclean` → Limpieza completa  
- `make re` → Recompilación total  

