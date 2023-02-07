int k, power, divisor;
double dividend, total = 0;

Console.ForegroundColor = ConsoleColor.Green;
Console.Write("\n4 * (-1)^k + 1");
Console.Write("\n    ----------  =");
Console.Write("\n      2k - 1");
Console.Write("\n4 * (");

for (k = 1; k <= 1000000; k++)
{
    power = k + 1;
    dividend = Math.Pow(-1, power);
    divisor = (2 * k) - 1;
    total += 4 * (dividend / divisor);

    if (dividend > 0) Console.Write(" + " + (int)dividend + " / " + divisor);
    else
    {
        Console.Write(" -1 / " + divisor);
    }
}

string s = String.Format("{0:0.00}", total);
Console.Write(") = " + s);
Console.ForegroundColor = ConsoleColor.White;
Console.WriteLine("\n\n\n\n\n");

return 0;
