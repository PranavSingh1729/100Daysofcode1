//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[100];
    printf("Enter %d positive integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    int found = 0;
    int i_index = -1, j_index = -1;

    // Check all possible pairs (brute-force)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                i_index = i;
                j_index = j;
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (found)
        printf("%d %d\n", i_index, j_index);
    else
        printf("-1 -1\n");

    return 0;
}
