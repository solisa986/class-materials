# Class Activities

---

## CA 1

Q1) Assume the sequence of bits stored in the 1GB raw dataset are in the format below: 
0,1,0,1,0,1 ........ 0,1,0,1
How many 0's and 1's do we have in the dataset? *
```
8 billion bits total (4 billion 0's and 4 billion 1's)
```
---

Q2) 
What is the maximum positive decimal number that can be stored using 1 byte?
 *
```
255
```
---

Q3) Draw a 4 bit truth table and upload the file below.  *

```
refer to midterm file
```
---

## CA 2

Q1) WAP to find the sum of the first 100 natural numbers. The numbers are in sequence 1,2,3,4,....100.
You may use for/while loop to compute this. You may also do this without using any type of loops. Just paste your completed code in the space provided below. *
```
#include <stdio.h>
int main(){
  int sum = 0;
  for (int i = 1; i <= 100; i++) {
    sum += i;
  }
  printf("Sum: %d ", sum);
  return 0;
}
```
---

Q2)
WAP to display and classify the even and odd numbers between 1 and 25 (inclusive). PS the screenshot below for the expected output. Just paste your completed code in the space provided below. 
 *
```
#include <stdio.h>
int main(){
  printf("Even: ");
  for (int i = 1; i <= 25; i++) {
    if (i%2 == 0) {
      printf("%d ", i);
    }
  }
  printf("\nOdd: ");
  for (int i = 1; i <= 25; i++) {
    if (i%2 == 1) {
      printf("%d ", i);
    }
  }
  printf("\n");
  return 0;
}
```
---

Q3)
WAP to display a grid of sequential natural numbers in a 5 by 5 format. That is 5 rows and 5 columns. PS the screenshot below for the expected output. Pay careful to the attention to the format used in displaying the numbers in the grid. It is expected that you match the format. Solve the logic first by figuring out the formula to use. Just paste your completed code in the space provided below.  *
```
#include <stdio.h>
int main() {
   for (int i = 1; i <= 25; i++) {
    printf("%d\t", i);
    if (i%5 == 0) {
      printf("\n");
    }
   }
  return 0;
  }

OR

#include <stdio.h>
int main() {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%2d ", 5*i + j + 1);
    }
    printf("\n");
  }
  return 0;
}
```
---

## CA 3

Q1) WAP to display a triangle. Assume the height or number of rows in the triangle as 5. An incomplete starter code is provided in Week2/src/code-09082022/triangle.c file. Just paste your completed code in the space provided below. *
```
#include <stdio.h>
int main(){
	for (int i = 0; i < 5; i++){
		/* add your code here  */
		for (int j =0; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
```
---

Q2)
We discussed how ASCII is important in translating a character into an integer. Assume that we are given with a series of characters all in mixed casing. How do you convert them into Upper case and Lower case using ASCII as the core logic? I am not looking for the actual code here. You may just type a pseudocode or describe your logic in a few words.
 *
```
In order to convert the Upper case into Lower case would be to find the difference between the ASCII values. For 'A' converting to 'a', it is an additional 32 ASCII values. For 'Z' to 'z', it is again an additional 32 ASCII values. For converting from lowercase to uppercase, then we would instead subtract 32 from the ASCII value. The same could be said for all characters in the A-Z, a-z alphabet, where we could therefore apply this logic to all conversions regarding Uppercase and Lowercase using ASCII.
```
---

Q3) WAP to implement a simple calculator. That is with four operators, namely, add, sub, mul, and div. The starter code in the Week2/src/code-09082022/calculator.c has already implemented the add method and their functionality. Follow the similar structure and introduce the three new methods such as: sub, mul, and div. Invoke these three methods from the main method to implement the calculator. Just paste your completed code in the space provided below.
 *
