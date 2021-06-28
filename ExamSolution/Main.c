
#include "MyString.h"

int main()
{

    String *s1 = CreateString("aaaa");
    printf("%s\n", s1->str);

    String *s2 = CreateString("bbbb");
    printf("%s\n", s2->str);

    int result = CompareString(s1, s2);
    printf("%d\n", result);

    String *s3 = CreateString("cccc");
    printf("%s\n", s3->str);

    result = CompareString(s1, s3);
    printf("%d\n", result);
    printf("before copy :\n%s\n", s1->str);
    CopyString(s1, s2);
    printf("after copy :\n%s\n", s1->str);

    printf("before copy :\n%s\n", s2->str);
    CopyCString(s2,"abcde");
    printf("after copy :\n%s\n", s2->str);

    printf("before append :\n%s\n", s1->str);
    AppendCString(s1,"qqqqqq");
    printf("after appen :\n%s\n", s1->str);



    return 0;
}
