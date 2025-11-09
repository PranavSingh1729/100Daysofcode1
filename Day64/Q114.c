//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100005];

    // Read a full line (including spaces). Remove trailing newline if present.
    if (!fgets(s, sizeof(s), stdin)) return 0;
    size_t len = strlen(s);
    if (len && s[len - 1] == '\n') s[--len] = '\0';

    // For ASCII: store last index seen for each character, init to -1
    int last[256];
    for (int i = 0; i < 256; i++) last[i] = -1;

    int best = 0;        // length of longest substring without repeats
    int start = 0;       // start index of current window

    for (int i = 0; i < (int)len; i++) {
        unsigned char c = (unsigned char)s[i];

        // If we've seen this char inside the current window, move start
        if (last[c] >= start) {
            start = last[c] + 1;
        }

        last[c] = i;                          // update last seen index
        int curLen = i - start + 1;           // current window length
        if (curLen > best) best = curLen;     // update best
    }

    printf("%d\n", best);
    return 0;
}
