#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void randomnumber(double* p, const int N);
void stats(double* p, const int N, double& mean, double& variance);

int main(){
   srand(time(NULL));
   const int N = 100;
   double p[N];
   double mean, var;

   randomnumber(p, N);
   stats(p, N, mean, var);
   

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}

     
void randomnumber(double* p, const int N)
     {
       for(int i = 0; i < N; i++)
	 {
	   p[i] = double(rand())/double(RAND_MAX);
         }
     }
     
void stats(double* p, const int N, double&  mean, double& variance)
{
  double m = 0;
  double v = 0;
  for(int i = 0; i < N; i++)
    {
      m += p[i];
    }
  mean = m/double(N);

  for(int i = 0; i < N; i++)
    {
      v += (p[i] - mean)*(p[i] - mean);
    }
  variance = v/double(N);
}
