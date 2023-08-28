bool check(int num)
{
    HashSet<int> set = new HashSet<int>();

    char[] digits = num.ToString().ToCharArray();

    foreach (char c in digits)
    {
        set.Add(c);
    }

    if (!set.Contains('0') && set.Count() == 2)
        return true;

    return false;
}


int count = 0;

for (int i = 111; i <= 999; i++)
{
    if (check(i))
        count++;
}

Console.WriteLine("Total Numbers: " + count);
Console.ReadLine();