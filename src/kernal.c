#include <c64/kernal.h>

void setlfs(char logical_number, char device_number, char secondary_address)
{
    asm(
        "ldy __rc2\n"
        "jsr $ffba"
    );
}

void setnam(char namelength, char *name)
{
    asm(
        "ldy __rc2\n"
        "jsr $ffbd"
    );
}

void open()
{
    asm(
        "jsr $ffc0"
        ::: "a", "x", "y"
    );
}

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

exec_result_t screen()
{
    exec_result_t result;

    asm(
        "jsr $ffed\n"
        "stx %[col]\n"
        "sty %[row]\n"
        : [col] "=r" (result.x), [row] "=r" (result.y)
        :: "x", "y"
    );

    return result;
}
