#include <unistd.h>
#include <stdio.h>

/*
	This program print itself to standart output but without int main() declared
*/

#define CREATE_FILE fopen("Grace_kid.c", "w")
#define STR "#include <unistd.h>%1$c#include <stdio.h>%1$c%1$c/*%1$c	This program print itself to standart output but without int main() declared%1$c*/%1$c%1$c#define CREATE_FILE fopen(%3$cGrace_kid.c%3$c, %3$cw%3$c)%1$c#define STR %3$c%2$s%3$c%1$c#define FT(x) int main() { FILE *fd = CREATE_FILE; fprintf(fd, STR, 10, x, 34); }%1$c%1$cFT(STR)%1$c"
#define FT(x) int main() { FILE *fd = CREATE_FILE; fprintf(fd, STR, 10, x, 34); }

FT(STR)
