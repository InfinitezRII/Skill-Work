#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;

void MAX_HEAPIFY(int a[], int i, int n)
{
  int l,r,largest,loc;
  l=2*i;
  r=(2*i+1);
  if((l<=n)&&a[l]>a[i])
    largest=l;
  else
    largest=i;
  if((r<=n)&&(a[r]>a[largest]))
    largest=r;
  if(largest!=i)
    {
      loc=a[i];
      a[i]=a[largest];
      a[largest]=loc;
      MAX_HEAPIFY(a, largest,n);
    }
}
void BUILD_MAX_HEAP(int a[], int n)
{
  for(int k = n/2; k >= 1; k--)
    {
      MAX_HEAPIFY(a, k, n);
    }
}
void HEAPSORT(int a[], int n)
{

  BUILD_MAX_HEAP(a,n);
  int i, temp;
  for (i = n; i >= 2; i--)
    {
      temp = a[i];
      a[i] = a[1];
      a[1] = temp;
      MAX_HEAPIFY(a, 1, i - 1);
    }
}

int main()
{
  int n;
  cin >> n;
  int a[n],b[n][2];
  for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
      cin >> b[i][0];
      cin >> b[i][1];
    }
  HEAPSORT(b[n][1],n);
  for (int i = 1; i <= n; i++)
    {
      cout<<a[i]<<endl;
    }
}



