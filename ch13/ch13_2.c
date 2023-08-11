#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main() {
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], month_str[3], hour_str[3], min_str[3], msg_str[MSG_LEN + 1];
    int num_remind = 0;
    int day, month, hour, min;

    int i, j;

    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --");
            break;
        }

        printf("Enter day in mm/dd format followed by time in hh:mm format and reminder: \n");
        scanf("%2d/%2d ", &month, &day);
        if (month == 0) {
            break;
        } else if (day < 0 || day > 31) {
            printf("Invalid day");
            continue;
        }
        sprintf(day_str, "%2d", day);
        sprintf(month_str, "%2d", month);

        scanf(" %2d:%2d", &hour, &min);
        if (hour > 24 || min >= 60) {
            printf("Invalid hour");
            continue;
        }
        sprintf(hour_str, "%2d", hour);
        sprintf(min_str, "%2d", min);

        char date_time[12];
        sprintf(date_time, "%s/%s %s:%s", month_str, day_str, hour_str, min_str);

        read_line(msg_str, MSG_LEN);
        for (i = 0; i < num_remind; i++) {
            char curr_date_time[12] = { '\0' };
            strncpy(curr_date_time, reminders[i], 12);
            printf("date_time, %s \n", date_time);
            printf("curr_date_time %s\n", curr_date_time);
            if (strcmp(date_time, curr_date_time) < 0) {
                break;
            }
        }
        for (j = num_remind; j > i; j--) {
            strcpy(reminders[j], reminders[j - 1]);
        }

        strcpy(reminders[i], month_str);
        strcat(reminders[i], "/");
        strcat(reminders[i], day_str);
        strcat(reminders[i], " ");
        strcat(reminders[i], hour_str);
        strcat(reminders[i], ":");
        strcat(reminders[i], min_str);
        strcat(reminders[i], msg_str);
        printf("reminder %s\n", reminders[i]);
        num_remind++;
    }

    printf("\nDay Reminders\n");
    for (i = 0; i < num_remind; i++) {
        printf(" %s\n", reminders[i]);
    }
}

int read_line(char str[], int n) {
    int ch, i = 0;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}