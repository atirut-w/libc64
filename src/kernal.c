#include <c64/kernal.h>

void chrout(char c)
{
    asm("jsr $ffd2");
}
