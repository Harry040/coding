/*
 
 
 5个数求最值
 时间限制：1000 ms  |  内存限制：65535 KB
 难度：1
 描述
 设计一个从5个整数中取最小数和最大数的程序
 输入
 输入只有一组测试数据，为五个不大于1万的正整数
 输出
 输出两个数，第一个为这五个数中的最小值，第二个为这五个数中的最大值，两个数字以空格格开。
 样例输入
 1 2 3 4 5
 样例输出
 1 5

 */


#include <iostream>
#include <math.h>
#include<string>
#include<map>
using namespace std;
void bubble_sort(int a[5]){
    
    for(int i=0; i<5-1; i ++){
        for(int j=i+1; j< 5; j++){
            if (a[i]>a[j]){
                int tmp;
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    cout<<a[0]<<" "<<a[4]<<endl;
}
void select_sort(int a[5]){
    for(int i=0; i<5; i++){
        
        int index;
        index=i;
        for(int j=i+1; j<5; j++){
            if (a[index]>a[j]){
                index=j;
            }
        }
        
        int tmp;
        tmp = a[index];
        a[index] = a[i];
        a[i] = tmp;
    }
    cout<<a[0]<<" "<<a[4]<<endl;
    
}


int main()
{
    
    int a[5],i=0;
    while(i<5){
        cin>>a[i];
        i ++;
    }
    int min=10000+1, max=0;
    for(int i=0; i<5; i++){
        if(a[i]<min){
            min = a[i];
        }
        if(a[i]>max){
            max = a[i];
        }
       
    }
    cout<<min<<" "<<max<<endl;
    //bubble_sort(a);
    //select_sort(a);
    return 0;
}
