using System;

class SwitchSample
{
  static void Main()
  {
    // ������2���͂��Ă��炤
    int x, y;
    Console.Write("1�ڂ̐�������͂��Ă������� : ");
    x = int.Parse(Console.ReadLine());
    Console.Write("2�ڂ̐�������͂��Ă������� : ");
    y = int.Parse(Console.ReadLine());

    // + - / * �̂����ꂩ����͂��Ă��炤
    char op;
    Console.Write("�s�������������͂��Ă�������(+ - / *) : ");
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
        Console.Write("{0} �~ {1} = {2}", x, y, x*y);
        break;
      case '/':
        if(y != 0)
          Console.Write("{0} �� {1} = {2} �c {3}", x, y, x/y, x%y);
        break;
      default:
        Console.Write("�Ή����Ă��Ȃ�����ł�");
        break;
    }
  }
}