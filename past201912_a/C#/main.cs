// https://qiita.com/asterisk9101/items/4f0e8da6d1e2e9df8e14
using System;
class Program
{
    public static int Main(string[] args)
    {
        var str = System.Console.ReadLine();

        foreach( char c in str )
        {
            if( !(c >= '0' && c <= '9') )
            {
                Console.WriteLine("error\n");
                return 0;
            }
        }    

        Console.WriteLine( (Int16.Parse(str)*2) );
        return 0;
    }
}