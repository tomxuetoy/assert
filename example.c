#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main( void )
{
	FILE *fp1, *fp2;

	fp1 = fopen( "test.txt", "w" );//�Կ�д�ķ�ʽ��һ���ļ�����������ھʹ���һ��ͬ���ļ�
	assert( fp1 ); //�������ﲻ�����
	fclose( fp1 );

	fp2 = fopen( "noexitfile.txt", "r" );//��ֻ���ķ�ʽ��һ���ļ�����������ھʹ��ļ�ʧ��
	assert( fp2 ); //�����������
	fclose( fp2 ); //������Զ��ִ�в���������
	return 0;
}
