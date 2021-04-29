/*****************Example: write to File******************/

#include <stdio.h>
#include <stdlib.h> //This header file is used for exit() function.

int main(){
	FILE *file_pointer;
	
	//open file int writing mode.
	file_pointer = fopen("D:\\program.txt", "w");
	
	//If File pointer is NULL we end the program.
	if(file_pointer == NULL){
		printf("ERROR 404!\n");
		exit(1); //exit the whole program.
	}
	
	//Write data to the file.
	//NB: syntax is fprintf(file_pointer, "data");
	fprintf(file_pointer, "Files are cool.");
	
	//close file.
	fclose(file_pointer);
	
	return(0);
}
