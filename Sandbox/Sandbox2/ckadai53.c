
/* ヘッダファイル ------------------------------------------------------ */
#include <stdio.h>

/* 記号定数 ------------------------------------------------------------ */
#define SIZE 7		// 商品表の要素数

/* 構造体の定義 -------------------------------------------------------- */
typedef struct syouhin{
	int no;		//商品番号
	char name[10];	//商品名
	int tanka;	//単価
} syouhin_t;

/* プロトタイプ宣言 ---------------------------------------------------- */
int Search(const syouhin_t shyo[], int size, int key);

/* エントリポイント ---------------------------------------------------- */
int main(void)
{
	syouhin_t slist[SIZE] = {	// 商品表（テストデータ）
		{  2, "ABCDEF",  100 },
		{  3, "ABC",     150 },
		{  5, "AAABBB",   50 },
		{  8, "A1B2C3", 1500 },
		{  9, "AAA111",  750 },
		{ 10, "XYZ",     200 },
		{ 12, "KIC",    2100 }
	};
	int key, idx;

	printf("検索する商品番号を入力してください：");
	scanf("%d", &key);

	idx = Search(slist, SIZE, key);

	if ( idx != -1 ) {
		//探索成功
		printf("商品番号：%d\n", slist[idx].no);
		printf("商品名　：%s\n", slist[idx].name);
		printf("単　価　：%d\n", slist[idx].tanka);
	}
	else {
		//探索失敗
		printf("商品番号「%d」は，商品表に存在しません\n", key);
	}

	return 0;
}

/* --------------------------------------------------------------------- */
/* 関数名：Search							 */
/* 機　能：商品表から商品番号を探索する（二分探索）			 */
/* 戻り値：探索成功：発見した要素の添え字	(int型)			 */
/*	 　探索失敗：-1							 */
/* 引　数：const syouhin_t shyo[]：　商品表の先頭番地			 */
/*	 　int size		 ：　商品表の要素数			 */
/*	 　int key		 ：　探索する商品番号			 */
/* --------------------------------------------------------------------- */
int Search(const syouhin_t shyo[], int size, int key)
{
	int i, head = 0, tail, mid;

	tail = size - 1;
	while ( head <= tail ) {
		mid = (head + tail) / 2;
		if ( shyo[mid].no == key ) {
			return mid;	//探索成功
		}
		else if ( shyo[mid].no < key ) {
			head = mid + 1;
		}
		else {
			tail = mid - 1;
		}
	}

	return -1;	//探索失敗
}
