#include "Bio.h"
#include <string.h>

#define NumberOfStrings 100
#define MaxSizeOfString 200

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
    char* Testtxt[TSize] = {"Hej", "med", "dig"};

    int n; //number of words
	int i; //loop counter
	int k = 0;
	char str[]= fopen("text.txt","r");
	char arr[NumberOfStrings][MaxSizeOfString];

	n=getWords(str,arr);

	for(i=0;i<=n;i++){
        if(strcmp(arr[i],"is") == 0){
            //printf("The headline contains the word: is");
            k++;
        }
	}
	printf("%d", k);
}
