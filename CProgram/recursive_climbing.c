/*************************************************************************
	> File Name: recursive_climbing.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月24日 星期三 17时33分14秒
 ************************************************************************/

#include<stdio.h>
int main() {
    int step[51];
    step[0] = step[1] = 0;
    step[2] = step[3] = 1;
    int n;
    n = 4;
    while(n <= 50){
        step[n] = step[n - 3] + step[n - 2];
        n++;
    }
    int m;
    scanf("%d", &m);
    printf("%d", step[m]);
    
    return 0;
}
