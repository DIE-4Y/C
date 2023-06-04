#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 提交信息结构体
typedef struct {
    int team_id; // 队伍号
    int problem_id; // 题目号
    int submit_time; // 提交时间
    char verdict; // 运行结果
} Submit;

// 队伍信息结构体
typedef struct {
    int team_id; // 队伍号
    int solved; // 解决的问题数目
    int penalty; // 总用时，以秒为单位
} Team;

// 比较函数，用于排序
int cmp(const void *p1, const void *p2)
{
    Team *t1 = (Team *)p1;
    Team *t2 = (Team *)p2;
    if (t1->solved != t2->solved) {
        return t2->solved - t1->solved;
    }
    else {
        return t1->penalty - t2->penalty;
    }
}

int main() {
    freopen("7004.txt", "r",stdin);
    // 读取输入
    int N, C;
    scanf("%d %d", &N, &C);
    Submit *submits = (Submit *)malloc(sizeof(Submit) * N);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d %d %c", &submits[i].team_id, &submits[i].problem_id, &submits[i].submit_time, &submits[i].verdict);
    }

    // 初始化队伍信息
    Team *teams = (Team *)malloc(sizeof(Team) * C);
    for (int i = 0; i < C; ++i) {
        teams[i].team_id = i + 1;
        teams[i].solved = 0;
        teams[i].penalty = 0;
    }

    // 处理每个提交的信息，更新队伍信息
    for (int i = 0; i < N; ++i) {
        Submit *submit = &submits[i];
        Team *team = &teams[submit->team_id - 1];
        if (submit->verdict == 'A') { // 问题解决
            if (!team->solved) { // 第一次解决，不计罚时
                team->solved = 1;
                team->penalty += submit->submit_time;
            }
            else { // 多次提交，计入罚时
                team->solved++;
                team->penalty += submit->submit_time + 20 * (team->solved - 1);
            }
        }
        else { // 问题未解决，不处理
        }
    }

    // 排序
    qsort(teams, C, sizeof(Team), cmp);

    // 输出排名情况
    printf("排名 队伍 解决数 总用时\n");
    int rank = 1;
    for (int i = 0; i < C; ++i) {
        Team *team = &teams[i];
        if (team->solved) { // 只输出解决问题的队伍
            printf("%-5d %-6d %-5d %-5d\n", rank++, team->team_id, team->solved, team->penalty);
        }
    }

    // 释放内存
    free(submits);
    free(teams);

    return 0;
}
