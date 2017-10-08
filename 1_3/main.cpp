#include <stdio.h>
#include <conio.h>

char s []="#include <stdio.h> %c#include<conio.h>%c%cchar s[]=%c%s%c;%cmain()%c{%c%cprintf(s, 10, 10, 10, 34, s, 34, 10, 10, 10, 9, 10, 9, 10);%c%cgetch();%c}";
main()
{
	printf(s, 10, 10, 10, 34, s, 34, 10, 10, 10, 9, 10, 9, 10);
	getch();
}