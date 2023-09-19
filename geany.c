#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE* fp;

    double lapx = 250; // oralap kozepenek x és y koordinataja
    double lapy = 250;
    double sugar=200; // oralap sugara
    double atvaltas=0.0174532925; //szog --> radian atvaltas  szama


    fp = fopen("ora.svg", "w");
    fprintf(fp, "<svg width=\"500\" height=\"500\" xmlns=\"http://www.w3.org/2000/svg\"  version=\"1.1\">\n");
    fprintf(fp,"<circle cx=\"%lf\" cy=\"%lf\" r=\"%lf\" stroke=\"yellow\" />\n",lapx,lapy,sugar);
    for(int i =0; i<60;i++)
    {
        double radian = atvaltas*i*6;
        if(i%5==0)
        fprintf(fp,"<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"yellow\" stroke-width=\"5\" />\n"// orakat jelzo vonalak, ora szeletol tart egy kisebb sugaru kor szele fele
                ,lapx+(cos(radian)*(sugar-30)),lapy+(sin(radian)*(sugar-30))
                ,lapx+(cos(radian)*sugar),lapy+(sin(radian)*sugar));
        else
            fprintf(fp,"<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"yellow\" stroke-width=\"2\" />\n" //perceket jelzo vonalak
                ,lapx+(cos(radian)*(sugar-25)),lapy+(sin(radian)*(sugar-25))
                ,lapx+(cos(radian)*sugar),lapy+(sin(radian)*sugar));
    }

    double ora,perc,masodperc;
    printf("Ora: \n");
    scanf("%lf",&ora);
    printf("Perc: \n");
    scanf("%lf",&perc);
    printf("Masodperc: \n");
    scanf("%lf",&masodperc);
    double szogora=(((ora+(perc/60)+(masodperc/3600))*30)-90)*atvaltas; //mutatok szogeinek kiszamolasa, 90 fokkal el kell tolni hogy 12-tol kezdodjon a szamitas
    double szogperc=((((perc+(masodperc/60))*6)-90))*atvaltas;
    double szogmasodperc=((((masodperc)*6)-90))*atvaltas;

    fprintf(fp,"<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"yellow\" stroke-width=\"5\" />\n" // oramutato
                ,lapx,lapy
                ,lapx+(cos(szogora)*(sugar-85)),lapy+(sin(szogora)*(sugar-85)));
    fprintf(fp,"<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"yellow\" stroke-width=\"3\" />\n" // percmutato
                ,lapx,lapy
                ,lapx+(cos(szogperc)*(sugar-60)),lapy+(sin(szogperc)*(sugar-60)));
    fprintf(fp,"<line x1=\"%lf\" y1=\"%lf\" x2=\"%lf\" y2=\"%lf\" stroke=\"yellow\" stroke-width=\"1\" />\n" // masodpercmutato
                ,lapx,lapy
                ,lapx+(cos(szogmasodperc)*(sugar-50)),lapy+(sin(szogmasodperc)*(sugar-50)));


    fprintf(fp, "</svg>");
    fclose(fp);
    return 0;
}
