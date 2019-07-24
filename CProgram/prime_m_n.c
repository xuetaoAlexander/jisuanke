/*************************************************************************
	> File Name: prime_m_n.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月24日 星期三 09时42分11秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>

int n = 1000000;
int mark[1000001];

int main() {
    int c;
    memset(mark, 0, sizeof(mark));
    mark[0] = 1;
    mark[1] = 1;
    int M;
    int N;
    scanf("%d%d", &N, &M);
    int j;

    for (c = 2; c * c <= n; c++) {
        for (j = 2; j <= n / c; j++){
            if (mark[c * j] != 1){
                mark[c * j] = 1;
            }
        }
    }
    for (int i = M; i <= N; i++){
        if (mark[i] != 1){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
