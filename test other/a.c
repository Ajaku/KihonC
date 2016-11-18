using System;

class SwitchSample
{
  static void Main()
  {
    // ®”‚ğ2‚Â“ü—Í‚µ‚Ä‚à‚ç‚¤
    int x, y;
    Console.Write("1‚Â–Ú‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
    x = int.Parse(Console.ReadLine());
    Console.Write("2‚Â–Ú‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ : ");
    y = int.Parse(Console.ReadLine());

    // + - / * ‚Ì‚¢‚¸‚ê‚©‚ğ“ü—Í‚µ‚Ä‚à‚ç‚¤
    char op;
    Console.Write("s‚¢‚½‚¢‘€ì‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(+ - / *) : ");
    op = Console.ReadLine()[0];

    switch(op)
    {
      case '+':
        Console.Write("{0} + {1} = {2}", x, y, x+y);
        break;
      case '-':
        Console.Write("{0} - {1} = {2}", x, y, x-y);
        break;
      case '*':
        Console.Write("{0} ~ {1} = {2}", x, y, x*y);
        break;
      case '/':
        if(y != 0)
          Console.Write("{0} € {1} = {2} c {3}", x, y, x/y, x%y);
        break;
      default:
        Console.Write("‘Î‰‚µ‚Ä‚¢‚È‚¢‘€ì‚Å‚·");
        break;
    }
  }
}