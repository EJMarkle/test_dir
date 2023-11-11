#include "jaden_case.h"

int main()
{
    const char *input = "hello world";
    char output[100];

    to_jaden_case(output, input);

    printf("%s\n", output);

    return 0;
}