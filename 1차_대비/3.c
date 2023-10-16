#include <stdio.h>

typedef struct applicant {
    char name[11];

    int written_test_score;
    int interview_score;

    int birth_year;
    int birth_month;
    int birth_date;
} Applicant;

void swap(Applicant *p, Applicant *q);
int needSwitch(Applicant first, Applicant second);
int getBirth(Applicant applicant);
double getScore(Applicant applicant);

int main()
{
    Applicant applicants[100];
    int N, M, i, j;

    scanf("%d %d", &N, &M);

    for(i = 0; i < N; i++)
    {
        scanf("%s", applicants[i].name);
        scanf("%d-%d-%d", &applicants[i].birth_year, &applicants[i].birth_month, &applicants[i].birth_date);
        scanf("%d %d", &applicants[i].written_test_score, &applicants[i].interview_score);
    }

    for(i = N - 1; i > 0; i--)
        for(j = 0; j < i; j++)
            if(needSwitch(applicants[j], applicants[j + 1]))
                swap(&applicants[j], &applicants[j + 1]);
        
    for(i = 0; i < M; i++)
        printf("%s %.1lf\n", applicants[i].name, getScore(applicants[i]));

    return 0;
}

void swap(Applicant *p, Applicant *q)
{
    Applicant temp;

    temp = *p;
    *p = *q;
    *q = temp;

    return;
}

int needSwitch(Applicant first, Applicant second)
{
    if(getScore(first) > getScore(second))
        return 0;

    else if(getScore(first) < getScore(second))
        return 1;

    if(first.written_test_score > second.written_test_score)
        return 0;

    else if(first.written_test_score < second.written_test_score)
        return 1;

    if(getBirth(first) > getBirth(second))
        return 0;

    else if(getBirth(first) < getBirth(second))
        return 1;

    return -1;
}

double getScore(Applicant applicant)
{
    return (double)applicant.written_test_score * 0.8 + (double)applicant.interview_score * 0.2;
}

int getBirth(Applicant applicant)
{
    return applicant.birth_year * 10000 + applicant.birth_month * 100 + applicant.birth_date;
}