#include "K9.h"
#include "Bio.h"
#define NumOfKWords 2

void Test2()
{
    char txttst[] = "hej";
    char *keyWord[NumOfKWords]={"trump", "HVordan"};
    ///Keywords

    char buf[CHUNK];
    FILE *file;
    size_t nread;
    char stringFile[150000];
    file = fopen("test.txt", "r");

 /*   if (file) {
        while ((nread = fread(buf, 1, sizeof buf, file)) > 0)
            fwrite(buf, 1, nread, stdout);
        if (ferror(file)) {
            /* deal with error */
        //}
        while (!feof(file)){
            fgets(stringFile, 150000, file);
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

    printf("\n%d", k);
}
