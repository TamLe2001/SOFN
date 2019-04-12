#include "Bio.h"




    file = fopen("bigKeywords.txt", "r");
        while (!feof(file)){
            fgets(stringFile, 150000, file);
        }
        fclose(file);

	for(Checker=0;Checker<numberOfWords;Checker++){
        for(Checker2=0;Checker2<NumOfKWords;Checker2++){
        if(strcmp(Each[Checker],keyWord[Checker2]) == 0){
            k++;
            }
        }
	}


        file = fopen("melduimKeywords.txt", "r");
        while (!feof(file)){
            fgets(stringFile, 15000, file);
        }
        fclose(file);

	for(Checker=0;Checker<numberOfWords;Checker++){
        for(Checker2=0;Checker2<NumOfKWords;Checker2++){
        if(strcmp(Each[Checker],keyWord[Checker2]) == 0){
            k++;
            }
        }
	}

    file = fopen("antiKeywords.txt", "r");
        while (!feof(file)){
            fgets(stringFile, 150000, file);
        }
        fclose(file);

	for(Checker=0;Checker<numberOfWords;Checker++){
        for(Checker2=0;Checker2<NumOfKWords;Checker2++){
        if(strcmp(Each[Checker],keyWord[Checker2]) == 0){
            k++;
            }
        }
	}
