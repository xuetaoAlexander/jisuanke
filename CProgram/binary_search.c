/*************************************************************************
	> File Name: binary_search.c
	> Author: XuetaoZhang
	> Mail: yselie06@gmail.com
	> Created Time: 2019年07月24日 星期三 12时37分09秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main() {
    int n;
    int k;
    int numbers[1000001];
    int m;
    int i;
    int j;

    // 反复读入数字和查找数字的数量
    while (scanf("%d%d", &n, &k) != EOF) {
        
        // 读入给定的数字
        for (i = 0; i < n; i++) {
            scanf("%d", &numbers[i]);
        }

        for (j = 0; j < k; j++) {
            // 读入待查找的数字，
            scanf("%d", &m);

            // 请在下面完成查找读入数字的功能
            int left = 0;
            int right = n - 1;
            
            if (m < numbers[left] || m > numbers[right]){
                if (j < k - 1){
                    printf("0 ");
                }else{
                    printf("0 ");
                }
            }else{
                while(m != numbers[(left + right) / 2]){
                    if (fabs(left - right) == 1){
                        if (j < k -1){
                            printf("0 ");
                        }else{
                            printf("0");
                        }
                        break;
                    }
                    if (m < numbers[(left + right) / 2]){
                        right = (left + right) / 2;
                    }else if (m > numbers[(left + right) / 2]){
                        left = (left + right) / 2;
                    }
                }
                if (m == numbers[(left + right) / 2]){
                    if (j < k - 1){
                        printf("%d ", (left + right) / 2 + 1);
                    }else{
                        printf("%d", (left + right) / 2 + 1);
                    }
                }
            }
        }
    }
    return 0;
}
