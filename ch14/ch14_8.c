#include <stdio.h>
#include <string.h>

#define STR_IMPL(x) #x
#define STR(x) STR_IMPL(x)
#define LINE_FILE ("Line " STR(__LINE__) " of file " __FILE__)


int main(void) {
    char message[50];
    const char* str = LINE_FILE;
    printf("%s\n", str);
    printf("Line %d of file %s\n", __LINE__, __FILE__);
}