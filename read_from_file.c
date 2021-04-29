/***************Example: Read from file.***************/

#include <stdio.h>
#include <stdlib.h> //used for exit().

int main(){

	FILE *file_pointer;
	char data[1000];

	file_pointer = fopen("D:\\program.txt", "r");

	//end program if the file is NULL.
	if (file_pointer == NULL){
		printf("ERROR.");
		exit(1); //exit the whole program.
	}

	// "%[^\n]" instead of "%s" to read data until the new line.
	fscanf(file_pointer, "%[^\n]", data);

	puts(data); //print data.

	//close the file.
	fclose(file_pointer);

	return(0);
}
