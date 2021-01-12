#include <stdio.h>

/*
	This program print itself to standart output
*/
void print_itself() {
	char *str = "#include <stdio.h>%1$c%1$c/*%1$c	This program print itself to standart output%1$c*/%1$cvoid print_itself() {%1$c	char *str = %3$c%2$s%3$c;%1$c	printf(str, 10, str, 34);%1$c}%1$c%1$cint main() {%1$c	/*%1$c		Call a print function%1$c	*/%1$c	print_itself();%1$c	return(0);%1$c}%1$c";
	printf(str, 10, str, 34);
}

int main() {
	/*
		Call a print function
	*/
	print_itself();
	return(0);
}
