#include <stdint.h>

#include <iostream>
#include <vector>


namespace{

    class remove_duplicates{
    public:
        int removeDuplicates(std::vector<int32_t>& nums){
            if (nums.empty()){
                return 0;
            }

            std::vector<int32_t>::iterator iter1, iter2;
            iter2 = iter1 = nums.begin();
            uint32_t cnt = 1;
            iter1++;

            while (iter1 != nums.end()){
                if (*iter1 == *iter2)
                {
                    iter1++;
                }else{
                    *++iter2 = *iter1++;
                    cnt++;
                }
            }
            return cnt;
        }
    };

}