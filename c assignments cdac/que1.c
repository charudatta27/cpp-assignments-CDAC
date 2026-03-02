// #include<stdio.h>

// int main(){

//    float m1,m2,m3,m4,m5;
//    float total, percentage;
//    char grade;

//    printf("enter the marks of 5 subjects :");
//    scanf("%f %f %f %f %f , &m1,&m2,&m3,&m4,&m5");

//    total = m1+ m2+ m3+ m4+ m5;

//    percentage = total / 5;

//    if(percentage>=75){
//     grade = 'A';
//    }else if(percentage>=60){
//     grade = 'B';
//    }else if(percentage>=45){
//     grade = 'C'; 
//   }else{
//     grade  = 'f';
//   }

//    printf("\n----- Result -----\n");
//     printf("Subject 1: %.2f\n", m1);
//     printf("Subject 2: %.2f\n", m2);
//     printf("Subject 3: %.2f\n", m3);
//     printf("Subject 4: %.2f\n", m4);
//     printf("Subject 5: %.2f\n", m5);

//     printf("Total: %.2f\n", total);
//     printf("Percentage: %.2f%%\n", percentage);
//     printf("Grade: %c\n", grade);

//     return 0;



// }


#include <stdio.h>
#include <stdlib.h>

int main(void) {

		float m1, m2, m3, m4, m5;
		printf("Enter the marks in 5 subjects: \n");
		scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

		float total= m1+m2+m3+m4+m5;
		float per=total/5;

		char grade=(per>=75?'A':(per>=60?'B':(per>=45?'C':'F')));

		printf("Marks in 5 subjects are: \n");
		printf("m1: %f\n",m1);
		printf("m2: %f\n",m2);
		printf("m3: %f\n",m3);
		printf("m4: %f\n",m4);
		printf("m5: %f\n",m5);
		printf("Total Marks: %f\n",total);
		printf("Percentage: %f\n",per);
		printf("Grade: %c\n",grade);

return 0;

}