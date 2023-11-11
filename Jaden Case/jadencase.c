#include <stdio.h>
#include <ctype.h>

char *to_jaden_case (char *jaden_case, const char *string)
{
    int capitalize = 1;
    
    while (*string)
    {
        if (isspace(*string))
        {
            capitalize = 1;
        }
        else if (capitalize)
        {
            *jaden_case = toupper(*string);
            capitalize = 0;
        }
        else
        {
            *jaden_case = *string;
        }

        string++;
        jaden_case++;
    }
    
    *jaden_case = '\0';
    return jaden_case;
}