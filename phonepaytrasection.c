#include <stdio.h>
#include <string.h>

#define MAX_TRANSACTIONS 100

struct Transaction {
    int Transaction_ID;
    char User_name[50];
    char User_ID[50];
    int Amount;
    char Beneficiary_ID[50];
    int date_day;
    int date_month;
    int date_year;
    int time_hours;
    int time_minutes;
    int time_seconds;
};

void displayTransaction(struct Transaction t) {
    printf("%d %s %s %d %s %d-%d-%d %d:%d:%d\n", t.Transaction_ID, t.User_name, t.User_ID, t.Amount, t.Beneficiary_ID, t.date_day, t.date_month, t.date_year, t.time_hours, t.time_minutes, t.time_seconds);
}

int main() {
    int N;
    scanf("%d", &N);

    struct Transaction transactions[MAX_TRANSACTIONS];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %s %d %s %d %d %d %d %d %d", &transactions[i].Transaction_ID, transactions[i].User_name, transactions[i].User_ID, &transactions[i].Amount, transactions[i].Beneficiary_ID, &transactions[i].date_day, &transactions[i].date_month, &transactions[i].date_year, &transactions[i].time_hours, &transactions[i].time_minutes, &transactions[i].time_seconds);
    }

    int searchTransactionID;
    scanf("%d", &searchTransactionID);

    int found = 0;
    for (int i = 0; i < N; i++) {
        if (transactions[i].Transaction_ID == searchTransactionID) {
            displayTransaction(transactions[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No transaction with transaction id %d.\n", searchTransactionID);
    }

    return 0;
}
