/*
 Describe this program: This program will read the file "sample" and count how many letters, words, and lines in there.
*/
#include <stdio.h>
#include <stdlib.h>

//count letters, words and lines in the file

int main(int argc, char *argv[]) {
	FILE* file;
	char ch;
	// declare c to count letters, words to count words, lines to count lines
	int c=0, words=0, lines=0;
	int num[25];
	file= fopen("sample.txt","r");
	if(file==NULL){
		printf("\nCould not find the file.\n");
		exit(1);
	}
	while(1){
		ch=fgetc(file);
		if(ch==EOF)
		break;
		if(ch!=' '&&ch!='\n'){
			c++;
		}
		if(ch==' '||ch=='\t'||ch=='\n'||ch=='\0'){
			words++;
		}
		if(ch=='\n'||ch=='\0'){
			lines++;
		}
	}
	//increase words and lines on the last word and last line.
	if(c>0){
		words++;
		lines++;
	}
	printf("The total of characters is: %d\n", c);
	printf("The total words is: %d\n", words);
	printf("The total of lines is: %d\n", lines);

	fclose(file);

	return 0;
}
