//Version: final
//Last Major Update:Wed Oct 18 2017
//Author:
//Description: Calculator

#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926535897932384626433832795
#include "factorial.h"
#include "matrices.h"
#include "powerfunction.h"
#include "conversions.h"
#include <string.h>

FILE *g_help;
float spPrintF(char *screen, char *sym, float ini, float res);
//function to catch invalid input from user
//Returns user input
//Params- String that gets printed to the screen
float input(char *inName) {
    float key;
	char temp[9999];
	
	do {
	    printf("%s", inName);
	    if(!scanf("%f", &key)) {
		    scanf("%s", temp);  //recieve temp
	      	printf("Please try again!\n");
	    } else {
		    return key;
	    }
	} while(1);
    
}

//function to catch invalid input from user
//Returns user input
//Params- String that gets printed to the screen, number that also gets printed to screen
float inputAry(char *inName, int num) {
    float key;
	char temp[9999];

	do {
	    printf("%s[%d]: ", inName, num+1);
        if(!scanf("%f", &key)) {
		    scanf("%s", temp);
	      	printf("Please try again!\n");
	    } else {
		    return key;
	    }
	} while(1);
    
}

//function to add to float values together
//returns the result
//params- to values that need to be added
float plus(float adder, float addin) {
	float result;
	result = adder + addin;
    return result;
}

//function to subtract two values
//returns result
//params-two values to be subtracted
float minus(float miner, float minin) {
	float result;
	result = miner - minin;
	return result;
}

//function to multiply two values
//returns result
//params-two values to be multiplied
float mult(float multer, float multin) {
	float result;
	result = multer * multin;
	return result;
}

//function to divide two values
//returns result
//params-two values to be divided
float divind(float divider, float dividin) {
	float result;
	result = divider / dividin;
	return result;
}

//function to calculate the factorial of a number
//returns 1 if value is equal to 0 otherwise returns factorial
//params 1 int value to be used in factorual calculation
int factorial(int term) {
	if(term == 0) {
		return 1;
	}

	return term * factorial(term - 1);
}

//function to calculate fibonacci sequence
//returns 0 if value is 1 or returns 1 if value is 2 otherwise returns the sequence
//params 1 int value to be used in factorual calculation
int fib(int term) {
	if(term == 1) {
		return 0;
	}
	if(term == 2) {
		return 1;
	}
	return fib(term - 1) + fib(term - 2);
}

//function to calculate power of a number
// returns the result
//params two numbers first is the base, second is the power
float power(float base, int pow) {
	int i;
	float mem = 1;
    
	for(i = 0; i < pow; i++) {
		mem *= base;
	}
    
	return mem;
}

//function to calculate sin
//returns the result
//params- radius of the circle
float sine(float radius) {
	float val,sin;
    val = radius * (PI/180);
    sin = val - (power(val, 3) / factorial(3)) + (power(val, 5) / factorial(5)) - (power(val, 7) / factorial(7));
	
    return sin;
}

//function to calculate the cosine
//returns the result
//params-radius of the circle
float cosine(float radius) {
    float val;
    float cos;
    val = radius * (PI / 180);
    cos = 1 - (power(val, 2) / factorial(2)) + (power(val, 4) / factorial(4)) - (power(val, 6) / factorial(6));
	
    return cos;
}

//Function to print information to screen
//returns 0
//params- information that needs to be printed to screen
int spPrint(char *screen, char *sym, int ini, int res) {
	printf("%s %d%s = %d\n", screen, ini, sym, res);
	
    return 0;
}

//Function to print information to screen
//returns 0
//params-information that needs to be printed to screen
float spPrintF(char *screen, char *sym, float ini, float res) {
	printf("%s %.4f%s = %.4f\n", screen, ini, sym, res);

    return 0;
}

//Function to print information to screen
//returns 0
//params-information that needs to be printed to screen
float print(char *screen, char *sym, float ini, float upt, float res) {
	printf("%s %.4f %s %.4f = %.4f\n", screen, ini, sym, upt, res);

    return 0;
}

//Function to print information to screen
//returns 0
//params-information that needs to be printed to screen
float aryPrint(char*screen, float ans) {
	printf("%s : %.4f\n", screen, ans);

    return 0;
}

// Pooja's part starts here.

