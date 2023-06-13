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

// 문제와 답을 저장하는 구조체
typedef struct {
    char* question;
    char* answer;
} Question;

Question questions[] = {
    {"프랑스의 수도는?(한글)", "파리"},
    {"나의 이름은?(한글)", "스핑크스"},
    {"국보 1호였던 문화재의 이름은?(한글)", "숭례문"},
    {"우리나라 최초의 한글 소설로 전해지는 이 고전소설의 이름은?(한글)", "홍길동전"},
    {"북한에서는 [][]을 얼음 보숭이라 부르는데 [][]는 무엇일까요?(한글)", "아이스크림"},
    {"제자가 스승보다 더 나음을 비유하는 말은?(한글)", "청출어람"},
    {"타인의 기대나 관심으로 인하여 능률이 오르거나 결과가 좋아지는 현상?(영어)", "Pygmalioneffect"},
    {"강한 염기성을 나타내는 물질로 물에 잘 녹으며, 산을 중화시키는 화합물?(영어)", "alkali"},
    {"이집트 신화의 최고신은 누구인가?(한글)", "라"},
    {"이집트 신화의 파괴의 신이자, 사자의 머리를 가진 여신의 이름은?(한글)", "세크메트"},
    {"1Byte는 몇BIt로 이루어져 있는가?(숫자)", "8"},
    {"(98765 + 43210) * (12345 - 67890)) / (98765 * 43210) = ?(숫자)", "0"},


    // 원하는 문제와 답을 추가할 수 있습니다.
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

    // 모든 문제를 사용했을 경우, 이전에 출제된 문제들의 인덱스 배열 초기화
    if (num_used_questions == num_questions) {
        num_used_questions = 0;
    }

    // 중복되지 않은 문제를 선택할 때까지 반복
    while (1) {
        int index = get_random_question_index(num_questions);

        // 현재 문제의 인덱스가 이전에 출제된 문제들의 인덱스 배열에 있는지 확인
        int is_duplicate = 0;
        for (int i = 0; i < num_used_questions; i++) {
            if (used_question_indices[i] == index) {
                is_duplicate = 1;
                break;
            }
        }

        // 중복되지 않은 문제를 선택한 경우
        if (!is_duplicate) {
            *question = questions[index];

            // 현재 문제의 인덱스를 이전에 출제된 문제들의 인덱스 배열에 추가
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
        printf("system: 정답은 공백 없이 정확하게 입력해야합니다.");

        int question_index = get_random_question(&current_question);
        SetCursorPosition(25, 32);
        printf("Sphinx: %s\n", current_question.question);
        SetCursorPosition(45, 35);
        printf("{정답:________________}");
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
            printf("흠..꽤 하는군......\n");
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
            printf("어리석군..... 원래 있던곳으로 돌아가라!!!!\n");
            getchar();
        }

        SetCursorPosition(47, 37);
        printf("Press Enter to continue...");
        /*printf("Player HP: %d, Sphinx HP: %d\n\n", player_hp, sphinx_hp);*//*HP 표시*/
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
