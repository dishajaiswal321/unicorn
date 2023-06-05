#include <iostream>
using namespace std;
#define Max 10
class heap
{
 float Minheap[Max], Maxheap[Max];
public:
 void CreateHeap();
 void InsertMinHeap(float);
 void InsertMaxHeap(float);
 void UpAdjestMinHeap(int);
 void UpAdjustMaxHeap(int);
 void DownAdjestMinHeap();
 void DownAdjestMaxHeap();
 int DeleteHeapMinHeap();
 int DeleteHeapMaxHeap();
 float FindMin();
 float FindMAX();
};
void heap::InsertMinHeap(float x)
{
 int n = Minheap[0];
 Minheap[n + 1] = x;
 Minheap[0] = n + 1;
 UpAdjestMinHeap(n + 1);
}
void heap::InsertMaxHeap(float x)
{
 int n = Maxheap[0];
 Maxheap[n + 1] = x;
 Maxheap[0] = n + 1;
 UpAdjustMaxHeap(n + 1);
}
void heap::UpAdjestMinHeap(int u)
{
 while (u > 1 && Minheap[u] < Minheap[u / 2])
 {
 if (Minheap[u / 2] > Minheap[u])
 {

 int temp = Minheap[u / 2];
 Minheap[u / 2] = Minheap[u];
 Minheap[u] = temp;
 }
 u = u / 2;
 }
}
void heap::UpAdjustMaxHeap(int u)
{
 while (u > 1 && Maxheap[u] > Maxheap[u / 2])
 {
 if (Maxheap[u / 2] < Maxheap[u])
 {
 int temp = Maxheap[u / 2];
 Maxheap[u / 2] = Maxheap[u];
 Maxheap[u] = temp;
 }
 u = u / 2;
 }
}
void heap::CreateHeap()
{
 int n;
 float x;
 cout << " Enter Number of Students : ";
 cin >> n;
 Minheap[0] = 0;
 Maxheap[0] = 0;
 for (int i = 0; i < n; i++)
 {
 cout << "Enter the marks of student " << i + 1 << " : ";
 cin >> x;
 InsertMaxHeap(x);
 InsertMinHeap(x);
 }}
float heap::FindMAX()
{
 return Maxheap[1];
 cout << endl;
 int a = Maxheap[0];
 for (int i = 0; i < a + 1; i++)
 {
 cout << Maxheap[i] << " ";
 }}
float heap::FindMin()
{
 return Minheap[1];
 cout << endl;
 int a = Minheap[0];
 for (int i = 0; i < a + 1; i++)
 {
 cout << Minheap[i] << " ";
 }}
int main()
{
 heap H;
 H.CreateHeap();
 cout << "The max value is :" << H.FindMAX() << endl;
 cout << "The min value is :" << H.FindMin() << endl;
}
