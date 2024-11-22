#define SEED 17
int MULT = 25173;
int INC = 13849;
int MOD = 65536;

static unsigned int seed = SEED;// ���� ���� �õ尪

// ���� ���� ���� �Լ�
unsigned random_i(void)
{
    seed = (MULT * seed + INC) % MOD;// ������ �õ尪 ����
    return seed;
}
// �Ǽ� ���� ���� �Լ�
double random_f(void)
{
    seed = (MULT * seed + INC) % MOD;// ������ �õ尪 ����
    return seed / (double)MOD;// 0.0���� 1.0 ���̷� ����
}
