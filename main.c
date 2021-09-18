#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    int minutes;
    int seconds;

    printf("\n -- Enter hours: ");

    scanf("%d", &hours);

    printf("\n -- Enter minutes: ");

    scanf("%d", &minutes);

    printf("\n -- Enter seconds: ");

    scanf("%d", &seconds);

    if(seconds > 59) {
        printf("Seconds can be max 59");
    } else if(minutes > 59) {
        printf("Minutes can be max 59");
    } else if(hours > 23) {
        printf("Hours can be max 23");
    } else {

        for(seconds; seconds <= 60; seconds++) {


            if(seconds == 60) {
            minutes = minutes + 1;
            seconds = 0;
            }

            if(minutes == 60) {
            hours = hours + 1;
            minutes = 0;
            }

            if(hours == 24) {
                hours = 0;
                minutes = 0;
                seconds = 0;
            }

            printf("\n\n --- ");
            if(hours < 10) {
             printf(" HH 0%d :: ", hours);
            } else {
             printf(" HH %d :: ", hours);
             }

             if(minutes < 10) {
             printf(" MM 0%d :: ", minutes);
            } else {
             printf(" MM %d :: ", minutes);
             }


            if(seconds < 10) {
                printf(" SS 0%d", seconds);
            } else {
                printf(" SS %d", seconds);
            }

              printf(" --- \n\n");

            //printf("\n\n HH %d :: MM %d :: SS %d\n\n", hours, minutes, seconds);

            sleep(1);

            system("cls");
        }

    }

    printf("\n\n\n");
    return 0;
}
