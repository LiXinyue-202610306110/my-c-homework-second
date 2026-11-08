//李鑫玥
//202610306110
#include <stdio.h>
#include <stdlib.h>

struct Player {
    char name[16];
    int score;
};
void sort_players(struct Player arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].score < arr[j+1].score) {
                struct Player temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    system("chcp 65001 >nul");
    int a;
    printf("请输入选手人数: ");
    scanf("%d", &a);
    struct Player player[100]; 
        for(int i = 0; i < a; i++) {
        printf("请输入第%d位选手的姓名和分数: ", i + 1);
        scanf("%s %d", &player[i].name, &player[i].score);
    }
    sort_players(player, a); 
    for(int i = 0; i < a; i++) {
        printf("第%d名: %s %d\n", i+1, player[i].name, player[i].score);
    }
    
    return 0;
}