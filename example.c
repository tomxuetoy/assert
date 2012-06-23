#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main( void )
{
	FILE *fp1, *fp2;

	fp1 = fopen( "test.txt", "w" );//以可写的方式打开一个文件，如果不存在就创建一个同名文件
	assert( fp1 ); //所以这里不会出错
	fclose( fp1 );

	fp2 = fopen( "noexitfile.txt", "r" );//以只读的方式打开一个文件，如果不存在就打开文件失败
	assert( fp2 ); //所以这里出错
	fclose( fp2 ); //程序永远都执行不到这里来
	return 0;
}
