#include <stdio.h>

int main()
{
    while (1)
    {
        printf("Shriram Bakre\a\n");
        printf("\a");
        goto end;
    }
}

end : 
return 0;
}