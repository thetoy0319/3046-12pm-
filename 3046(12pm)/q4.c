#include <stdio.h>
char main() {
    char wek;

    printf("Enter first latter the week: ");
    scanf("%c", &wek);

    switch(wek) {
        case 's':
            printf("sunday\n");
            break;
        case 'm':
            printf("monday\n");
            break;
        case 't':
            printf("Tuesday\n");
            break;
        case 'w':
            printf("Wednesday\n");
            break;
        case 'T':
            printf("Thursday\n");
            break;
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
          printf("Saturday\n");
          break;
        default:
            printf("inwelid");
            break;
    }

    return 0;
}
