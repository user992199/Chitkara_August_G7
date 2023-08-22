#include<stdio.h>
int main(){
	FILE*file=fopen("file.txt","r");
	if (file == 0) return 0;
	int count = 1; char ch;
	while(!feof(file)){
		ch = fgetc(file);
		if(ch == '\n') count++;
	}
	printf("%d\n", count);
	fclose(file);
	return 0;
}