#include "K9.h"
#include "Bio.h"
#define NumOfKWords 14
#include "Keyworddealer.h"

void Test2()
{
    char txttst[] = "hej";
    char *keyWord[NumOfKWords]={"years", "writers", "wow", "workers", "word", "wont", "won", "woman", "wire", "wins", "winning", "winner", "win", "wikileaks"};




    ///Keywords l�nt af Theodore

    char buf[CHUNK];
    FILE *file;
    size_t nread;
    char stringFile[100000];
    file = fopen("test.txt", "r");

 /*   if (file) {
        while ((nread = fread(buf, 1, sizeof buf, file)) > 0)
            fwrite(buf, 1, nread, stdout);
        if (ferror(file)) {
            /* deal with error */
        //}
        while (!feof(file)){
            fgets(stringFile, 100000, file);
        }
        fclose(file);
        printf("%s", stringFile);
 //}


///    memcpy(txttst, buf, CHUNK);


    char* stringArray;
    int f = 0, i = 0, Checker, k = 0, Checker2;
//	int init_size = strlen(str);
	char delim[] = " ";
    char *Each[150000];
	char *ptr = strtok(stringFile, delim);
    int numberOfWords=0;

	while (ptr != NULL)
	{
	    stringArray[f] = ptr;
//		printf("\n'%s'", ptr);
		Each[i] = ptr;
		i++;
		ptr = strtok(NULL, delim);
		numberOfWords++;
	}


	for(Checker=0;Checker<numberOfWords;Checker++){
        for(Checker2=0;Checker2<NumOfKWords;Checker2++){
        if(strcmp(Each[Checker],keyWord[Checker2]) == 0){
            k++;
            }
        }
	}

    printf("\ncontains %d of words which can maybe see the text as fake news\n", k);
	}


