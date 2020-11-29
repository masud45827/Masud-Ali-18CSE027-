#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1){
    int x;
    cout<<"If you want to find root press 1\n";
    cout<<"If you want to find  intersection point  press 2\n";
    cout<<"if you solve Guass Elimination press 3\n";
    cin>>x;
    if(x==1)
    {

        double a,b,c,root1,root2,d;
        cout<<"Equation foramat ax^2+bx+c=0"<<endl;
        cout<<"enter a,b,c of value: ";
        cin>>a>>b>>c;
        d=(b*b)-(4*a*c);
        d=sqrt(d);
        if(d==0)
        {
            root1=(-b)/(2*a);
            printf("%0.3lf \n",root1);
            cout<<"root are equal"<<endl;
        }

        else
        {
            root1=(-b)+d;
            root1=(root1*1.00)/(2*a);
            root2=(-b)-d;
            root2=(root2*1.00)/(2*a);
            printf("%0.3lf  %0.3lf\n",root1,root2);
        }
    }else if(x==2)
    {
       double a1,b1,c1,x,y;
        cout<<"Enter the number a1,b1,c1: ";
        cin>>a1>>b1>>c1;
        double a2,b2,c2;
        cout<<endl<<"Enter the number a2,b2,c2: ";
        cin>>a2>>b2>>c2;
        x=(b1*c2)-(b2*c1);
        x=(x*1.00)/((a1*b2)-(a2*b1));
        y=(c1*a2)-(c2*a1);
        y=(y*1.00)/((a1*b2)-(a2*b1));
        cout<<"(x,y)=("<<x<<","<<y<<")"<<endl;
    }else if(x==3)
    {


  int i, j, k, n;
  float a[100][100], x[100];
  float s, p;
  printf("Enter the number of equations : ");
  scanf("%d", &n) ;
  printf("\nEnter the co-efficients of the equations :\n\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("a[%d][%d]= ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }
    printf("d[%d]  = ", i + 1);
    scanf("%f", &a[i][n]);
  }
  for (k = 0; k < n - 1; k++)
  {
    for (i = k + 1; i < n; i++)
    {
      if(a[k][k]!=0&&a[i][k]!=0)
      {
      p = a[i][k] / a[k][k] ;
      for (j = k; j < n + 1; j++)
        a[i][j] = a[i][j] - p * a[k][j];
    }
    }
  }

  x[n - 1]   = a[n - 1][n] / a[n - 1][n - 1];
  for (i = n - 2; i >= 0; i--)
  {
    s = 0;
    for (j = i + 1; j < n; j++)
    {
      s+= (a[i][j] * x[j]);
      x[i] = (a[i][n] - s) / a[i][i];
    }
  }
  printf("\nThe result is:\n");
  for (i = 0; i < n; i++)
    printf("\nx[%d]=%f\n", i + 1, x[i]);
   }

 }

    return 0;


}
