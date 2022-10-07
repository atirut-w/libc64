#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char a;
    char x;
    char y;
    char sr;
} exec_result_t;

void setlfs(char logical_number, char device_number, char secondary_address);
void setnam(char namelength, char *name);
void open();

char chrin(); // Read a byte from the default output.
void chrout(char c); // Write a byte to the default output.

exec_result_t screen(); // Fetch number of screen rows and columns.
#ifdef __cplusplus
}
#endif
