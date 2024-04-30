#define MAX_NAME_LENGTH 50

struct Student {
    char name[MAX_NAME_LENGTH];
    int age;
    float grade;
};

void C_Function1(struct Student *students, int num_students);
void C_Function2(struct Student *students, int num_students);


