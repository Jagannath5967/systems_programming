//Student Record System using Static Arrays

#include<stdio.h>

int count=0;


struct student{
    int id;
    char name[100];
    int marks;
};
void addStudentRecord(struct student s[]);
void displayStudentRecord(struct student s[]);
int isUniqueID(struct student s[], int id);
int searchStudentRecord(struct student s[], int id);
void deleteStudentRecord(struct student s[], int id);

int main(){
    struct student s[100];
    int opr;
    int unique=1;
    int searchId;
    int deleteID;
    int searchindex;

    printf("Welcome to Student Record System");
    do {
        printf("\nEnter the operation you want to perform\n1.Add Student Record \n2.Display Student Record\n3.Exit\n4.search the record\n5.Delete the Student Record \nEnter the operationhere:");
        scanf("%d",&opr);
        switch(opr){
        case 1:
            addStudentRecord(s);
            break; 
        case 2:
            displayStudentRecord(s);
            break;
        case 3:
            printf("Exiting the program...");
            break;    
        case 4:
            printf("\nEnter the ID to search:");
            scanf("%d",&searchId); 
            searchindex =searchStudentRecord( s, searchId);
            break;
        case 5:
            printf("\nEnter the ID to delete the record:");
            scanf("%d",&deleteID);
            deleteStudentRecord(s, deleteID);
            break;
        default:
            printf("invalid entry");
            break;
    }
    }
    while(opr!=3);
    return 0;
}
void addStudentRecord(struct student s[]){
    int n, i;
    printf("Enter the number of student data you want to enter:");
    scanf("%d",&n);
    if(count + n > 100){
    printf("Limit exceeded. You can only add %d more students.\n", 100 - count);
    return;
    }
    for(i=count;i<count+n;i++){
        int valid;
        do{
            printf("\nEnter the id of student %d:",i+1);
            scanf(" %d",&s[i].id);
            valid=isUniqueID(s, s[i].id);
            if(!valid){
                printf("ID already exists. Try again.\n");
            }
        } while(!valid);   

        
        printf("\nEnter the name of student %d:",i+1);
        scanf(" %99[^\n]", s[i].name);
        printf("\nEnter the marks of the student %d:",i+1);
        scanf("%d",&s[i].marks);
    }
    count+=n;
}
void displayStudentRecord(struct student s[]){
    int i;
    if(count==0){
        printf("\nNo Student Record found.");
    }
    else{
        printf("\n Student Record");
        printf("\nId: \t\tName: \t\tMarks: ");
        for(i=0;i<count;i++){
        printf("\n%d\t\t%s\t\t%d",s[i].id,s[i].name,s[i].marks);
    }
    }
    
}
int isUniqueID(struct student s[], int id){
    int i;
    for(i=0;i<count;i++){
        if(s[i].id==id){
            return 0;
        }
        
    }
    return 1;
}

int searchStudentRecord(struct student s[], int Sid){
    int i;
    for(i=0;i<count;i++){
        if(s[i].id==Sid){
            printf("\n Student record found:\n");
            printf("\nID\t\tName\t\tMarks\n");
            printf("%d\t\t%s\t\t%d\n",s[i].id,s[i].name,s[i].marks);
            return i;
        }
        else{
            
            continue;
        }
    }
    printf("\n Student record not found for ID: %d\n",Sid);
    return -1;
    
}

void deleteStudentRecord(struct student s[], int deleteID){
    int i,j;
    for(i=0;i<count;i++){
        if(s[i].id==deleteID){
            printf("\nThe record with following details id deletd");
            printf("\nID\t\tName\t\tMarks");
            printf("\n%d\t\t%s\t\t%d",s[i].id,s[i].name,s[i].marks);
            for(j=i;j<count-1;j++){
                s[j]=s[j+1];
            }
            count--;
            return;
        }
    }
    printf("\n Student Record not found for the ID: %d\n",deleteID);
}