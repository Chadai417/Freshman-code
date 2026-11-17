#include <stdio.h>
#define SIZE 50
int main()
{

    /***********************************
      STEP1 声明 declaration
    ***********************************/
    //char[] chars1;  //logic error
    // logic error array size missing in 'chars'
    //char chars2[]; 
    int numbers[5];
    int evens[SIZE];
    // With recent C/C++ versions, we can also declare an array of user specified size
    int n ;
    printf("input the array size:");
    scanf("%d", &n); // size of array
    int arr1[n];
    /***********************************
      STEP2  带初始化的声明 Array declaration by specifying size and initializing
    ***********************************/
    int arr2[4] = {10, 20, 30, 40};
    int arr3[] = {10, 20, 30, 40}; // Compiler creates an array of size 4. same as above
    int arr4[6] = {10, 20, 30, 40};
    // Compiler creates an array of size 6, initializes first
    // 4 elements as specified by user and rest two elements as
    // 0. above is same as  "int arr4[] = {10, 20, 30, 40, 0, 0}"
    int arr5[5] = { 1,
                    2,
                    3,
                    4,
                    5,
                    6,
                    7,
                    8 };// Error in old compilers, warning in new ones
    /***********************************
      STEP3  访问  ACCESS
    ***********************************/
    numbers[0] = 100;
    numbers[6] = 4; // runtime error
    // numbers[0]=3.1415926;  //runtime error
    numbers[3 / 2] = 2; // this is same as arr[1] = 2
    numbers[3] = numbers[0];
    numbers[-1] = 99;
    printf("input the array elements[%d]:",n);
    for (int i = 0; i < n; i++)
      scanf("%d", &arr1[i]);
    for (int i = 0; i < SIZE; i++)
      evens[i] = 2 * i;
    /***********************************
       STEP4  输出
     ***********************************/
    printf("numbers length:%d \n", sizeof(numbers) / sizeof(int));
    printf("numbers[0]:%d \n", numbers[0]); // 输出100
    printf("numbers[1]:%d \n", numbers[1]); // 输出1
    printf("numbers[2]:%d \n", numbers[2]); // 输出随机
    printf("numbers[3]:%d \n", numbers[3]); // 输出100
    printf("numbers[4]:%d \n", numbers[4]); // 输出随机
    printf("numbers[5]:%d \n", numbers[5]); // 越界输出输出随机
    printf("numbers[6]:%d \n", numbers[6]); // 越界输出4
    printf("numbers[-1]:%d \n", numbers[-1]); // 输出99
    for (int i = 0; i < n; i++)
      printf("array index is %d,value is %d,address is %p\n", i, arr1[i], &arr1[i]);
    return 0;
}