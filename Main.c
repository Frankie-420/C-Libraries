#include<stdio.h>
#include<math.h>

char upper(char* string);

int get_int(char* text)
{
    int new_int = 0;
    printf("%s",text);
    scanf("%d", &new_int);
    return new_int;
}

unsigned int hash(const char *word)
{
    /* I am going to avoid suming the strings since this will have a bias towards 0 for words shorter
    than the array length. But instead i will implement one that turns the word into it's letters Value
    eg. Daniel = 41149512 */

    int count = 0;
    int index = 0;

    // We decrement so we access the tail of the name first

    for (int i = sizeof(word); i > 0; i--)
    {   
        int letter_index = upper(word[i-1]) - 'A';
        int decimal = pow(10,count);
        index = index+(letter_index*decimal);
        count++;
    }
    return index % 10;
}

char upper(char* string)
{
    for (int i = 0; i < sizeof(string); i++)
    {
        char letter = string[i];
        if ((letter >= 'a') && (letter <= 'z'))
        {
            letter = letter - 'a';
            return letter + 'A';
        }
        else
        {
            return letter;
        }
    }
}

char lower()
{
    
}

char * Base_10_to_Hex(int Num)
{
    char Hex_Array[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char Hex[50] = "";
    int remainder = 0;
    int quotiant = Num;
    int i = 0;
    while (quotiant != 0)
    {   
        remainder = (quotiant%16);
        quotiant = quotiant/16;
        
        Hex[i] = Hex_Array[remainder];
        i++;
    }
    Hex[i] = '\0';
    return Hex;
}

int main(void)
{
    printf("%s\n",Base_10_to_Hex(10000));
    return 1;
}
