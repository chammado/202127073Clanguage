void playSphinxQuizGame();

#define PLAYER_HP 100
#define SPHINX_HP 200
#define PLAYER_DAMAGE 40
#define SPHINX_DAMAGE 50

typedef struct{char* question; char* answer;} Question;

int get_random_question_index(int num_questions);
int get_random_question(Question* question);
int check_answer(const char* player_answer, const char* correct_answer);