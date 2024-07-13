#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int value;
    int index;
} HashEntry;

typedef struct {
    HashEntry* entries;
    int size;
} HashMap;

void initHashMap(HashMap* map, int size) {
    map->entries = (HashEntry*)malloc(size * sizeof(HashEntry));
    map->size = size;
}

void insert(HashMap* map, int value, int index) {
    int pos = (value % map->size + map->size) % map->size;

    while (map->entries[pos].value != -1) {
        pos = (pos + 1) % map->size;
    }

    map->entries[pos].value = value;
    map->entries[pos].index = index;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashMap map;
    initHashMap(&map, numsSize);

    for (int i = 0; i < numsSize; ++i) {
        int complement = target - nums[i];
        int complementIndex = -1;

        int pos = (complement % map.size + map.size) % map.size;

        while (map.entries[pos].value != -1) {
            if (map.entries[pos].value == complement) {
                complementIndex = map.entries[pos].index;
                break;
            }
            pos = (pos + 1) % map.size;
        }

        if (complementIndex != -1) {
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = complementIndex + 1;
            result[1] = i + 1;
            *returnSize = 2;
            return result;
        }

        insert(&map, nums[i], i);
    }

    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {3, 2, 4};
    int target = 6;
    int returnSize;

    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    if (result != NULL) {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}
