#include <stdio.h>

int main()
{
    int prime[100];
    int i, j, k = 0, l, is_prime, number, status;

    //this loop is for calculating prime number from 2-99
    for(i = 2; i < 100; i++){//1st loop start
        for(j = 2, is_prime = 1; j <= i/2; j++){//2nd loop start
            if(i%j == 0){//checking prime
                is_prime = 0;
            }
        }//2nd loop end
        if(is_prime == 1){
            prime[k] = i;
            k++;
        }
    }//1st loop end

    prime[k] = '\0';//for end of array

    //this loop will print the prime number from 2-99
    for(i = 0; i < k; i++){//1st loop start
        printf("%d ", prime[i]);
    }//1st loop end

    printf("\n\n\n");//just extra new line

    int count[k-1];//new array declare for counting prime number

    //this loop will sett all the count to 0
    for(i = 0; i < k; i++){//1st loop start
        count[i] = 0;
    }//1st loop end

    //taking input from user 2-99
    printf("Enter a number(1 < n < 100): ");
    scanf("%d", &number);

    //this loop will check the range of input for avoiding error.
    while(number < 2 || number > 99){//1st loop start
        printf("Error!! Please Enter within the range again.\n");
        printf("Enter a number(1 < n < 100): ");
        scanf("%d", &number);
    }//1st loop end

    printf("\n\n");//just printing new line

    //now main code is here.
    //this multiple nested loop will count the prime number
    for(i = number; i > 1; i--){//1st loop start //i started loop from #number to 2
        for(j = 0, status = 0; j < k; j++){//2nd loop start
            if(prime[j] == i){//this condition will check is the number is match with the prime number
                count[j]++;//if match then the 2nd array address will be count++
                status = 1;//it will check if this loop found the number or not
                break;//if found no need to check other number, just break it
            }
        }//2nd loop end

        if(status == 1){
            continue;//if found then it will check for the next number #number--
        }
        else{//if not found then it will try to divide this number with another prime number
            for(j = 0, l = i; j < k;){//2nd loop start //i skip update expression because if it can divide then we don't need to go for next number we need to check again for the quotient
                if(l%prime[j] == 0 && l != 0){//it will check until the quotient get 0
                    count[j]++;//if dividable then count will ++
                    l = l / prime[j];//we need to check the quotient again
                    continue;//thats why we continue this loop by keeping the divider same
                }
                else if(l == 0){//if quotient get 0 then we need to break this loop and back to the parent loop line 53
                    break;
                }
                else{//if cant divide then we need to check the next prime number so i update this expression here.
                    j++;
                }
            }//2nd loop end
        }

    }//1st loop end

    //now printing the result
    printf("%d! = ", number);

    //this loop will check the value of count
    for(i = 0; i < k; i++){
        if(count[i] > 0){//count is greater than 0 then it will print otherwise it will skip the zero value
            printf("(%d, %d) ", prime[i], count[i]);
        }
    }

    printf("\n\n");//just for extra line

    return 0;
}
