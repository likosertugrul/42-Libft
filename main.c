#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int a = 42;
    char *str = "Hello, World!";
    unsigned int num = 12345;
    void *ptr = &a;
    char c = 'A';

    // Orijinal printf ve ft_printf karşılaştırması

    // Test: %c
    printf("Test 1 - Original printf (%%c): ");
    printf("%c\n", c);  // Beklenen Çıktı: A

    ft_printf("Test 1 - ft_printf (%%c): ");
    ft_printf("%c\n", c);  // Beklenen Çıktı: A

    // Test: %s
    printf("Test 2 - Original printf (%%s): ");
    printf("%s\n", str);  // Beklenen Çıktı: Hello, World!

    ft_printf("Test 2 - ft_printf (%%s): ");
    ft_printf("%s\n", str);  // Beklenen Çıktı: Hello, World!

    // Test: %d
    printf("Test 3 - Original printf (%%d): ");
    printf("%d\n", a);  // Beklenen Çıktı: 42

    ft_printf("Test 3 - ft_printf (%%d): ");
    ft_printf("%d\n", a);  // Beklenen Çıktı: 42

    // Test: %i
    printf("Test 4 - Original printf (%%i): ");
    printf("%i\n", a);  // Beklenen Çıktı: 42

    ft_printf("Test 4 - ft_printf (%%i): ");
    ft_printf("%i\n", a);  // Beklenen Çıktı: 42

    // Test: %u
    printf("Test 5 - Original printf (%%u): ");
    printf("%u\n", num);  // Beklenen Çıktı: 12345

    ft_printf("Test 5 - ft_printf (%%u): ");
    ft_printf("%u\n", num);  // Beklenen Çıktı: 12345

    // Test: %x
    printf("Test 6 - Original printf (%%x): ");
    printf("%x\n", num);  // Beklenen Çıktı: 3039 (12345'in onaltılık karşılığı)

    ft_printf("Test 6 - ft_printf (%%x): ");
    ft_printf("%x\n", num);  // Beklenen Çıktı: 3039

    // Test: %X
    printf("Test 7 - Original printf (%%X): ");
    printf("%X\n", num);  // Beklenen Çıktı: 3039 (büyük harflerle)

    ft_printf("Test 7 - ft_printf (%%X): ");
    ft_printf("%X\n", num);  // Beklenen Çıktı: 3039

    // Test: %p
    printf("Test 8 - Original printf (%%p): ");
    printf("%p\n", ptr);  // Beklenen Çıktı: Bellek adresi, örneğin 0x7ffeefbff4cc

    ft_printf("Test 8 - ft_printf (%%p): ");
    ft_printf("%p\n", ptr);  // Beklenen Çıktı: Bellek adresi, örneğin 0x7ffeefbff4cc

    // Test: %%
    printf("Test 9 - Original printf (%%): ");
    printf("%%\n");  // Beklenen Çıktı: %

    ft_printf("Test 9 - ft_printf (%%): ");
    ft_printf("%%\n");  // Beklenen Çıktı: %

    return 0;
}
