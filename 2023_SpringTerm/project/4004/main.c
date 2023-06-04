#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    int h, mi, s;

    char startname[20];
    char endname[20];
    int minstarttime;
    int maxendtime;

    char name[20];
    int starttime;
    int endtime;

    // ����������������������
    scanf("%d", &n);
    while(n--) {
        // �����¼��
        scanf("%d", &m);

        // ������ʱ����С����ʱ���������ʱ��
        minstarttime = 24 * 3600;
        maxendtime = 0;

        // ���������¼����������С����ʱ���������ʱ��
        for(int i=1; i<=m; i++) {
            scanf("%s %d:%d:%d", name, &h, &mi, &s);
            starttime = s + mi * 60 + h * 3600;
            if(starttime < minstarttime) {
                minstarttime = starttime;
                strcpy(startname, name);
            }

            scanf("%d:%d:%d", &h, &mi, &s);
            endtime = s + mi * 60 + h * 3600;
            if(endtime > maxendtime) {
                maxendtime = endtime;
                strcpy(endname, name);
            }
        }

        // ������
        printf("%s %s\n", startname, endname);
    }

    return 0;
}
