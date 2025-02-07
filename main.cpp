#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nhapMang(vector<int> &a, int &n)
{
   cin >> n;
   int value;
   for(int i = 0; i < n; i++)
   {
       cin >> value;
       a.push_back(value);
   }
}
int KiemTra(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            return 1;
        }
    }
    return -1;
}
void xuatMang(vector<int> a)
{
    for(int x : a)
    {
        cout << x << " " ;
    }
    cout << endl;
}
void TimSoChan(vector<int> a)
{
    int demdau = 0;
    int demcuoi = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] % 2 == 0)
        {
            demdau = i;
            cout << a[i] << " la so chan dau tien, co chi so " << demdau << " trong mang" <<endl;
            break;
        }
    }
    for(int i = a.size() - 1; i >= 0; i--)
    {
        if(a[i] % 2 == 0)
        {
            demcuoi = i;
            cout << a[i] << " la so chan cuoi cung, co chi so " << demcuoi << " trong mang" <<endl;
            break;
        }
    }
}
void SoChanLonNhat(vector<int> a)
{
    sort(a.begin(), a.end());
    for(int i = a.size() - 1; i >= 0; i--)
    {
        if(a[i] % 2 == 0)
        {
            cout << a[i];
            break;
        }
    }
    return ;
}
int main()
{
    int n = 0;
    vector<int> a;
    nhapMang(a, n);
    cout << "Mang vua nhap: " << endl;
    xuatMang(a);
    if(KiemTra(a) == -1)
    {
        cout << "Mang khong co so chan" << endl;
    }
    else
    {
        TimSoChan(a);
        cout << "So chan lon nhat: ";
        SoChanLonNhat(a);
    }
    return 0;
}
