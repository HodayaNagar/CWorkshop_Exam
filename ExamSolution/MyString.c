#ifndef DOXYGEN_SHOULD_SKIP_THIS
/**
  * @file MyString.h
  */

#include "MyString.h"





String *CreateString(const char *source)
{
    size_t strSize = GetStringLength(source);

    String *strTemp = (String *) malloc(strSize);
    strTemp->str = NULL;

    char *pTmp = (char *) malloc(strSize);
    strcpy(pTmp, source);

    strTemp->str = pTmp;

    return strTemp;
}

BOOL DeleteString(String *str)
{

    if (str)
    {
        /*
          Assertions.
        */
        assert(str != 0);

        free(str);
        str = 0;
        str = NULL;
        return TRUE;
    }
    return FALSE;
}

size_t GetStringLength(const String *str)
{
    size_t size = 0;

    if (!IsEmpty)
    {
        while (str->str[size])
        {
            ++size;
        }
    }
    return size;
}

BOOL IsEmpty(const String *str)
{
    size_t size = 0;

    if (str->str)
    {
        return FALSE;
    }
    return TRUE;
}

BOOL CompareString(const String *str1, const String *str2) // str1 can be
                                 // greater than, equals to,
                                 // or smaller than str2
{
    size_t strSize1 = GetStringLength(str1);
    size_t strSize2 = GetStringLength(str2);


    char *pTmp1 = (char *) malloc(strSize1);
    char *pTmp2 = (char *) malloc(strSize2);

    int result = !(strcmp(pTmp1, pTmp2));
    return result;
    //return !(strcmp(pTmp1, pTmp2));
    //return (!strcmp(str1->str, str2->str));
}
void CopyString(String *dst, const String *src) // don’t forget to take
                                 // care of the old underlying string!
{
    size_t strSize = GetStringLength(src);
    char *pSource = src->str;
    char *pDestination = (char *) malloc(strSize);

    strcpy(pDestination, pSource);
    dst->str = pDestination;
}




size_t GetArrayLength(char str[])
{
    size_t size = 0;
    if (str)
    {
        while (str[size])
        {
            ++size;
        }
    }
    return size;
}

void CopyCString(String *dst, const char *src)
{
    size_t strSize = GetArrayLength(src);
    char *pDestination = (char *) malloc(strSize);

    strcpy(pDestination, src);
    dst->str = pDestination;
}


void AppendString(String *dst, const String *src) // AKA concatenation
{
    size_t strSize1 = GetStringLength(src);
    size_t strSize2 = GetStringLength(dst);
    char *pSource = src->str;
    char *pDestination = (char *) malloc(strSize1 + strSize2);

    strncat(pDestination, pSource, strSize1);
    dst->str = pDestination;
}

void AppendCString(String *dst, const char *src)
{
    size_t strSize1 = GetArrayLength(src);
    size_t strSize2 = GetStringLength(dst);
    char *pDestination = (char *) malloc(strSize1 + strSize2);

    strncat(pDestination, src, strSize1);
    dst->str = pDestination;
}







#endif /* DOXYGEN_SHOULD_SKIP_THIS */