```
#include <stdio.h>
int add(int x, int y){
  int z = x + y;
  return z;

}

int sub(int x, int y){
  int z = x - y;
  return z;
}

int div(int x, int y){
  int z = x / y;
  return z;
}

int mult(int x, int y){
  int z = x * y;
  return z;
}

int main()
{ 
    int first, second = 0;
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    int result1 = add(first, second);
    printf("Sum: %d\n", result1);
    
    int result2 = sub(first, second);
    printf("Difference: %d\n", result2);

    int result3 = mult(first, second);
    printf("Product: %d\n", result3);

    int result4 = div(first, second);
    printf("Quotient: %d\n", result4);
    return 0;
}
```
---

## CA 4

Q1) WAP to store and process the first 5 even numbers starting from 0. Assume 0 as an even number. An incomplete starter code is provided in Week3/src/numbers.c file. Just paste your completed code in the space provided below. *
```
#include <stdio.h>
void loader1(int sequence[], int size){
	/* load odd numbers here ... */
	for (int i = 0; i < 2*size; i++){
		if (i % 2 == 1){
			sequence[i/2] = i; // 0 to 9
		}
	}
}
void loader2(int sequence[], int size){
	/* load even numbers here ... */
	for (int i = 0; i < 2*size; i++){
		if (i % 2 == 0){
			sequence[i/2] = i; // 0 to 9
		}
	}
}
void processor(int sequence[], int size){
	for (int i = 0; i < size; i++){
		printf("%d\t", sequence[i]);
	}
	printf("\n");
}
int main(){
	int size = 5;
	int odd[size];
	int even[size];
	loader1(odd, size);
	loader2(even, size);
	processor(odd, size);
	processor(even, size);
	return 0;
}
```
---

Q2)
Upload your completed rating.c program in the space provided below:
 *
```
#include <stdio.h>
#define SIZE 5
void doSurvey(int ratings[]){
	/* add logic here */
	for (int i = 0; i < SIZE; i++){
		printf("Enter your rating 1-10 ");
		scanf("%d", &ratings[i]);
	}
}
void printSurvey(int ratings[]){
	printf("-----------------PRINTING REPORT--------------------\n");
	/* add logic here */
	int sum = 0;
	int low = 1;
	int high = 10;
	for (int i = 0; i < SIZE; i++){
		printf("%d\t", ratings[i]);
		sum += ratings[i];
		if (ratings[i] > low){
			low = ratings[i];
		}
		if (ratings[i] < high){
			high = ratings[i];
		}
	}
	printf("\n");
	printf("Total ratings: %d\n", sum);
	printf("Best: %d\n", low);
	printf("Worst: %d\n", high);
	printf("-------------------------------------\n");
}

int main(){
	int ratings[SIZE]; // variable length array
	doSurvey(ratings); 
	printSurvey(ratings);
	return 0;
}
```
---

Q3) In your words, write down the difference between pass by value and pass by reference while dealing with method invocation. 
 *
```
Pass by value is when you pass the value of the integer. Pass by integer is when you pass the address of the integer.
```
---

## CA 5

Q1) What is the difference between Stack and Heap memory? *
```
Stack memory is a static array, which has a limited amount of memory. In heap memory, this is a dynamic array, which has a non-limited amount of memory.
```
---

Q2)
FBI officers are trying to narrow down and search for a suspect based on their location. FBI currently has access to the data points that lists the locations traveled by the suspect. This is the high level requirement.
We need to think, design, develop appropriate logic, and implement the program.
We have access to the FBI.c program in Week4/src directory that needs to be completed. The expected output format is shown in the screenshot below. This is only the format, actual output may differ because the data.txt file is randomly generated every single time. First, write a summary of what the code is doing in the space provided below.
 *
```
This program starts by writing into the file and declaration a random set of limits for the data. Then, we loaf the data into all of the locations from the file into an array. It also checks for an error in the input just in case. Then, it transforms the data into a 2 dimensional array so that we can cross reference the 2 different reports. For report 1, we are simply printing all of the data inside of the array. For report 2, we are printing out the number of instances that the specific data was referenced during the random assignment. Then, in order to identify the suspect, we iterate through the rows, check that the data point is not higher than the high count, and then returning a probable suspect. The main method then runs the functions we declared and put in simulated data for the program.
```
---

Q3) Paste your completed code in the space provided below:
 *
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20 // size indicates total number of location numbers.

