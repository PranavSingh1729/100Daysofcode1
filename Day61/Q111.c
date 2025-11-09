//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[200000];                 // adjust size if needed
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int k;
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) return 0;

    // Deque to store indices of negative numbers in current window
    int dq[200000];
    int front = 0, back = 0;

    int printed = 0;
    for (int i = 0; i < n; i++) {
        // add current index if it's negative
        if (arr[i] < 0) dq[back++] = i;

        // remove indices that fell out of the window [i-k+1 .. i]
        while (front < back && dq[front] <= i - k) front++;

        // once first window is formed, output answer for this window
        if (i >= k - 1) {
            if (printed++) printf(" ");
            if (front < back) printf("%d", arr[dq[front]]);
            else              printf("0");
        }
    }
    printf("\n");
    return 0;
}
