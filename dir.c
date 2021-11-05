#include <stdio.h>

int main(int argc, char * argv[]) {

	//for the current directory("./")
	//list all files in the directory
	//specify which files are directories
	//show the total size of the regular files in the directory (don't need recursion)
	
	//if command line arg is entered, use that as the directory to scan
	//if not prog should as user to enter directory to scan
	//if invalid directory is entered, errno
	
	DIR * directory;
	
	printf("Statistics for directory: \n");
	printf("Total Directory Size: \n");
	printf("Directories: \n");
	printf("\t \n");
	
	printf("Regular Files: \n"); 
	printf("\t \n");
}
