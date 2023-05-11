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