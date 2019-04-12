/*#include "Bio.h"
#define WSize 2000

char Bigck, BigNOW = 0, BigI = 0;
char Medck, MedNOW = 0, MedI = 0;
char Antick, AntiNOW = 0, AntiI = 0;
char WordSize[WSize];
char delim[] = " ";
char* stringArray;
int f = 0;
char *Bigck2 = strtok(WordSize, delim);
char *Medcl2 = strtok(WordSize, delim);
char *Antick2 = strtok(WordSize, delim);

int WordDealer(){
    FILE *file1;
        file1 = fopen("bigKeywords.txt", "r");
        while (!feof(file1)){
            fgets(WordSize, 2000, file1);
        }
        fclose(file1);

        while (Bigck2 != NULL)
	{
	    stringArray[f] = Bigck2;
//		printf("\n'%s'", Bigck2);
		Bigck[BigI] = Bigck2;
		BigI++;
		Bigck2 = strtok(NULL, delim);
		BigNOW++;
	}


    FILE *file2;
        file2 = fopen("mediumKeywords.txt", "r");
        while (!feof(file)){
            fgets(WordSize, 15000, file2);
        }
        fclose(file2);

        while (Medck2 != NULL)
	{
	    stringArray[f] = Medck2;
//		printf("\n'%s'", Bigck2);
		Medck[MedI] = Medck2;
		MedI++;
		Medcl2 = strtok(NULL, delim);
		MedNOW++;
	}



    FILE *file3;
        file3 = fopen("antiKeywords.txt", "r");
        while (!feof(file3)){
            fgets(WordSize, 150000, file3);
        }
        fclose(file3);

        while (Antick2 != NULL)
	{
	    stringArray[f] = Antick2;
//		printf("\n'%s'", Bigck2);
		Antick[AntiI] = Antick2;
		AntiI++;
		Antick2 = strtok(NULL, delim);
		AntiNOW++;
	}

char *AntiWords[WSize] = Antick;
char *MedWords[WSize] = Medck;
char *BigWords[WSize] = Bigck;
}*/
