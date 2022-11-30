#include <iostream>
#include <cmath>
using namespace std;

void ValidInterval (double st, double en, double x)
{
    if (st>en || x>en || x<st)
    {
        throw "incorrect interval";
    }
}
void ValidInput ()
{
    if (cin.fail())
    {
        throw "Incorrect Input!";
    }
}

void ValidParams (int n)
{
    if (n<1)
    {
        throw "Input correct data!";
    }
}

int calc (int n, int x)
{
    double y=0, p=1;
     if (x<0)
    {
        
        for (int i = 1; i <=n; i++)
        {
            
            y +=pow((i+x), 2);
        }
    }
    else
    {
        for (int i =0; i<=(n-1); i++)
        {
            
            for (int j = 1; j<=n; j++)
            {
                
                p *=(x+i)/(i+j);
                if (i+j==0)
                {
                    cout<<"Error\n";
                }
            }
            y+=p;
        }
    }
    return y;
}

int main ()
{
int n;
double st, en, x, h;
   try
   {
    cout<<"Input n>=1, n=";
    cin>>n;
    ValidInput();
    ValidParams(n);
    cout<<"Input x= ";
    cin>>x;
    ValidInput();
    cout<<"enter start and end of interval (start<end):"<<endl;
    cin>>st>>en;
    ValidInput();
    ValidInterval(st, en, x);
    cout<<"enter step: \n";
    cin>>h;
    ValidInput();
    for (double i=x; x<=en; x+=h)
   {
    cout<<"x= "<<x<<"  "<<"y= "<<calc(n, x)<<endl;
   }
   }
   catch (const char* ex)
   {
    cout<<ex<<endl;
    return -1;
   }
   
    catch(...)
    {
        cout<<"Unknown error\n";
        return -2;
    }
}
