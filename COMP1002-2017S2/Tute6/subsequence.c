/* A combined program for perfrming three checks:
1. is_subsequence
2. is_subset
3. is_anagram

See the function definitions for details.
Written by: Unni

Assumptions:
1. Length of substring    : m
2. Length of search string: n

NOTE: The program is an exact implementation of refined version of algorihtms
suggested by students during tutorials. Focus was given on matching their
logic with the code - meaning that the implementation may not be the best! */

#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>

#define ASCII_MAX 256

int is_subsequence(char *sub, char *string);
int is_subset(char *sub, char *string);
int is_anagram(char *s1, char *s2);

int main(int argc, char const *argv[]) {

  assert(is_subsequence("bee", "abbreviate"));
  assert(!is_subsequence("bee", "acerbate")); /* watch out for the ! (NOT) */

  assert(is_subset("bee", "rebel"));
  assert(!is_subset("bee", "break"));

  assert(is_anagram("Algorithms", "Glamor Hits"));

  return 0;
}

/* Returns true if sub is a subsequence of string. "bee" is a subsequence of
"abbreviate". See lecture06 slides for details.
This algorithms runs in linear O(n) time */
int is_subsequence(char *sub, char *string){
  int i, j=0;
  for(i=0; string[i]!= '\0'; i++){
    if(string[i] == sub[j])
      j++;
  }
  if(j == strlen(sub))
    return 1;
  return 0;
}
/* Returns true if sub is subset of string; that is, if string has all the
characters present in sub (considering repeatations).

Logic
------------------------
This implementation uses the concept of hashmaps (or python dictionaries).
lookup[] array has an index for each possible ASCII characters. We scan through
the sub string and increase the value stored at positions corresponding to the
ASCII value of present character. When we scan the string, we decrement them.

Subset check
------------------------
At the end, we perform a scan through lookup[] to see if there are any values
that are greater than 0. Then there was a character in sub string that was
not there in the string. In this case return 0, else return 1.
*/
int is_subset(char *sub, char *string){
  char lookup[ASCII_MAX];
  int i;
  for(i=0; i<ASCII_MAX; i++)
    lookup[i] = 0;
  for(i=0; sub[i]!= '\0'; i++){
    lookup[(int)sub[i]]++;
  }
  for(i=0; string[i]!= '\0'; i++){
    lookup[(int)string[i]]--;
  }
  for(i=0; i< ASCII_MAX; i++){
    if(lookup[i]>0) /* subset check */
      return 0;
  }
  return 1;
}

/* Definition for anagram is taken from lecture06 slides. Follows the same
logic as is_subset, except that at this time, we will be checking if all the
values in lookup[] are 0.
*/
int is_anagram(char *s1, char *s2){
  char lookup[ASCII_MAX];
  int i, pos;

  for(i=0; i<ASCII_MAX; i++)
    lookup[i] = 0;
  for(i=0; s2[i]!= '\0'; i++){
    if(s2[i]!= ' '){
      pos = (int)tolower(s2[i]);
      lookup[pos]++;
    }

  }
  for(i=0; s1[i]!= '\0'; i++){
    if(s1[i]!= ' '){
      pos = (int)tolower(s1[i]);
      lookup[pos]--;
    }

  }

  for(i=0; i< ASCII_MAX; i++){
    if(lookup[i]!=0)
      return 0;
  }
  return 1;
}
