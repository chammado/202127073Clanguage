#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "screen.h"
#include "GameObjects.h"
#include <time.h>

#define PLAYER_HP 100
#define SPHINX_HP 200
#define PLAYER_DAMAGE 40
#define SPHINX_DAMAGE 50

// ������ ���� �����ϴ� ����ü
typedef struct {
    char* question;
    char* answer;
} Question;

Question questions[] = {
    {"�������� ������?(�ѱ�)", "�ĸ�"},
    {"���� �̸���?(�ѱ�)", "����ũ��"},
    {"���� 1ȣ���� ��ȭ���� �̸���?(�ѱ�)", "���ʹ�"},
    {"�츮���� ������ �ѱ� �Ҽ��� �������� �� �����Ҽ��� �̸���?(�ѱ�)", "ȫ�浿��"},
    {"���ѿ����� [][]�� ���� �����̶� �θ��µ� [][]�� �����ϱ��?(�ѱ�)", "���̽�ũ��"},
    {"���ڰ� ���º��� �� ������ �����ϴ� ����?(�ѱ�)", "û����"},
    {"Ÿ���� ��볪 �������� ���Ͽ� �ɷ��� �����ų� ����� �������� ����?(����)", "Pygmalioneffect"},
    {"���� ���⼺�� ��Ÿ���� ������ ���� �� ������, ���� ��ȭ��Ű�� ȭ�չ�?(����)", "alkali"},
    {"����Ʈ ��ȭ�� �ְ���� �����ΰ�?(�ѱ�)", "��"},
    {"����Ʈ ��ȭ�� �ı��� ������, ������ �Ӹ��� ���� ������ �̸���?(�ѱ�)", "��ũ��Ʈ"},
    {"1Byte�� ��BIt�� �̷���� �ִ°�?(����)", "8"},
    {"(98765 + 43210) * (12345 - 67890)) / (98765 * 43210) = ?(����)", "0"},


    // ���ϴ� ������ ���� �߰��� �� �ֽ��ϴ�.
};

int used_question_indices[1];
int num_used_questions = 0;

int get_random_question_index(int num_questions) {
    time_t current_time = time(NULL);
    srand((unsigned int)current_time);
    return rand() % num_questions;
}

int get_random_question(Question* question) {
    int num_questions = sizeof(questions) / sizeof(Question);

    // ��� ������ ������� ���, ������ ������ �������� �ε��� �迭 �ʱ�ȭ
    if (num_used_questions == num_questions) {
        num_used_questions = 0;
    }

    // �ߺ����� ���� ������ ������ ������ �ݺ�
    while (1) {
        int index = get_random_question_index(num_questions);

        // ���� ������ �ε����� ������ ������ �������� �ε��� �迭�� �ִ��� Ȯ��
        int is_duplicate = 0;
        for (int i = 0; i < num_used_questions; i++) {
            if (used_question_indices[i] == index) {
                is_duplicate = 1;
                break;
            }
        }

        // �ߺ����� ���� ������ ������ ���
        if (!is_duplicate) {
            *question = questions[index];

            // ���� ������ �ε����� ������ ������ �������� �ε��� �迭�� �߰�
            used_question_indices[num_used_questions] = index;
            num_used_questions++;

            return index;
        }
    }
}

int check_answer(const char* player_answer, const char* correct_answer) {
    return strcmp(player_answer, correct_answer) == 0;
}


void playSphinxQuizGame()
{
    char screen[120 * 40 + 1];
    int width = 120;
    int height = 40;
    int gameover = 1;
    int over_loop = 1;
    int win_loop = 1;
    char input = ' ';

    int player_hp = PLAYER_HP;
    int sphinx_hp = SPHINX_HP;
    char player_answer[100];
    Question current_question;

    while (player_hp > 0 && sphinx_hp > 0) 
    {
        SetCursorVisible(0);
        /*clear_screen();*/
        system("cls");
        SetCursorPosition(0, 0);
        PlayingBorder();
        IngameSphinx();
        SphinxLeftFoot();
        SphinxRightFoot();
        SetCursorPosition(3, 38);
        printf("system: ������ ���� ���� ��Ȯ�ϰ� �Է��ؾ��մϴ�.");

        int question_index = get_random_question(&current_question);
        SetCursorPosition(25, 32);
        printf("Sphinx: %s\n", current_question.question);
        SetCursorPosition(45, 35);
        printf("{����:________________}");
        SetCursorPosition(51, 35);
        scanf_s("%s", player_answer,50);

        if (check_answer(player_answer, current_question.answer))
        {
            SetCursorVisible(0);
            system("cls");
            sphinx_hp -= PLAYER_DAMAGE;
            SetCursorPosition(0, 0);
            PlayingBorder();
            IngameSphinx();
            SphinxLeftFoot();
            SphinxRightFoot();
            SetCursorPosition(53, 32);
            printf("��..�� �ϴ±�......\n");
            getchar();
        }
        else 
        {
            SetCursorVisible(0);
            system("cls");
            player_hp -= SPHINX_DAMAGE;
            SetCursorPosition(0, 0);
            PlayingBorder();
            IngameSphinx();
            SphinxLeftFoot();
            SphinxRightFoot();
            SetCursorPosition(38, 33);
            printf("�����..... ���� �ִ������� ���ư���!!!!\n");
            getchar();
        }

        SetCursorPosition(47, 37);
        printf("Press Enter to continue...");
        /*printf("Player HP: %d, Sphinx HP: %d\n\n", player_hp, sphinx_hp);*//*HP ǥ��*/
        getchar();

        if (player_hp <= 0) 
        {
            while (over_loop)
            {
                SetCursorVisible(0);
                system("cls");
                PrintBorder(screen, width, height);
                printf("%s", screen);
                GameoverPrint();
                GameoverGuid();
                SetCursorPosition(53, 36);
                printf("{___     ___}");
                SetCursorPosition(59, 36);
                scanf_s(" %c", &input, 50);
                if (input == '0' || input >= '2')
                {
                    SetCursorVisible(0);
                    system("cls");
                    PrintBorder(screen, width, height);
                    printf("%s", screen);
                    GameoverPrint();
                    GameoverGuid();
                    SetCursorPosition(0, 40);
                    over_loop = 1;
                }
                else if (input == '1')
                {
                    SetCursorVisible(0);
                    system("cls");
                    SetCursorPosition(0, 0);
                    PrintBorder(screen, width, height);
                    printf("%s", screen);
                    setTitle();
                    SubTitle();
                    TitleSphinx();
                    MenuPrint();
                    break;
                }
            }
        }
        if (sphinx_hp <= 0)
        {
            while (win_loop)
            {
                SetCursorVisible(0);
                system("cls");
                PrintBorder(screen, width, height);
                printf("%s", screen);
                GamewinPrint();
                GamewinGuid();
                SetCursorPosition(53, 36);
                printf("{___     ___}");
                SetCursorPosition(59, 36);
                scanf_s(" %c", &input, 50);
                if (input == '0' || input >= '2')
                {
                    SetCursorVisible(0);
                    system("cls");
                    PrintBorder(screen, width, height);
                    printf("%s", screen);
                    GamewinPrint();
                    GamewinGuid();
                    SetCursorPosition(0, 40);
                    win_loop = 1;
                }
                else if (input == '1')
                {
                    SetCursorVisible(0);
                    system("cls");
                    SetCursorPosition(0, 0);
                    PrintBorder(screen, width, height);
                    printf("%s", screen);
                    setTitle();
                    SubTitle();
                    TitleSphinx();
                    MenuPrint();
                    break;
                }
            }
        }
    }   
}
