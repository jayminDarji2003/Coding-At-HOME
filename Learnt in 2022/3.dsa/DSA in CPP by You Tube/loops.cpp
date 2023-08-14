// All about loops in cpp
#include <iostream>
using namespace std;

int main()
{

    /*
        // Basic of loops
    int n,i=1;
    cout<<"Enter the value of n : ";
    cin>>n;
        //While loop
    while (i <= n)
    {
        cout<<i<<endl;
        i++;
    }


        //for loop
    for ( i = 1; i <= n; i++)
    {
       cout<<i<<" \t ";
    }


        //do while loop
    do{
        cout<<i<<endl;
        i++;
    }while (i<=n);

    */

    // Program:-Sum of n numbers
    /* int sum = 0,n;
     cout<<"Enter any numbrs : ";
     cin>>n;

     for (int i = 0; i <= n; i+2)
     {
         sum = sum + i;
     }
     cout << "The value of sum is : " << sum;
     */

    // Program to make table of any n number
    /* int n;
     cout << "Enter any numbrs : ";
     cin >> n;

     for (int i = 1; i <= 10; i++)
     {
         cout<<n<<" * "<<i<<" = "<<n*i<<endl;
     }
     */

    // Program to find number prime or not
   /* int n;
    cout << "Enter any numbrs : ";
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (i%i==0)
        {
            cout<<"Not prime"<<endl;
        }
        else{
            cout<<"Prime"<<endl;
        }
    }
    */

    return 0;
}