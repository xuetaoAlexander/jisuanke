/*************************************************************************
	> File Name: multiplicationTable.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月23日 星期二 08时02分03秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n - i + 1; j++){
            if (j < n - i + 1){
                printf("%d*%d=%d\t", i, (i + j - 1), i * (i + j - 1));
            }else{
                printf("%d*%d=%d\n", i, (i + j - 1), i * (i + j - 1));
            }
        }
    }

    return 0;
}

