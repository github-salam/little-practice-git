#include <stdio.h>
#include <string.h>

typedef struct Structure
{
    char name[20];
    int age;
}S;


int main(){

    S n1, n2;

    strcpy(n1.name, "Abdus Salam");
    strcpy(n2.name, "Elen");
    n1.age = 22;
    n2.age = 18;

    printf("Name - %s\tAge - %d\nName - %s\tAge - %d\n", n1.name, n1.age, n2.name, n2.age);

    return 0;
}