    #include <stdio.h>
    #include <string.h>
    int main()
    {
        char str[] = "Hello world!";
        for (char *p = str; p = strchr(p, 'l'); ++p) {
            *p = 'p';
        }

        printf("%s\n", str);  // He11o wor1d!
        return 0;
    }
