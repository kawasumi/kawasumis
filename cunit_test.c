#include <CUnit/CUnit.h>
//#include <CUnit/Console.h> //対話型
#include <CUnit/Automated.h>

#define ADD_TEST_NUM (3)

// バグのあるadd関数(テスト対象)
int add(int x, int y) {
    return 0;
}

/**
 * addテストスイート
 **/
// テスト関数001
void test_add_001(void) {
    CU_ASSERT_EQUAL(add(1, 2), 3);
}

// テスト関数002
void test_add_002(void) {
    CU_ASSERT_EQUAL(add(-1, -2), -3);
}

//自分で追加　テスト関数003
void test_add_003(void) {
    CU_ASSERT_EQUAL(add(2,-2),0);
}

// main関数
int main() {
CU_pSuite add_suite;

    CU_initialize_registry(); // 2.テスト構造の初期化
    add_suite = CU_add_suite("add", NULL, NULL); // 3.テストスイートの追加

    CU_add_test(add_suite, "test_001", test_add_001); // 4.テスト関数の追加
    CU_add_test(add_suite, "test_002", test_add_002); // 4.テスト関数の追加
    CU_add_test(add_suite, "test_003", test_add_003);

    CU_automated_run_tests(); //自動化に必要

    //CU_console_run_tests(); // 5.適切なインターフェースを使用してテストを実行
    CU_cleanup_registry(); // 6.テスト構造のクリーン
    return 0;
}