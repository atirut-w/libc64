#pragma once

#ifdef __cplusplus
extern "C" {
#endif

void setlfs(char logical_number, char device_number, char secondary_address);
void setnam(char namelength, char *name);
void open();

char chrin(); // Read a byte from the default output.
void chrout(char c); // Write a byte to the default output.

#ifdef __cplusplus
}
#endif
