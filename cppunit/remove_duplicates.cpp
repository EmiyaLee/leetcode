#include "gtest/gtest.h"

#include "../leetcode/remove_duplicates.h"

#include <algorithm>

void assign(int32_t * array, uint32_t num, std::vector<int32_t> & v){
    for(size_t i = 0; i < num; i++){
        v.push_back(array[i]);
    }
}

bool compare(const std::vector<int32_t> & check, const std::vector<int32_t> & results){
    size_t size = results.size();
    if (check.size() < size)
    {
        return false;
    }

    for (size_t i = 0; i < size; ++i)
    {
        if (check[i] != results[i]){
            return false;
        }
    }

    return true;
}

TEST(remove_duplicates, empty) {
    remove_duplicates rd;
    std::vector<int32_t> v;
    int32_t a[] = {2,1,1,3,2};
    assign(a, sizeof(a)/sizeof(a[0]), v);

    std::sort(v.begin(), v.end());

    int32_t r[] = {1, 2, 3};
    std::vector<int32_t> result;
    assign(r, sizeof(r)/sizeof(r[0]), result);

    int32_t num = rd.removeDuplicates(v);

	EXPECT_EQ(num, result.size());
    EXPECT_EQ(true, compare(v, result));
}
