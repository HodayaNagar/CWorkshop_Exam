// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

// add headers that you want to pre-compile here
#include "framework.h"




#ifndef STRING_H
#define STRING_H
#include "stdio.h"
#include <assert.h>

#define BOOL int
#define TRUE 1
#define FALSE 0

/**
 *
 * implementation of part of String class
 *
 */


typedef struct String_t
{
    char *str;



}String;


/**
 *
 * @brief create a new String
 *
 * @param source string to initialize the new String with
 *
 * @return the new String initialized
 */
String *CreateString(const char *source);

/**
 *
 * @brief create a String that were dynamicly allocated in the heap
 *
 * @param str String to delete from the heap (free)
 *
 * @return TRUE (1) if the String needed to be deleted and it succedded, else return FALSE (0)
 */
BOOL DeleteString(String *str);

/**
 *
 * @brief get length of String
 *
 * @param str String to check its length
 *
 * @return the length of String
 */
size_t GetStringLength(const String *str);

/**
 *
 * @brief check if the String is empty (NULL)
 *
 * @param str String to check if is empty
 *
 * @return TRUE (1) if the String is empty, else return FALSE (0)
 */
BOOL IsEmpty(const String *str);

/**
 *
 * @brief compare two Strings
 *
 * @param str1 first String to compare
 *
 * @param str2 second String to compare
 *
 * @return TRUE (1) if the two Strings are the same, else return FALSE (0)
 */
BOOL CompareString(const String *str1, const String *str2); // str1 can be
                                 // greater than, equals to,
                                 // or smaller than str2
                                 // 



/**
 *
 * @brief copy from String to String
 *
 * @param dst String to copy from
 *
 * @param src String to copy to
 */
void CopyString(String *dst, const String *src); // don’t forget to take

                                                 // care of the old underlying string!


/**
 *
 * @brief copy from char * to String
 *
 * @param dst string to copy to
 *
 * @param src String to copy from
 */
void CopyCString(String *dst, const char *src);

/**
 *
 * @brief appent String at the end of destination String
 *
 * @param dst string to append in
 *
 * @param src String to copy from
 */
void AppendString(String *dst, const String *src); // AKA concatenation

/**
 *
 * @brief appent char * at the end of destination String
 *
 * @param dst string to append in
 *
 * @param src String to copy from
 */
void AppendCString(String *dst, const char *src);



#endif //STRING_H


#endif //PCH_H