void write(char *file) {
  // write to file
  FILE *fp = fopen(file, "w+"); // w+ is for write mode for file writing
  int upper = 10006, lower = 10001;
  srand(time(0));
  for (int i = 1; i <= SIZE; i++) {
    int location = (rand() / (double)RAND_MAX) * (upper - lower) + lower;
    if (i % 5 == 0 && (i > 1 && i < SIZE))
      fprintf(fp, "%d\n", location);
    else
      fprintf(fp, "%d\t", location);
  }
  fclose(fp);
}

void load(char *file, int *arr) {
  // load all the locations (lat/long) from the file into the array arr.
  int c = 0;
  int location = 0;
  int index = 0;
  FILE *fp = fopen(file, "rb");    // rb is for read mode for file reading
  while ((c = fgetc(fp)) != EOF) { // fgetc is for getting characters from file
                                   // directly than std stream.
    // develop your logic here to build each location and add it to the array.
    if (c == '\t' || c == '\n') { /* Check for error in input */
      *(arr + index) = location;
      location = 0;
      index++;
    } else {
      int digit = c - '0';
      location = 10 * location + digit;
    }
  }
}

void transform(int *arr, int *twod, int rows) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < SIZE; j++) {
      if (*(twod + 2 * i) == *(arr + j)) {
        *(twod + 2 * i + 1) = *(twod + 2 * i + 1) + 1;
      }
    }
  }
}

void report1(int *arr) {
  for (int i = 0; i < SIZE; i++) {
    printf("%d\t", *(arr + i));
  }
  printf("\n");
}

void report2(int *twod, int rows) {
  for (int i = 0; i < rows; i++) {
    printf("%d\t%d\n", *(twod + 2 * i), *(twod + 2 * i + 1));
  }
}

void identifySuspect(int *twod, int rows) {
  int high_count = 0;
  int suspect_location = 0;
  /* add logic here */
  for (int i = 0; i < rows; i++){
	if (*(twod + 2*i + 1) > high_count){
		high_count = *(twod + 2 * i + 1);
		suspect_location = *(twod + 2 * i);
	}
  }
  printf("Suspect may be in: %d\n", suspect_location);
}

int main() {
  char *file = "data.txt";
  int *arr = (int *)malloc(SIZE * sizeof(int)); // dynamic array
  int zips = 5;
  int twod[5][2] = {{10001, 0},
                    {10002, 0},
                    {10003, 0},
                    {10004, 0},
                    {10005, 0}}; // static array
  write(file);
  load(file, arr);
  printf("----------------------------------------------\n");
  report1(&arr[0]);
  printf("----------------------------------------------\n");
  transform(arr, &twod[0][0], zips);
  report2(&twod[0][0], zips);
  printf("----------------------------------------------\n");
  identifySuspect(&twod[0][0], zips);
  return 0;
}
```
---

## CA 6

Q1) Analyze the twod.c source code provided in Week4/src directory. Write down a short analysis report to summarize the actions performed by the methods m1, m2, m3, m4, and m5. Now, you may choose to execute the code a few times to understand the implementation of the code in this class activity. Note: In the exam, you will not be able to execute the code using GCC, and hence it is a good idea to analyze the code first without executing it and write down the initial version of the understanding report on your notebook. Then, you may execute the code to verify if your understanding was correct and fine tune the analysis report accordingly.  *
```
m1) This will refer to the address of the beta pointer with the given alpha value. it will take the beta array and fill out the dynamic array while the index position is less than alpha, which is 9
m2) This will refer to the address of delta given gamma's value, where gamma is the square root of alpha and delta is the pointer of an array of gamma values. This then initializes the 1d array of gamma.
m3) This will refer to the address of delta and of beta given gamma's value as the square root of alpha. This will initialize a 2d array for delta.
m4) This will refer to the address of beta given the value of alpha. This will print out the static array for beta's pointer, going up by one incrementally. It will also print out a new line.
m5) This will refer to the address of delta given gamma's value of the square root of alpha. This will create the storage needed to initialize the 2d array for delta. This will then print out the result of the previous array + the value of j. Since it is a 2d array, j will refer to the rows that have been iterated over.
```
---

Q2) How many dynamic one dimensional array(s) does the delta array reference in total?
 *
```
3
```
---

Q3) Beta is a one dimensional array. Is it static or dynamic? *
```
dynamic
```
---

Q4) Delta is an array of pointers. Is it static or dynamic?
```
static
```
---

Q5) What is the difference between -> and . operator in the context of Structs?
 *
```
'.' is used to reference the members of the struct and '->' is used for pointers to access the members of the struct.
```
---

Q6) Complete the exercise provided in the Wee5/part1 Performance lecture slides and write down your solution using the space provided below. 
 *
```
clock c has a 252 x 10^7 clock rate. I think that clock C is the fastest because it has the highest clock rate, which means that it will run the processes the fastest.

