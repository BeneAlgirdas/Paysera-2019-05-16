#include <stdio.h>
#include <stdlib.h>

int main()
{
    char collection[70];
    long ourTeamScores[10];
    long opponentsScores[10];
    int ourTeamPoints=0;
    //scans string
    scanf("%s", collection);

//string newstring= oldstring.Replace("“", "").Replace("”", "");

//    int j = 0;
//    for (int i = 0; i < 70; i ++) {
//            if (collection[i] != '"' && collection[i] != '\\') {
//                 collection[j++] = collection[i];
//            } else if (collection[i+1] == '"' && collection[i] == '\\') {
//                 collection[j++] = '"';
//            } else if (collection[i+1] != '"' && collection[i] == '\\') {
//                 collection[j++] = '\\';
//            }
//}


    //problemos su nuskaitymu!!!!!!!!!!!!!!!!


    char *str = collection, *p = str;
    //while (*p) { // While there are more characters to process...

        for (int i=0; i<20; i++){
        if ( isdigit(*p) || ( (*p=='-'||*p=='+') && isdigit(*(p+1)) )) {
            // Found a number
            long val = strtol(p, &p, 10); // Read number

            //adds scores to two different arrays

//            printf("%ld\n", val);

            if (i%2 == 0){
                ourTeamScores[i]=val;
            }
            if (i%2 != 0){
                opponentsScores[i]=val;
            }


        } else {
            // Otherwise, move on to the next character.
            p++;
        }
    }

//    for (int i=0; i<10; i++){
//            printf("%d:%d\n", ourTeamScores[i], opponentsScores[i]);
//    }

    for (int i=0; i<10; i++){
        if (ourTeamScores[i]>opponentsScores[i])
            ourTeamPoints+=3;

        if (ourTeamScores[i]==opponentsScores[i])
            ourTeamPoints+=1;
    }

    printf("%d", ourTeamPoints);
}
