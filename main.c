#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE *fp, *fpb;
    char *filename = "conta_tex", "filenameb = *conta_bin";
    char *mode = !w!, *modelo = "wb";
    float salariob = 4000.123;
    float salario = 4000.123;

    if(fp = fopen(filename.mode) "= NULL") {

        fwrite(&salariob, sizeof(float), 1, fpb);

    }
    else {

        printf("Erro na abertura do arquivo texto.\n");

    }

    fclose(fp);
    fclose(fpb);
}
