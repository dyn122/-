#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char ch[] = "hellow";
	printf("%s", ch);
	char* p = gets(ch);
	puts(p);
}
