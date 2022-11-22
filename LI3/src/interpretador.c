#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define filenametemplate "./saida/command%d_output.txt" //usar no ficheiro output

void interpretador(Estatistica est){
    FILE* r_file = fopen("../data/commands.txt","r");
    char* buffer = malloc(sizeof(char) * 200000);
    int filecounter = 0;

    while(fgets(buffer,200000,r_file)){
    filecounter++;
    char* querie_id = strsep(&buffer," ");
    
    if(atoi(querie_id) == 1){
        char* useridstr = strsep(&buffer, " ");
        int userid = atoi(useridstr);

        User user = getUserByIdEst(est, userid);
        if (user != NULL) printf("%s;%s;idade;avaliacao_media;numero_viagens;total_gasto\n", user->name, user->gender);
        else {
            Driver driver = getDriverByIdEst(est, userid);
            if (driver != NULL) printf("%s;%s;idade;avaliacao_media;numero_viagens;total_auferido\n", driver->name, driver->gender);
            else printf("ID inválido.");
        }
    }
    if(atoi(querie_id) == 2){
        printf("querie2\n");
        //querie 2
    }
    if(atoi(querie_id) == 3){
        printf("querie3\n");
        //querie 3
    }
    if(atoi(querie_id) == 4){
        printf("querie4\n");
        //querie 4
    }
    if(atoi(querie_id) == 5){
        printf("querie5\n");
        //querie 5
    }
    if(atoi(querie_id) == 6){
        printf("querie6\n");
        //querie 6
    }
    if(atoi(querie_id) == 7){
        printf("querie7\n");
        //querie 7
    }
    if(atoi(querie_id) == 8){
        printf("querie8\n");
        //querie 8
    }
    if(atoi(querie_id) == 9){
        printf("querie9\n");
        //querie 9
    }
    }
}
