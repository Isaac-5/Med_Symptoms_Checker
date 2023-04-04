#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int choice;
    char medical_history[100];
    char family_history[100];
    char surgical_history[100];
    char allergies[100];
    char medications[100];
    char symptoms[200];
    int condition;
    printf("Do you have a recurring Medical History? (1 for Yes or 0 for No): ");
    scanf("%d", &condition);
    if(condition)
    {
        do {
            printf("1. Medical history\n");
            printf("2. Family history\n");
            printf("3. Surgical history\n");
            printf("4. Allergies\n");
            printf("5. Medications\n");
            printf("6. Quit\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
            switch(choice) {
                case 1:
                    printf("Please enter the patient's medical history: ");
                    scanf("%s", medical_history);
                    break;
                case 2:
                    printf("Please enter the patient's family history: ");
                    scanf("%s", family_history);
                    break;
                case 3:
                    printf("Please enter the patient's surgical history: ");
                    scanf("%s", surgical_history);
                    break;
                case 4:
                    printf("Please enter the patient's allergies: ");
                    scanf("%s", allergies);
                    break;
                case 5:
                    printf("Please enter the patient's medications: ");
                    scanf("%s", medications);
                    break;
                case 6:
                    printf("Thank you and stay safe.\n");
                    exit(0);
                default:
                    printf("Invalid choice.\n");
                    break;
            }
            getchar(); // consume the newline character left in the input stream by the scanf() function
        } while(choice!=6);
    }
    else {
        getchar(); // consume the newline character left in the input stream by the previous scanf() function
        printf("Enter your symptoms (use small letters and a comma to separate the symptoms): ");
        fgets(symptoms, 200, stdin);
    }

    // Diagnosing Hypertension
    if (strstr(symptoms, "high blood pressure") != NULL || (strstr(symptoms, "dizziness") != NULL 
        || strstr(symptoms, "blurred vision") != NULL && strstr(symptoms, "chest pain") != NULL)) {
        printf("You may have Hypertension.\n");
    }
    
    // Diagnosing Diabetes---
    if ((strstr(symptoms, "frequent urination") != NULL || strstr(symptoms, "slow healing of wounds ") != NULL 
        || strstr(symptoms, "increased thirst and hunger") != NULL && strstr(symptoms, "numbness in hands and feet") != NULL)
        || strstr(symptoms, "dry mouth") != NULL) {
        printf("You may have Diabetes.\n");
    }

    // Diagnosing Malaria
    if (strstr(symptoms, "fever") != NULL || strstr(symptoms, "chills") != NULL 
        || strstr(symptoms, "headache") != NULL && strstr(symptoms, "muscle pain") != NULL) {
        printf("You may have Malaria.\n");
    }

    // Diagnosing HIV/AIDS
    if ((strstr(symptoms, "fatigue") != NULL || strstr(symptoms, "night sweats") != NULL
        || strstr(symptoms, "unintentional weight loss") != NULL && strstr(symptoms, "recurring infections") != NULL)) {
        printf("You may have HIV/AIDS.\n");
    }
    // Diagnosing Pneumonia
    if (strstr(symptoms, "cough") != NULL || strstr(symptoms, "fever") != NULL 
     || strstr(symptoms, "shortness of breath") != NULL  || strstr(symptoms, "chest pain") != NULL) {
        printf("You may have Pneumonia.\n");
    }

    // Diagnosing Tuberculosis
    if (strstr(symptoms, "cough") != NULL || strstr(symptoms, "fever") != NULL 
	&& strstr(symptoms, "night sweats") != NULL || strstr(symptoms, "shortness of breath") != NULL 
	|| strstr(symptoms, "unintentional weight loss") != NULL || strstr(symptoms, "chest pain") != NULL) {
        printf("You may have Tuberculosis.\n");
    }

    // Diagnosing Diarrhea
    if (strstr(symptoms, "loose stools") != NULL && strstr(symptoms, "abdominal pain") != NULL
	 || strstr(symptoms, "nausea") != NULL && strstr(symptoms, "vomiting") != NULL) {
        printf("You may have Diarrhea.\n");
    }

    // Diagnosing Typhoid
    if (strstr(symptoms, "high fever") != NULL && strstr(symptoms, "abdominal pain") != NULL 
	&& strstr(symptoms, "headache") != NULL && strstr(symptoms, "loss of appetite") != NULL) {
        printf("You may have Typhoid.\n");
    }

    // Diagnosing Cholera
    if (strstr(symptoms, "watery diarrhea") != NULL && strstr(symptoms, "vomiting") != NULL 
	&& strstr(symptoms, "dehydration") != NULL || strstr(symptoms, "muscle cramps") != NULL) {
        printf("You may have Cholera.\n");
    }

    // Diagnosing Measles
    if (strstr(symptoms, "fever") != NULL || strstr(symptoms, "runny nose") != NULL 
	|| strstr(symptoms, "cough") != NULL && strstr(symptoms, "rash") != NULL) {
        printf("You may have Measles.\n");
    }

    // Diagnosing Hepatitis B
    if (strstr(symptoms, "abdominal pain") != NULL || strstr(symptoms, "dark urine") != NULL 
	|| strstr(symptoms, "fatigue") != NULL || strstr(symptoms, "jaundice") != NULL) {
        printf("You may have Hepatitis B.\n");
    } 

return 0;
}



   

 	
 	
 	
 	
 


