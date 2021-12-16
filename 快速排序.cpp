#include <iostream>

using namespace std;
const int N = 100010;
int q[N], n;

void quick_sort(int q[], int l, int r)
{
    if(l >= r) return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while(i < j){
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) scanf("%d", &q[i]);
    quick_sort(q, 0, n);
    for(int i = 1; i <= n; i++) printf("%d ", q[i]);
    return 0;
}
