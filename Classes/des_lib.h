
#include <stdio.h>
#include <memory.h>
#include <time.h>
#include <stdlib.h>
#include<string.h>
#include "ostype.h"
#include "UtilPdu.h"

//����
//cipherFileΪҪ���ܵ�Դ�ļ��� keyStr Ϊ8λ�ַ���Կ  plainFileΪ���ܺ��Ŀ���ļ���

#ifdef __cplusplus
extern "C" {
#endif


int DecryptionFile(const char *strOutFile, const char *keyStr0, const char *strName);
//����
int EncryptionFile(char *strName, char *keyStr0, char *strOutFile);

int Decryption(CSimpleBuffer *inbuffer, char *key, CSimpleBuffer *outbuffer);
int Encryption(CSimpleBuffer *inbuffer, char *key, CSimpleBuffer *outbuffer);

#ifdef __cplusplus
}
#endif
