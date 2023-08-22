#include<stdio.h>
int main(){
	FILE * ptr = fopen("file.txt", "a");
	if(ptr == 0) printf("File not opened\n");
	else printf("File opened successfully\n");
	fprintf(ptr, " %d\n", 13);
	fclose(ptr);
	return 0;
}
