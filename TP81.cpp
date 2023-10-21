#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
int GenerarNumeroHueco(int a);
bool EncajaPerfectamente(vector<int> a, vector<int> b, int c);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A;
    vector<int> B;
    srand(time(NULL));
    int N = 6, a = 0;
    string msg = "NO";
    A = GenerarVector(N);
    B = GenerarVector(N);
    a = GenerarNumeroHueco(a);
    cout<<"El hueco es: "<<a<<endl;
    MostrarVector(A);
    MostrarVector(B);
    if (EncajaPerfectamente(A, B, a))
    {
        msg = "SI";
    }
    cout<<msg<<endl;
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    for (int i = 0; i < n; i++)
    {
        e = rand() % 2000;
        V.push_back(e);
    }
    return V;
}

int GenerarNumeroHueco(int a)
{
    a = rand() % 2000;
    return a;
}

bool EncajaPerfectamente(vector<int> a, vector<int> b, int c)
{
    bool flag = false;
    int no = 0;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == c || b[j] == c)
            {
            	no++;
            }
            i++;
        }
    }
    if (no==0)
    {
        flag = true;
    }
    return flag;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}