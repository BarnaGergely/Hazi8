#include <stdio.h>

int betoltoMeret(char forras[100], int *meret){
    FILE *infile;

    if (!(infile = fopen(forras, "r"))) {
        return 1;
    }
    fscanf("%d %d", meret[0], meret[1]);

    fclose(infile);
    return 0;
}

int betoltoMeteor(char forras[100], int *meteorok){
    FILE *infile;

    if (!(infile = fopen(forras, "r"))) {
        return 1;
    }

    return 0;
}

int kiiro(int szam, char file[100]){
    FILE *outfile;

    if (!(outfile = fopen("ki.txt", "w"))) {
        fclose(outfile);
        return 1;
    }
    fprintf(outfile, "%.3lf\n", szam);
    fclose(outfile);

    return 0;
}

int main() {

    /* BETOLTES */
    int meret[2];
    if (betoltoMeret("be.txt", &meret) == 1){

        return 1;
    }


    /* SZAMOLAS */



    return 0;
}
