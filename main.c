
struct Students
{

   char name[50];
   int marks;
   float GPA ;



};



int Linearsearch(struct Students * student, int  x)
{
    int i;
    for (i = 0; i < 10; i++){
        if (student[i].marks == x){
            return i;
        }

    }
 return -1;

}



void selectionSort(struct Students arr[] )
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < 9; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < 10; j++)
          if (arr[j].marks < arr[min_idx].marks)
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx].marks , &arr[i].marks);
    }
}
void printArray(struct Students arr[] )
{
    int i;
    for (i=0; i < 10; i++)
        printf("%d ", arr[i].marks);
    printf("\n");
}
void swap(int *min_id, int *index)
{
    int temp = *min_id;
    *min_id = *index;
    *index = temp;
}



void bubbleSort(struct Students arr[])
{
   int i, j;
   int n = 10 ;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j].marks > arr[j+1].marks)
              swap(&arr[j].marks, &arr[j+1].marks);

}



int binarySearch(struct Students *arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r-1)  / 2;

        // Check if x is present at mid
        if (arr[m].marks == x){
            return m;
        }

       else if (arr[m].marks < x){
            l = m + 1;
       }
        // If x is smaller, ignore right half
        else{
            r = m - 1;
        }
    }

    // if we reach here, then element was
    // not present
    return -1;
}





int main()
{
    int tosearch ;
    int method ;
    int sortingmethod ;
    struct Students s[10];
    printf("Enter 1st Student name : ");
    scanf("%s", &s[0].name);

   printf("Enter 1st Student marks : ");
   scanf("%d", &s[0].marks);


    printf("Enter 1st students GPA : ");
    scanf("%f", &s[0].GPA);
printf("\n");


 printf("Enter 2nd Student name : ");
    scanf("%s", &s[1].name);

   printf("Enter 2nd Student marks : ");
   scanf("%d", &s[1].marks);


    printf("Enter 2nd students GPA : ");
    scanf("%f", &s[1].GPA);
printf("\n");


 printf("Enter 3rd Student name : ");
    scanf("%s", &s[2].name);

   printf("Enter 3rd Student marks : ");
   scanf("%d", &s[2].marks);


    printf("Enter 3rd students GPA : ");
    scanf("%f", &s[2].GPA);
printf("\n");


 printf("Enter 4th Student name : ");
    scanf("%s", &s[3].name);

   printf("Enter 4th Student marks : ");
   scanf("%d", &s[3].marks);


    printf("Enter 4th students GPA : ");
    scanf("%f", &s[3].GPA);
printf("\n");

 printf("Enter 5th Student name : ");
    scanf("%s", &s[4].name);

   printf("Enter 5th Student marks : ");
   scanf("%d", &s[4].marks);


    printf("Enter 5th students GPA : ");
    scanf("%f", &s[4].GPA);
printf("\n");


 printf("Enter 6th Student name : ");
    scanf("%s", &s[5].name);

   printf("Enter 6th Student marks : ");
   scanf("%d", &s[5].marks);


    printf("Enter 6th students GPA : ");
    scanf("%f", &s[5].GPA);
printf("\n");



 printf("Enter 7th Student name : ");
    scanf("%s", &s[6].name);

   printf("Enter 7th Student marks : ");
   scanf("%d", &s[6].marks);


    printf("Enter 7th students GPA : ");
    scanf("%f", &s[6].GPA);

printf("\n");



 printf("Enter 8th Student name : ");
    scanf("%s", &s[7].name);

   printf("Enter 8th Student marks : ");
   scanf("%d", &s[7].marks);


    printf("Enter 8th students GPA : ");
    scanf("%f", &s[7].GPA);
printf("\n");




 printf("Enter 9th Student name : ");
    scanf("%s", &s[8].name);

   printf("Enter 9th Student marks : ");
   scanf("%d", &s[8].marks);


    printf("Enter 9th students GPA : ");
    scanf("%f", &s[8].GPA);
printf("\n");


 printf("Enter 10th Student name : ");
    scanf("%s", &s[9].name);

   printf("Enter 10th Student marks : ");
   scanf("%d", &s[9].marks);


    printf("Enter 10th students GPA : ");
    scanf("%f", &s[9].GPA);
printf("\n");




  printf("Enter Marks to Search :\n");
  scanf("%d", &tosearch);
 printf("Enter method of Searching\n ");
 printf("press 1 for Linear Searching\n ");
printf("press 2 for Binary Searching\n ");
scanf("%d", &method);

if(method == 1){
     int result = Linearsearch(&s[0], tosearch);


if(result == -1){
    printf("No Student have these marks");
}else{
    printf("Marks found ");
    printf("%s", s[result].name);
    printf(" have these marks ");
}

}else if(method==2){
    int sort;
     printf("For Binary Search Sorting is required Choose method of Sorting\n");
    printf("press 1 for Selection Sort\n ");
    printf("press 2 for Bubble Sort\n ");
    scanf("%d", &sort);

if(sort == 1){








    selectionSort(s);
 //   printArray(s);
 int n = sizeof(s)/sizeof(s[0]);
int result = binarySearch( &s[0], 0, n-1, tosearch);
 printf("Student found  and have these marks");


if(result == -1){
    printf("No Student have these marks");
}else{
    printf("Marks found ");
printf("%s", s[result].name);
printf(" have these marks ");
}




}else if (sort == 2){

     bubbleSort(s);
    int n = sizeof(s)/sizeof(s[0]);
  int result =   binarySearch(&s[0], 0, n, tosearch);

     if(result == -1){
    printf("No Student have these marks");
}else{
     printf("%s", s[result].name);
printf(" have these marks ");
}

}


}



    return 0;
}
