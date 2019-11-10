#include <stdio.h>

void print_array(int a[], int len)
{
    for (size_t i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void init_array(int a[], int len)
{
    for (size_t i = 0; i < len; i++)
    {
        a[i] = 0;
    }
}

int sort_tong(int a[], int len)
{
    int MAX = 10000;
    int book[MAX];
    init_array(book, MAX);
    for (int i = 0; i < len; i++)
    {
        book[a[i]] += 1;
    }

    int j = 0;
    for (int i = 0; i < MAX; i++)
    {
        // printf("i is:%d, book value is %d\n", i,book[i]);
        if (book[i] > 0)
        {
            for (int k = 0; k < book[i]; k++)
            {
                // printf("j is:%d\n", j);
                a[j++] = i;
            }
        }
    }
    return 0;
}

int sort_maopao(int a[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        // printf("i====%d\n",i );
        for (int j = 0; j < len - 1 - i; j++)
        {
            // printf("j=%d\n",j);
            if (a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    return 0;
}

void swap(int a[], int i, int j)
{
    if (i == j)
    {
        return;
    }
    printf("swap %d[%d], %d[%d]\n", a[i],i,a[j],j);
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

int sort_quick(int a[], int start, int end)
{
    printf("sort_quick,start:%d, end:%d\n", start, end);
    if (start >= end)
    {
        return 0;
    }

    int base = a[start];
    int i = start;
    int j = end;
    while (1)
    {
        // move j
        while (j > i && a[j] >= base)
        {
            j--;
        }

        // if (j == i)
        // { // end
        //     if (a[start] > a[i])
        //         swap(a, start, i); //i should be small value
        //     break;
        // }
        // else
        // { // j find small vale
        //     //move i
            while (i < j && a[i+1] <= base)
            {
                i++;
            }
            if (i == j)
            {
                if (a[start] > a[i])
                    swap(a, start, i); //i should be small value
                break;
            }
            else
            { // swap i(small), j(larger)
                swap(a, i, j);
                print_array(a,8);
            }
        // }
    }
    print_array(a,8);

    // left and right
    printf("--i is %d\n", i);
    sort_quick(a, start, i - 1);
    printf("==i is %d\n", i);
    sort_quick(a, i + 1, end);

    return 0;
}
int main(int argc, char const *argv[])
{
    /* code */
    int alen = 8;

    int a[] = {999, 5, 5, 4, 4, 3, 2, 1};
    print_array(a, alen);
    // sort_tong(a, alen);
    // sort_maopao(a, alen);
    sort_quick(a, 0, alen - 1);
    print_array(a, alen);
    return 0;
}
