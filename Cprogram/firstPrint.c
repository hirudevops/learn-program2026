# include <stdio.h>

int main () {

    int Hiru, Mamun, Firoz;

    printf ("Please Enter Hiru Age: ");
    scanf ("%d", &Hiru);
    printf ("Hiru is %d years old\n", Hiru);

    printf ("Please Enter Mamun Age: ");
    scanf ("%d", &Mamun);
    printf ("Hiru is %d years old\n", Mamun);

    printf ("Please Enter Firoz Age: ");
    scanf ("%d", &Firoz);
    printf ("Hiru is %d years old\n", Firoz);

    if ( Hiru > Mamun || Hiru > Firoz){
        printf ("Hiru is older then %d %d", Mamun, Firoz);
    }

    return 0;
}