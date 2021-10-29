#include <stdio.h>

void search_for_minimum_values (int array[], int number_of_elements)
{
    int min_1,min_2,position_of_1_min = 0;
    min_1 = array[0];
    min_2 = array[1];
    for(int i = 0; i < number_of_elements; i++)
    {
        if(min_1 > array[i])
        {
            min_1 = array[i];
            position_of_1_min = i;
            break;
        }

    }
    for(int i = 0; i <= (position_of_1_min - 1); i++)
    {
        if(min_2 > array[i])
            min_2 = array[i];
    }
    for(int i = position_of_1_min+1; i < number_of_elements; i++)
    {
        if(min_2 > array[i])
            min_2 = array[i];
    }
    printf("res= %d ", min_1 + min_2);
    
}
int main()
{
    int number_of_elements;
    printf("provide the number of items: ");
    scanf("%d", &number_of_elements);
    int array[number_of_elements];
    for(int i = 0; i < number_of_elements; i++)
    {
        printf("print element: ");
        scanf("%d", &array[i]);
    }
    search_for_minimum_values(array, number_of_elements);
    
    return 0;
}
