#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;
std::fstream fin, fout;

typedef long long int lli;
typedef unsigned long long ull;

lli minNrPavare, a, b, lenghtPavare;

lli cmmmdc(lli a, lli b)
{   
    int r;

    while(true)
    {
        if(b == 0)
            return a;
    
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

ull cmmdc(ull x, ull y)
{
   if (x*y == 0)
      return x+y;

   ull r = x % y;
   while (r)
   {
      x = y;
      y = r;
      r = x % y;
   }

   return y;
}

lli arrcmmdc(lli a[], lli n)
{
    lli rez = a[0];
    
    for(int i = 0; i < n; i++)
        rez = cmmmdc(a[i], rez);
    
        return rez;
}

ull cmmmc(ull x, ull y)
{
   return x * y / cmmdc(x, y);
}

int nrcifre(lli n){
    while(n>0){
        n/=10;
        nr++;
    }
    return nr;
}

int putere(lli nr)
{
    p=1;
    while(nr){
        p*=10;
        nr--;
    }
    return p;
}

void fract(lli a, lli b)
{
    r=0;
    c=a;
    d=b;
    cmmcd(c, d);
    a=a/c;
    b=b/c;
    cout << a << "/" << b;
}

int mirror(lli a){
    on=0;
    while(a!=0){
            on=on*10+a%10;
            a/=10;   
    }
    return on;
}

int main()
{
  //1. #84
  /* 
    char szo[11];
    int mgh = -1, msh = -1;

    cin.getline(szo, 11);

    for(int i = 0; i < strlen(szo); i++)
        if(strchr("aeiouAEIOU", szo[i]) != NULL)
        {
            mgh = i;
            break;
        }
    
    for(int i = strlen(szo)-1; i >= 0; i--)
        if(strchr("aeiouAEIOU", szo[i]) == NULL)
        {
            msh = i;
            break;
        }
    
    if(msh != -1 && mgh != -1)
    {
        char tmp;
        
        tmp = szo[mgh];
        szo[mgh] = szo[msh];
        szo[msh] = tmp;

        cout << szo;
    }
    else
        cout << "IMPOSIBIL";
  */

  //2. #13
  /*
      char szo[11];

    cin.getline(szo, 11);

    char tmp[11];
    strcpy(tmp, szo); 

    for(int i = strlen(szo) - 1; i >= 0; i--)
    {
        cout << szo << endl;
        szo[i] = '\0';
    }

    while(strlen(tmp) > 0)
    {
        cout << tmp << endl;
        strcpy(tmp, tmp+1);
    }
  */

  //4. #1456
  /*
    char szo[101];
    int ok1 = 1, ok2 = 0, ok3 = 0;

    cin.getline(szo, 101);

    for(int i = 0; i < strlen(szo); i++)
    {
        if(strchr("aeou", szo[i]) != NULL)
            ok1--;

        if(szo[i] == 'i')
            ok2++;

        if(strchr("aeiou", szo[i]) == NULL)
            ok3++;
    }

    if((ok1 == 1 && (ok2 != 0 && ok3 != 0)) || (ok1 == 1 && ok3 != 0))
        cout << "DA";
    else
        cout << "NU";
  */

  //5. #378
  /*
    cin >> a >> b;

    lenghtPavare = cmmmdc(a, b);
    minNrPavare = a*b/(cmmmdc(a, b) * cmmmdc(a,b));
    cout << minNrPavare << ' ' << lenghtPavare;
  */

  //6. #3407
  /*
   fin.open("aoc2020.in", std::ios::in);
   fout.open("aoc2020.out", std::ios::out);

   int n, x;
   ull rez;
   fin >> n;

   fin >> x;
   rez = x;
   while (--n)
   {
      fin >> x;
      rez = cmmmc(rez, x);
   }

   fout << rez;
    
    fin.close();
   fout.close();
  */
  
  //7. #305
  /*
    lli a[1024], n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << arrcmmdc(a, n);
  */

  //8. #391 
  /*
    lli n, p, q = 1, a[1005], b[1005];
      cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    for(int i = 0; i < n; i++)  
        q = cmmmc(q, b[i]);
    for(int i = 0; i < n; i++)
        p += a[i] * (q / b[i]);

    cout << p/cmmmd(p, q) << ' ' << q/cmmmd(q, p);
  */

  //9.#410
  /*
    lli a, b, n, i, r, nr, p;
    
    cin >> n;
    nrcifre(n);
    putere(nr/2);
    a=n/p;
    if(nr%2!=0)
        a/=10;
    b=n%p;
    cout << cmmmdc(a, b);
  */

  //10. #112
  /*
      lli n, a, b, r, arr[1005], c, d, minim, maxim, i;
          cin >> n;
    for(i=1; i<=n; i++)
        cin >> arr[i];
    minim=INT_MAX;
    maxim=INT_MIN;
    for(i=1; i<=n; i++){
        if(minim>arr[i])
            minim=arr[i];
        if(maxim<arr[i])
            maxim=arr[i];
    }
    fract(minim, maxim);
  */

  //11. #409
  /*
    lli n, on, r, a, b, C=0, arr[1005], i;
        cin >> n;
    for(i=0; i<=n-1; i++)
        cin >> arr[i];
    for(i=0; i<=n-1; i++)
        if(cmmmdc(arr[i], mirror(arr[i]))==1)
            C++;
    cout << C;
  */

  //12. #3271
  /*
    int n, xM = 0, yM = 0, cmmdcM=0;
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        int x, y, cx, cy, cmmdc;
        cin>>x>>y;
        cx = x;
        cy = y;
        while (y!=0)
        {
            int r = x%y;
            x = y;
            y = r;
        }
        if (x>cmmdcM)
        {
            cmmdcM = x;
            xM = cx;
            yM = cy;
        }
        else if (x==cmmdcM)
        {
            if  (cx+cy>xM+yM)
            {
                xM = cx;
                yM = cy;
            }
        }
    }
    cout<<xM<<" "<<yM;
  */

  //13. #80 
  /*
    lli nr=0, a, b, r, i;
        cin >> a;
    if(a==0)
        cout << 0 << endl;
    else{
        cin >> b;
        while(b){
            if(cmmmdc(a, b)==1)
                nr++;
            a=b;
            cin >> b;
        }
        cout << nr << endl;
    }
  */

  //14. #411
  /*
  long long int n, C=0, a, b, r;
      cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=i; j<=n; j++)
            if(cmmmdc(i, j)==1)
                C++;
    cout << C << endl;
  */

  //15. #3268
  /*
    lli a, b, r, D, M;
    cin >> a >> b;
    D=a;
    M=b;
    while(D!=0){
        r=M%D;
        M=D;
        D=r;
    }
    D = a * b / M;
    cout << M << " " << D << endl;
  */

  //16. #4373
  /*
    lli a, b, cmmmc, S, r;
    cin >> a >> b;
    cmmmc=(a*b)/cmmdc(a,b);
    S=(cmmmc/a)+(cmmmc/b)-2;
    cout << S << endl;
  */

  //17. #2372
  /*
    int n, x=0, z=0, y=0;
    cin >> n;
    if(n%6==0){
        x = n/6;
        z = n/3;
        y = n/2;
        cout << x << " " << z << " " << y;
    }
    if(n%6!=0)
        cout << "nu exista";
  */

  //18. #664
  /*
    int n;
    int x;
    cin>>n;
    for (; n; n--)
    {
        cin >> x;
        long long int cnt = 1;
        int d = 2;
        while (x > 1)
        {
            int p = 0;
            while (x % d == 0)
            {
                p++;
                x /= d;
            }
            if (p > 0)
                cnt *= (2 * p + 1);
            d++;
            if (x > 1 && d * d > x)
                d = x;
        }
        cout << cnt << " ";
  */

  //19. #4435
  /*
    int a[100001], b[100001], c[100001], d[100001], n, i, j, p, gasit, comun;
    cin >> n;

   for (i=0; i<n; ++i)
       cin >> a[i];

   for (i=0; i<n; ++i)
      cin >> b[i];

   for (i=0; i<n; ++i)
       cin >> c[i];

   i = 0;
   j = 0;
   p = 0;

   while(i < n && j < n)
       if(a[i] < b[j])
            i++;
       else
           if (a[i]==b[j]) { ++j; d[p++]=a[i++]; }
             else j++;

   while(i < n)
       d[p ++] = a[i ++];

   while (j < n)
       d[p ++] = b[j ++];

   i=0; 
   j=0; 
   gasit=0;

   while (i<n && j<p && gasit==0)
    {
          if (c[i]<d[j])
               i++;
           else
               if (c[i]==d[j]) 
               { 
                 gasit=1; 
                 comun=c[i]; 
                 break;
               }
               else 
                  j++;
    }

   if(gasit) 
     cout << comun;
   else 
     cout << -1;
  */

  //20. #242
  /*
  int n,m,i,j,k,x,a[100001],b[100001],c[200002];
    fin>>x>>n;
    for(i=1;i<=n;i++)
        fin>>a[i];
    fin>>m;
    for(i=1;i<=m;i++)
        fin>>b[i];
    i=j=k=1;
    while(i<=n && j<=m)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(i<=n)
        c[k++]=a[i++];
    while(j<=m)
        c[k++]=b[j++];
    k--;
    for(i=1;i<=k;i++)
    {
        if(c[i]!=c[i+1] && c[i]!=c[i-1])
            if(c[i]%x==0)
                fout<<c[i]<<" ";
    */
    
    return 0;
}
