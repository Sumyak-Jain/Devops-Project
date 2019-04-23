#include <iostream>
using namespace std;
void binary search()
{
	int count, i, arr[30], num, first, last, middle;
	cout<<"how many elements would you like to enter?:";
        cin>>count;

	for (i=0; i<count; i++)
	{
		cout<<"Enter number "<<(i+1)<<": ";
                cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:";
        cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" found in the array at the location "<<middle+1<<"\n";
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }
        if(first > last)
	{
	   cout<<num<<" not found in the array";
	}
}
int factorial()
{
   int n = 6, fact = 1, i;    
   for(i=1; i<=n; i++)
      fact = fact * i; 
   cout<<"Factorial of "<< n <<" is "<<fact;
   return 0;
}
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
//prime number
int prime()
{
  int n, i, m=0, flag=0;
  cout << "Enter the Number to check Prime: ";
  cin >> n;
  m=n/2;
  for(i = 2; i <= m; i++)
  {
      if(n % i == 0)
      {
          cout<<"Number is not Prime."<<endl;
          flag=1;
          break;
      }
  }
  if (flag==0)
      cout << "Number is Prime."<<endl;
  return 0;
}
int leapyear()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
                cout << year << " is not a leap year.";
        }
        else
            cout << year << " is a leap year.";
    }
    else
        cout << year << " is not a leap year.";

    return 0;
}
int lcm()
{
    int n1, n2, max;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    // maximum value between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;

    do
    {
        if (max % n1 == 0 && max % n2 == 0)
        {
            cout << "LCM = " << max;
            break;
        }
        else
            ++max;
    } while (true);

    return 0;
}
int rootsquad() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }
void even_or_odd()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if ( n % 2 == 0)
        cout << n << " is even.";
    else
        cout << n << " is odd.";

    return 0;
}
    return 0;
}
int main ()
{
    int n = 9;
    cout << fib(n);
    rootsquad();
    lcm();
    leapyear();
    prime();
    factorial();
    lcm();
    getchar();
    binarysearch();
    even_or_odd();
    return 0;
}
