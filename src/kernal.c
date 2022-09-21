#include <c64/kernal.h>

char chrin()
{
    char result;
    asm(
        "jsr $ffcf\n"
        "sta %[result]"
        : [result] "=m"(result)
    );
    return result;
}

void chrout(char c)
{
    asm("jsr $ffd2");
}
