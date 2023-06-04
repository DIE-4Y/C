#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �ύ��Ϣ�ṹ��
typedef struct {
    int team_id; // �����
    int problem_id; // ��Ŀ��
    int submit_time; // �ύʱ��
    char verdict; // ���н��
} Submit;

// ������Ϣ�ṹ��
typedef struct {
    int team_id; // �����
    int solved; // �����������Ŀ
    int penalty; // ����ʱ������Ϊ��λ
} Team;

// �ȽϺ�������������
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
    // ��ȡ����
    int N, C;
    scanf("%d %d", &N, &C);
    Submit *submits = (Submit *)malloc(sizeof(Submit) * N);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d %d %c", &submits[i].team_id, &submits[i].problem_id, &submits[i].submit_time, &submits[i].verdict);
    }

    // ��ʼ��������Ϣ
    Team *teams = (Team *)malloc(sizeof(Team) * C);
    for (int i = 0; i < C; ++i) {
        teams[i].team_id = i + 1;
        teams[i].solved = 0;
        teams[i].penalty = 0;
    }

    // ����ÿ���ύ����Ϣ�����¶�����Ϣ
    for (int i = 0; i < N; ++i) {
        Submit *submit = &submits[i];
        Team *team = &teams[submit->team_id - 1];
        if (submit->verdict == 'A') { // ������
            if (!team->solved) { // ��һ�ν�������Ʒ�ʱ
                team->solved = 1;
                team->penalty += submit->submit_time;
            }
            else { // ����ύ�����뷣ʱ
                team->solved++;
                team->penalty += submit->submit_time + 20 * (team->solved - 1);
            }
        }
        else { // ����δ�����������
        }
    }

    // ����
    qsort(teams, C, sizeof(Team), cmp);

    // ����������
    printf("���� ���� ����� ����ʱ\n");
    int rank = 1;
    for (int i = 0; i < C; ++i) {
        Team *team = &teams[i];
        if (team->solved) { // ֻ����������Ķ���
            printf("%-5d %-6d %-5d %-5d\n", rank++, team->team_id, team->solved, team->penalty);
        }
    }

    // �ͷ��ڴ�
    free(submits);
    free(teams);

    return 0;
}
