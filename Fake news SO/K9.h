#include "Bio.h"
#include <string.h>

#define NumberOfStrings 142
#define MaxSizeOfString 400

#define CHUNK 20000

#define TSize 10
#define TRUE 1

int getWords(char *base, char target[NumberOfStrings][MaxSizeOfString])
{
	int n=0,i,j=0;

	for(i=0;TRUE;i++)
	{
		if(base[i]!=' '){
			target[n][j++]=base[i];
		}
		else{
			target[n][j++]='\0';//insert NULL
			n++;
			j=0;
		}
		if(base[i]=='\0')
		    break;
	}
	return n;

}

void Test()
{
    char* Testtxt[5] = {"Hej", "med", "dig"};

    int n; //number of words
	int i; //loop counter
	int k = 0;


    char buf[CHUNK];
    FILE *file;
    size_t nread;

    file = fopen("test.txt", "r");
    if (file) {
        while ((nread = fread(buf, 1, sizeof buf, file)) > 0)
            fwrite(buf, 1, nread, stdout);
        if (ferror(file)) {
            /* deal with error */
        }
        fclose(file);
    }


    char str[CHUNK];
    char* stringArray[5];
    int f = 0;
	int init_size = strlen(str);
	char delim[] = " ";

	char *ptr = strtok(str, delim);

	while (ptr != NULL)
	{
	    stringArray[f] = ptr;
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}
    for(int s =0; s<5; s++){
        printf("%s", ptr);
    }

	memcpy(str, buf, CHUNK);

	char arr[NumberOfStrings][MaxSizeOfString];

	n=getWords(str,arr);

	for(i=0;i<=n;i++){
        if(strcmp(arr[i],"trump") == 0){
            //printf("The headline contains the word: is");
            k++;
        }
	}
	printf("\n  <%d", k);

}
