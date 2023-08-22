#include<stdio.h>
int main(){
	FILE * og = fopen("file.txt", "r");
	FILE * copy = fopen("copy_of_file.txt", "w");
	char ch;
	while((ch = fgetc(og)) != EOF){
		fputc(ch, copy);
	}
	fclose(og); fclose(copy);
	return 0;
}