# CMakeのバージョンを設定
cmake_minimum_required(VERSION 3.10.2)

# プロジェクト名と使用する言語を設定
project(unitTest_cmake C)

# 作成する実行ファイル 実行ファイルをつくるソースファイルを指定
add_executable(unitTest.out cunit_test.c)

# unitTest.out作成時に libcunit.aをリンク
target_link_libraries(unitTest.out cunit)