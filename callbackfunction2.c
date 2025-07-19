#include<Windows.h>
#include<stdio.h>

//shellcode
unsigned char payload[] = { 0x00,0x01,0x02,0x03,0x04 };

int main(int argc, char* argv[]) {
	printf("payload address:0x%p", payload);
	if (!EnumUILanguagesW((UILANGUAGE_ENUMPROCW)payload, NULL,NULL ){
		printf("EnmULannguagesW failed with error:(%ld)",GetLastError());
		return -1;
	}
	getchar();
	return 0;
}