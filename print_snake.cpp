/*

描述
在n*n方陈里填入1,2,...,n*n,要求填成蛇形。例如n=4时方陈为：
10 11 12 1
9 16 13 2
8 15 14 3
7 6 5 4

输入
直接输入方陈的维数，即n的值。(n<=100)
输出
输出结果是蛇形方陈。
样例输入

3

样例输出

7 8 1
6 9 2
5 4 3
 
 */


#include <iostream>
#include <math.h>
#include<string>
#include<map>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    if (n<=1){
        cout<<n<<endl;
        return 0;
    }
    int a[101][101], x,y;
    a[0][n-1] = 1;
    x = n-1, y=0;
    
    int index=1;
    
    while (index < n * n){
        while(y+1< n && !a[y+1][x]) a[++y][x] = ++index;
        while(x-1>=0 && !a[y][x-1]) a[y][--x] = ++index;
        while(y-1>=0 && !a[y-1][x])  a[--y][x] = ++index;
        while(x+1<n && !a[y][x+1])  a[y][++x] = ++index;
        
    }
for(int i=0; i < n; i++){
        for( int j=0; j< n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
