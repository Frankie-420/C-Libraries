int GCF(int Num1, int Num2)
{
    int count = 0;
    for(int i = 0; i < Num1; i++)
    {
        for(int j = 0; j < Num2; j++)
        {
            count++;
        }
    }
    return count;
}

char* Base_10_to_Hex(int Num)
{
    char Hex_Array[] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char Hex[50] = "";
    int remainder = 0;
    int quotiant = Num;
    int i = 0;
    while (quotiant != 0)
    {   
        i++;
        remainder = (quotiant%16)*16;
        quotiant = quotiant/16;
        
        Hex[i] = Hex_Array[remainder];
    }
    return Hex;
}