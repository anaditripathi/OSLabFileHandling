# include <stdio.h>
# include <string.h>

int main( )
{

	// Declare the file pointer
	FILE *filePointer ;

	// Declare the variable for the data to be read from file
	char dataToBeRead[50];

	// Open the existing file OSLab1a.c using fopen()
	// in read mode using "r" attribute
	filePointer = fopen("OSLab1a.c", "r") ;

	// Check if this filePointer is null
	// which maybe if the file does not exist
	if ( filePointer == NULL )
	{
		printf( "OSLab1a.c file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;

		// Read the dataToBeRead from the file
		// using fgets() method
		while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
		{

			// Print the dataToBeRead
			printf( "%s" , dataToBeRead ) ;
		}

		// Closing the file using fclose()
		fclose(filePointer) ;

		printf("Data successfully read from file OSLab1a.c\n");
		printf("The file is now closed.") ;
	}
	return 0;
}
