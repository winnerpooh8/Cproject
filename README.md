# Cproject

1  2  3
6  5  4
7  8  9
#include <stdio.h>

int main() {
    int value3[3][3];  // 3x3 배열 선언 (초기화 없이 선언)
    int value = 1;
    for (int col = 0; col < 3; col++) {
        if (col % 2 == 0) { // 짝수 열: 위에서 아래로 채우기
            for (int row = 0; row < 3; row++) {
                value3[row][col] = value++;
            }
        } else { // 홀수 열: 아래에서 위로 채우기
            for (int row = 2; row >= 0; row--) {
                value3[row][col] = value++;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%2d ", value3[j][i]);
        }
        printf("\n");
    }
      return 0;
}
1  2  3
8  9  4
7  6  5

#include <stdio.h>

int main() {
    int value3[3][3];  // 3x3 배열 선언 (초기화 없이 선언)
    int value = 1;
    int n = 3;
    
  
   for (int j = 0; j < n; j++) {
        value3[0][j] = value++;
    }
    // 2. 오른쪽 열 채우기 (위 -> 아래, 첫 행 제외)
    for (int i = 1; i < n; i++) {
        value3[i][n-1] = value++;
    }
    // 3. 하단 행 채우기 (오른쪽 -> 왼쪽, 마지막 열 제외)
    for (int j = n - 2; j >= 0; j--) {
        value3[n-1][j] = value++;
    }
    // 4. 왼쪽 열 채우기 (아래 -> 위, 첫 행과 마지막 행 제외)
    for (int i = n - 2; i > 0; i--) {
        value3[i][0] = value++;
    }
    // 5. 중앙 요소 채우기 (배열 크기가 홀수일 경우)
    if (n % 2 == 1) {
        value3[n/2][n/2] = value++;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", value3[i][j]);
        }
        printf("\n");
    }
    
  return 0;
}


 2025-02-08~2025-03-15 project
