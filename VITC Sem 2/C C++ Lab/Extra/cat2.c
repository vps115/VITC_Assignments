#include <stdio.h>
#include <string.h>

struct employee {
    char name;
    int eid;
    int salary; 
};

void name (struct employee e) {
    e.name = 'J';
}

int annualsalary (struct employee e) {
    return e.salary*12;
}
int main() {
    int n,i;
    scanf("%d", &n);

    struct employee employees[n];
    for (i = 0; i<n; i++) {
        name(employees[i]);
        scanf("%d", &employees[i].eid);
        scanf("%d", &employees[i].salary);
        printf("%d", annualsalary(employees[i]));
    }
    return 0;
}
