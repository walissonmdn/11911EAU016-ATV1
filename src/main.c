#include <stdlib.h>
#include <stdint.h>

#define STM32_RCC_BASE 0X40023800

#define STM32_RCC_AHB1ENR_OFFSET 0x0030

#define STM32_RCC_AHB1ENR (STM32_RCC_BASE+STM32_RCC_AHB1ENR_OFFSET)

#define RCC_AHB1ENR_GPIOCEN (1<<2)


int main(int argc, char *argv[])
{
    uint32_t reg;

    uint32_t *pRCC_AHB1ENR = (uint32_t *)STM32_RCC_AHB1ENR;

    reg = *pRCC_AHB1ENR;
    reg |= RCC_AHB1ENR_GPIOCEN;
    *pRCC_AHB1ENR = reg;

    while(1);

    return EXIT_SUCCESS;
}