clock A - 24 x 10^9
clock B - 56 x 10^8
clock C - 252 x 10^7
```
---

## CA 7

Q1) Let us suppose that two machines A and B have the following specifications with same ISA. Which one is faster and by how much? *
```
A: (I * 12)/(4 * (10^9)) = 3I(10^-9)
B: (I * 4)/(2 * (10^9)) = 2I(10^-9)

Computer B is faster because it has the lowest clock time.
```
---

Q2) A program is run in two machines, A and B. Both machines take the same number of clock cycle time. Because we are executing the same program, no of instruction(s) is the same on both machines. Assume that CPI on machine A takes longer than CPI on machine B. So, now which among the two machines complete executing the program first? *
```
Computer B will complete the program first because it has the lower CPI time, which will lead to a lower overall CPU time.
```
---

Q3) Alternative compiled code sequences using instructions in classes A, B, and C. Find the execution time associated with both Sequence 1 and Sequence 2 respectively? Also which sequence is faster and by how much? *
```
The execution time for Sequence 2 is 4.5 nanoseconds and for Sequence 1 is 5 nanoseconds. Sequence 2 is 1.1 times faster than Sequence 1.
```
---

## CA 8

Q1) Convert decimal fraction 12.75 to binary? *
```
1100.11
```
---

Q2) Convert binary fraction 1010.1001 to decimal? *
```
10.5625
```
---

Q3) Solve binary addition for the expression (8+7)? *
```
1111 = 15
```
---

Q4) Solve the binary addition for the expression (5+6)?
 *
```
1011 = 11
```
---

Q5) Solve binary subtraction for the expression (13-7)?
 *
```
0110 = 6
```
---

## CA 9

Q1) Complete the multiply-incomplete problem provided in the Week7-8 directory in class repo. Paste your completed solution using the space provided below.  *
```
------------------------------------------------
5*6
------------------------------------------------
  Multiplicand 	|	Multiplier  |  Product   |
------------------------------------------------
  0000 0101     |	0000 0110   |  0000 0000 |
  0000 1010     | 0000 0011   |  0000 0000 |
------------------------------------------------
  0001 0100		  |	0000 0001 	|  0000 1010 |
------------------------------------------------
  0010 1000     | 0000 0000   |  0001 1110 |
