#include<stdio.h>
#include<string.h>

typedef struct {
    char name[50];
    char surname[50];
    int studentId;
} Student;

int main(){
    Student students[50];
    int choose = 1;
    char name[50];
    char surname[50];
    int number;
    int lastIndex = 0;

    while(choose != 0){
        printf("Welcome to Student Registration System\n");
        printf("Type a number\n");
        printf("1-Create a student\n");
        printf("2-Delete a student\n");
        printf("3-List The students \n");
        printf("0-Exit\n");
        scanf("%d",&choose);
        if(choose == 1){
            Student s1;
            printf("Name: ");
            scanf("%49s", &name);
            strcpy(s1.name,name);
            printf("Surname: ");
            scanf("%49s", &surname);
            strcpy(s1.surname,surname);
            printf("ID: ");
            scanf("%d", &s1.studentId);
            students[lastIndex] = s1;
            lastIndex++;
            
        }else if( choose == 2){
            for (int i = 0; i < lastIndex; i++)
            {
                if(students[i].studentId != 0)
                    printf("%d - %s %s , Number: %d\n", i+1, students[i].name,students[i].surname, students[i].studentId);
                
            }    
            int deleteStudent = -1;    
            scanf("%d", &deleteStudent);
            if(deleteStudent != 0){
                int delUser = deleteStudent-1;
                strcpy(students[delUser].name, "");
                strcpy(students[delUser].surname,"");
                students[delUser].studentId = 0;
            }
            
            
        }else if(choose == 3){
            for(int i = 0; i< lastIndex; i++)
            if(students[i].studentId != 0)
                    printf("%d - %s %s , Number: %d\n", i+1, students[i].name,students[i].surname, students[i].studentId);
        }
    }
    Student s1 = {"muhammed", "Ceyhan", 2022};
    printf("%s,%s,%d",s1.name,s1.surname,s1.studentId);


    return 0;
}