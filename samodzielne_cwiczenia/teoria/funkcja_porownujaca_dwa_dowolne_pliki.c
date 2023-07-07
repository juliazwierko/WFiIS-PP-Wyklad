#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

int cmp_file(const char *file_name1, const char *file_name2)
{
    assert(file_name1 != NULL && file_name2 != NULL);

    FILE *file1 = fopen(file_name1, "rb");
    
    if(file1 == NULL)
    {
        return -1;
    }
    FILE *file2 = fopen(file_name2, "rb");
    if(file2 == NULL)
    {
        fclose(file1);
        return -1;
    }
    
    int to_return = 0;
    size_t sum_read = 1;

    while(1)
    {
        char byte1, byte2;
        size_t res1 = fread(&byte1, 1, 1, file1);
        size_t res2 = fread(&byte2, 1, 1, file2);
        if(res1 != res2 || byte1 != byte2)
        {
            to_return = sum_read;
            break;
        }

        if (res1 == 0)
        {
            break;
        }
        sum_read += res1;
    }
    fclose(file1);
    fclose(file2);

    return to_return;
}

int main(int argc, char *argv[]) 
{
    return 0;
}