int main(int argc, char *argv[]) {
    float val1;
    float val2;
    float val3;
    float result1;
    float result2;
	char sym;
    int menu;
    int rMenu;
    int sMenu;
    int operationNumber = 0;

	do {
        printf("\n======\n");
		printf("Menu\n");
		printf("======\n");
		printf("1.Regular Calculator\n");
		printf("2.Scientific Calculator\n");
		printf("3.Acountant Calculator\n");
		printf("4.Read Help and Notice\n");
		printf("0.Exit\n");
		menu = input("Select Menu: ");									//input for main menu
		system("clear");

        if(menu == 1) {
            do {
                printf("\n======================\n");
                printf("Regular Calculator Menu\n");
                printf("=======================\n");
                printf("1.PLUS\n");
                printf("2.MINUS\n");
                printf("3.MULTIPLY\n");
                printf("4.DIVIDE\n");
                printf("0.BACK\n");
                rMenu = input("Select Menu: ");								//input for regular  menu
                system("clear");

                if(rMenu == 1) {
                    val1 = input("Enter value 1 st: ");
                    val2 = input("Enter value 2 nd: ");
                    val3 = plus(val1, val2);
                    printf("\n");
                    print("sum of", "plus", val1, val2, val3);
                }
                
                if(rMenu == 2) {
                    val1 = input("Enter value 1 st: ");
                    val2 = input("Enter value 2 nd: ");
                    val3 = minus(val1, val2);
                    printf("\n");
                    print("result of", "minus", val1, val2, val3);
                }

                if(rMenu == 3) {
                    val1 = input("Enter value 1 st: ");
                    val2 = input("Enter value 2 nd: ");
                    val3 = mult(val1, val2);
                    printf("\n");
                    print("result of", "x", val1, val2, val3);
                }
                
                if(rMenu == 4) {
                    val1 = input("Enter value 1 st: ");
                    val2 = input("Enter value 2 nd: ");
                    val3 = divind(val1, val2);
                    printf("\n");
                    print("result", "/", val1, val2, val3);
                }
            } while(rMenu != 0);
        }

        if(menu == 2) {
            do {
                printf("\n===========================\n");
                printf("Scientific Calculator Menu\n");
                printf("===========================\n");
                printf("1.Power function (x^y)\n");
                printf("2.Factorial Series (x!)\n");
                printf("3.Fibonacci Series \n");
                printf("4.Sine (Sin x)\n");
                printf("5.Cosine (cos x)\n");
                printf("6.Tangent (Tan x)\n");
                printf("7.Cosec (cosec x)\n");
                printf("8.Sec (sec x)\n");
                printf("9.Cot (cot x)\n");
                printf("10.Matrix functions\n");
                printf("11.Conversion functions\n");
                printf("0.Back\n");
                sMenu = input("Select Menu: ");
                system("clear");
 
                if(sMenu == 1) {
                    val1 = input("Enter base(x): ");
                    val2 = input("Enter power(y): ");
                    val3 = powerFn(val1, val2);
                    printf("\n");
                    print("result of","^", val1, val2, val3);
                }

                if(sMenu == 2) {
                    val1 = input("Enter numbers of term: ");
                    val3 = fact(val1);
                    printf("\n");
                    spPrint("Factorial of","!", val1, val3);
                }

                if(sMenu == 3) {
                    val1 = input("Enter numbers of term: ");
                    val3 = fib(val1);
                    printf("\n");
                    spPrint("Fibonacci of"," ", val1, val3);
                }

                if(sMenu == 4) {
                    val1 = input("Enter your value: ");
                    val3 = sine(val1);
                    printf("\n");
                    spPrintF("Sine of"," ", val1, val3);
                }

//Code refactored by Sam Hopkinson
//Starting from line 307 until line until line 434
                if(sMenu == 5) {
                    val1 = input("Enter your value: ");
                    val3 = cosine(val1);
                    printf("\n");
                    spPrintF("Cosine of", " ", val1, val3);
                }

                if(sMenu == 6) {
                    val1 = input("Enter your value: ");
                    result1 = sine(val1);
                    result2 = cosine(val1);
                    val3 = result1 / result2;
                    printf("\n");
                    spPrintF("Tangent of", " ", val1, val3);
                }

                if(sMenu == 7) {
                    val1 = input("Enter your value: ");
                    val3 = sine(val1);
                    printf("\n");
                    spPrintF("Cosec of", " ", val1, 1 / val3);
                }

                if(sMenu == 5) {
                    val1 = input("Enter your value: ");
                    val3 = cosine(val1);
                    printf("\n");
                    spPrintF("Sec of"," ", val1, 1 / val3);
                }

                if(sMenu == 8) {
                    val1 = input("Enter your value: ");
                    result1 = sine(val1);
                    result2 = cosine(val1);
                    val3 = result1 / result2;
                    printf("\n");
                    spPrintF("Cot of", " ", val1, 1 / val3);
                }
        
            
                if(sMenu == 10) {
                    printf("\n\t\tSum of Matrices(1)\t\tTranspose(2)\t\tProduct of Matrices(3)");
                    printf("\n\tEnter an operation command:");
                    scanf("%d", &operationNumber);

                    if(operationNumber == 1) {
                        matrixSum();
                    } else if(operationNumber == 2) {
                        matrixTranspose();
                    } else if(operationNumber == 3) {
                        matrixProduct();
                    }
                }

                if(sMenu == 11) {
                    operationNumber = 0;
                    printf("\n\n\n\t\tTemperature(1)\t\tTime(2)");
                    printf("\n\n\n\t\tPlease choose an operation number:");
                    scanf("%d", &operationNumber);

                    if(operationNumber == 1) {
                        temp();
                    } else if(operationNumber == 2) {
                        time();
                    }
                    break;
                }


            } while(sMenu != 0);
        }

        if(menu == 3) {
            warp:

            system("clear");
            printf("\n===========================\n");
            printf("Accountant Calculator Menu\n");
            printf("===========================\n");
            printf("Please set value first\n");
            printf("\n");

            int numTerms;
            int aMenu;
            int j;
            int i;
            float rest;
            float max;
            float min;
            float xBar = 0;
            float sum = 0;
            float med;
            float mod;
            float count;
            int temp;

            numTerms = input("Enter number of term: ");
            float set[numTerms];
            int numTemp[numTerms];
        
            for(int i = 0; i < numTerms; i++) {
                set[i] = inputAry("Enter value terms", i);
            }

            for(int i = 0; i < numTerms; i++) {
                for(int j = 0; j <= i; j++) {
                    if(set[j] > set[i]) {
                        rest = set[j];
                        set[j] = set[i];
                        set[i] = rest;
                    }
                }
            }

            min = set[0];
            max = set[numTerms - 1];

            for(int i = 0; i < numTerms; i++) {
                sum += set[i];
            }
            xBar = (sum / numTerms);

            if((numTerms % 2) != 0) {
                med = set[((numTerms + 1) / 2) - 1];
            } else {
                med = (set[((numTerms + 1) / 2)] + set[((numTerms + 1) / 2) - 1 ]) / 2;
            }
//----------------------------------end of Sam's code--|
//Kelsey Kirkland started here till end
            for(int i = 0; i < numTerms; i++) {
                numTemp[i] = 0;
            }

            for(int i = 0; i < numTerms; i++) {
                temp = set[i];
                for(int j = i; j < numTerms; j++) {
                    if(set[j] == temp) {
                        numTemp[i]++;
                    }
                }
            }

            temp = numTemp[0];

            for(int i = 1; i < numTerms; i++) {
                if(numTemp[i] > temp) {
                    temp = numTemp[i];
                }
            }

            if(i == 999) {					// Always False If
                warp1:                    // Warp form menu
		
                j = 0;

                for(int i = 0; i < numTerms; i++) {
                    if(numTemp[i] == temp) {
                        j++;
                    }
                }

                if(j == 1) {
                    for(int i = 0; i < numTerms; i++) {
                        if(numTemp[i] == temp) {
                            printf("%.4f\n", set[i]);
                        }
                    }
                } else {
                    printf("Not have mode value\n");
                }

            }
               
            do {
                printf("\n===========================\n");
                printf("Accountant Calculator Menu\n");
                printf("===========================\n");
                printf("1.Show max\n");
                printf("2.Show min\n");
                printf("3.Show x-bar\n");
                printf("4.Show range\n");
                printf("5.Show Med\n");
                printf("6.Show Mode\n");
                printf("7.Show value(sort)\n");
                printf("8.Set new value\n");
                printf("0.Back\n");
		
                aMenu = input("Select Menu: ");	// input acountant  menu
                system("clear");

                if(aMenu == 1) {
                    printf("\n");
                    aryPrint ("Max is", max);
                } else if(aMenu == 2) {
                    printf("\n");
                    aryPrint("Min is", min);
                } else if(aMenu == 3) {
                    printf("\n");
                    aryPrint("X-bar is", xBar);
                } else if(aMenu == 4) {
                    printf("\n");
                    aryPrint("Range is",max-min);
                } else if(aMenu == 5) {
                    printf("\n");
                    aryPrint("Med is", med);
                } else if(aMenu == 6) {
                    printf("\n");
                    printf("Mode is: ");
                    goto warp1;
                } else if(aMenu == 7) {
                    printf("\n");
                    printf("Set of number is(sort): ");
                    for(int i = 0; i < numTerms; i++) {
                        printf("%.3f ", set[i]);
                    }
                } else if(aMenu == 8) {
                    goto warp;
                }

            } while(aMenu != 0);
        }

        if(menu == 4) {
	    	char text;

	    	g_help = fopen("User_helping.txt","r");
		
	    	while((text = fgetc(g_help)) != EOF) {
                fprintf(stdout, "%c", text);
	    	}

            fclose(g_help);
        }

	} while(menu != 0);

    return 0;
}

