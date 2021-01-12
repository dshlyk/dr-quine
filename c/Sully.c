#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int i = 5;
	FILE *file;
	char *str = "#include <stdio.h>%1$c#include <strings.h>%1$c#include <stdlib.h>%1$c#include <unistd.h>%1$c%1$cint main() {%1$c	int i = %2$d;%1$c	FILE *file;%1$c	char *str = %3$c%4$s%3$c;%1$c	char filename[10];%1$c	char executable[10];%1$c	char cmd[100];%1$c%1$c	if (i < 1) return(0);%1$c	if (!access(%3$cSully_5.c%3$c, 0)) i--;%1$c	sprintf(filename, %3$cSully_%5$cd.c%3$c, i);%1$c	file = fopen(filename, %3$cw%3$c);%1$c	fprintf(file, str, 10, i, 34, str, 37);%1$c	sprintf(executable, %3$cSully_%5$cd%3$c, i);%1$c	fclose(file);%1$c	if (i > 0) {%1$c		sprintf(cmd, %3$cgcc -Wall -Wextra -Werror -o %5$c1$s %5$c2$s; ./%5$c1$s%3$c, executable, filename);%1$c		system(cmd);%1$c	}%1$c}%1$c";
	char filename[10];
	char executable[10];
	char cmd[100];

	if (i < 1) return(0);
	if (!access("Sully_5.c", 0)) i--;
	sprintf(filename, "Sully_%d.c", i);
	file = fopen(filename, "w");
	fprintf(file, str, 10, i, 34, str, 37);
	sprintf(executable, "Sully_%d", i);
	fclose(file);
	if (i > 0) {
		sprintf(cmd, "gcc -Wall -Wextra -Werror -o %1$s %2$s; ./%1$s", executable, filename);
		system(cmd);
	}
}
