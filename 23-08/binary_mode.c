#include<stdio.h>
struct st{
	int i;
	float f;
};
int main(){
	struct st s1 = {10, 3.14}, s2;
	FILE * ptr = fopen("data.txt", "wb+");
	// fwrite(&variable_name, number_of_variable, sizeof(variable), file_ptr);
	fwrite(&s1, 1, sizeof(s1), ptr);
	// rewind(ptr);
	fseek(ptr, 0, SEEK_SET);
	fread(&s2, 1, sizeof(s2), ptr);
	fclose(ptr);
	// remove("data.txt");
	rename("data.txt", "struct_data.txt");
	printf("%d, %f\n", s2.i, s2.f);
	return 0;
}