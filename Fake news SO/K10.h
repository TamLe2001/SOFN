#include "K9.h"
#include "Bio.h"


void Test2()
{
    char txttst[] = "HEJ HVordan gaar det HEJ HEJ";
    char ptst[NumberOfStrings][MaxSizeOfString];

    printf("%s", txttst);

    char* stringArray[10000];
    int f = 0, i = 0, Checker, k = 0, o;
//	int init_size = strlen(str);
	char delim[] = " ";
    char *Each[i];
	char *ptr = strtok(txttst, delim);

	while (ptr != NULL)
	{
	    stringArray[f] = ptr;
		printf("\n'%s'", ptr);
		Each[i] = ptr;
		i++;
		ptr = strtok(NULL, delim);
	}

	o = getWords(txttst, ptst);

	for(Checker=0;Checker<=o;Checker++){
        if(strcmp(Each[Checker],"HEJ") == 0){
            k++;
        }
	}

    printf("\n%d", k);
}