------------------------------------------------
Answer: 0001 1110  = 16 + 8 + 4 + 2  =  30
```
---

# Quizzes

## Quiz 1

Q1 -- Draw a 4-bit binary match table on a sheet of paper. Which among the following best represent the decimal value 11 in binary? It is important to note that the decimal values start with 0 and go till 15 for a 4-bit table.
*
```
1011
```
---
 
Q2 - Let us suppose that you are creating a 7-bit binary match table using the bit sequencing b6,b5,b4,b3,b2,b1,b0. The bit sequencing is arranged from left to right (that is b6 left most and b0 rightmost). Bits in b5 flips every ------------ rows. Fill in the blanks!
```
32
```
---
 
Q3 -- The program below contains an implementation of logic to generate a sequence of numbers. The numbers are generated using a formula internally used in the program. Which among the following best represent the sequence of numbers generated by the program? Focus on the logic and numbers, so ignore the formatting such as newline or tab.
*
```
10,5,6,3,4,2
```
---
 
Q4 -- Which among the following operators is used to define the address of variables in C?
*
```
&
```
---
 
Q5) The program below contains an implementation of logic to generate a sequence of characters. Most importantly the characters are generated using mathematical operations using ASCII in the program. Which among the following best represent the output produced by the program? Focus on the logic and characters, so ignore the formatting such as newline or tab.
*
```
zupkf
```
---
 
Q6 -- Which of the following best represent the items compacted into Static Arrays?
*
```
Homogeneous (same type)
```
--- 
 
Q7 -- The program below contains a series of indirection. Which among the following correctly represent the output of the program? Hint: Indirection works the same way regardless of the levels.
*
```
10
```
---
 
Q8 -- The program below contains an interesting logical operation. Which among the following correctly represent the output of the program?
*
```
2 3 1
```
---
 
Q9 - What is the largest positive number that can be represented using 1 byte?
*
```
255
```
---
 
Q10) Which among the following built-in method in C let us parse the user input and store the input in a variable?
*
```
scanf
```
---

## Quiz 2

 
Q1 -- A struct is a -------- data store. Fill in the blanks.
*
```
Heterogeneous
```
---
 
Q2 -- Which among the following external library is used inside C programs to develop dynamic array based data stores?
```
stdlib.h
```
---
 
Q3 -- Analyze the code snippet provided below. This program is used to set up two boxes (data stores), that contain four rows and four columns and are filled with numbers (0 to 15) each using the formula implemented in the code. We need to identify the content of these boxes. The content of the first box is revealed to us. The first row is filled with [0,1,2,3]. The second row is filled with [4,5,6,7]. The third row is filled with [8,9,10,11]. The fourth row is filled with [12,13,14,15]. Now, it is your responsibility to identify the content of the second box. First, draw the two boxes and fill out the content on your scratch paper. Next, identify which among the following best represent the sum of all the numbers in the fourth row of the second box, that is delta2?
*
```
54
```
---
 
Q4) Fill in the blanks. The ------ operator in C is used to  access elements in a struct by using a pointer variable pointing to a struct. Hint: struct student* s2 discussed in class.
*
```
Arrow
```
---
 
Q5 -- Analyze the code snippet provided below. This program is used to set up two struct-based data stores, that contain 2 elements each. Your goal is to understand and find out the details related to the computation that is performed on this data store. That is inside the quiz method. On a high level, the computational block does a series of logical steps to manipulate the values inside the data store. Which among the following best represent the output of the program? Ignore formatting in the output provided like new line, space, etc.. Just focus on the logic and the values printed. 
*
```
Q21.5 P12.5
```
---
 
Q6 -- Two machines M1 and M2 are being compared. Machine M1 with 2Ghz clock rate and 8s CPU time. Machine M2 has 12s CPU time. The number of clock cycles in M2 is 1.5 times as much as the number of clock cycles in M1. Identify which machine is faster based on their clock rate?
*
```
M1 and M2 provide equal performance.
```
---
 
 Q7 -- As per Gordon Moore, the former Intel CEO, chip performance doubles every 18 months. State True or False.
*
```
True
```
---
 
Q8 --Let us suppose a program P runs in 180s on a computer M1. The program P consists of addition, subtraction, multiplication, and division operations. The addition operation takes 10s, subtraction takes 13s, multiplication takes 7s, and division takes 150s CPU time. How much do I have to improve the speed of division if I want my program to run 3 times faster?
*
```
5
```
---
 
Q9 -- Which among the following best represent the decimal representation of hexa decimal value ACE?
```
2766
```
---

Q10 -- Which among the following best represent the binary representation of decimal value 157?
*
```
10011101
```
---

BONUS1 -- BEE is the hexadecimal representation of decimal value 3054? State True or False.
*
```
True
```
---

BONUS2 -- Two machines M1 and M2 runs a program P on their processors. The execution time in M1 is 20s and the execution time in M2 is 30s. How much faster is M1 over M2?
*
```
1.5
```
---
