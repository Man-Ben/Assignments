#include <iostream>
#include <fstream>
using namespace std;

int a, b, m, n, matrix[10][10], s = 0, k = 0, i, j, maximum = 0, v[10], ok = 0, nr = 0;

int main()
{
   //========1. Feladat======
   cin >> n;

   for(i = 0; i < n; i++)
      for(j = 0; j < n; j++)
         cin >> matrix[i][j];
   
   for(i = 0; i < n; i++)
   {
      s += matrix[i][i];
      k -= matrix[i][n-i-1];
   }

   cout << "Főátló összege: " << s << "\n" << "Mellékátló különbsége: " << k << "\n";

   if(k != s || k != -s)
      cout << "Nem egyenlőek";
   else
      cout << "Egyenlőek";
      
   
   //========2. Feladat======
   cin >> n >> m;

   for(i = 0; i < n; i++)
      for(j = 0; j < m; j++)
         cin >> matrix[i][j];

   for(i = 0; i < n; i++)
   {
      maximum = 0;
      for(j = 0; j < m; j++)
         if(matrix[i][j] > maximum)
         {
            maximum = matrix[i][j];
         }
      v[i] = maximum;
   }

   for(i = 0; i < n; i++)
   {
      for(j = 0; j < m; j++)
         cout << matrix[i][j] << ' ';

      cout << "\n";
   }

   for(i = 0; i < n; i++)
      cout << v[i] << ' ';
   
   
   //========3. Feladat======
   

   cin >> n;

   for(i = 0; i < n; i++)
      for(j = 0; j < n; j++)
         cin >> matrix[i][j];

   for(i = 0; i < n; i++)
      if(matrix[i][0] < 0 || matrix[i][n-1] < 0)
      {
         ok = -1;
         break;
      }
   
   if(ok == 0)
   {
      for(i = 0; i < n; i++)
         if(matrix[0][i] < 0 && matrix[n-1][i] < 0)
         {
            ok = -1;
            break;
         }
   }

   if(ok == 0)
      cout << "Keretes";
   else
      cout << "Nem keretes!";
   

   //========4. Feladat======

   ifstream f("bac.txt");
   maximum = 0;

   f >> n;

   for(i = 0; i < n; i++)
      f >> v[i];

   cin >> a >> b;

   for(i = a; i <= b; i++)
      if(v[i] > v[maximum])
      {
         maximum = i;
      }

   cout << "Maximum: " << v[maximum] << "\n" << "Index: " << maximum;
   
   
   return 0;
}
