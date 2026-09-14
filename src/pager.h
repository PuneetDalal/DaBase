#pragma once
#include <fstream>
#include <iostream>
#include <unordered_map>
#include <cstdint>
#include <string> 

class pager{
    private:
        static constexpr size_t PAGE_SIZE = 8192;
        std::fstream dbfile;
        std:: unordered_map <uint32_t,uint8_t*> page_cache;
    public:
        pager(const std::string& filename);
        ~pager();
        uint8_t* get_page(uint32_t page_num);
        void flsh_page(uint32_t page_num);
        uint32_t allocate_page();

};