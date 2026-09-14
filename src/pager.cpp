#include "pager.h"
#include<iostream>
pager::pager(const std::string& filename) {    
  dbfile.open (filename,std::ios::in|std::ios::out|std::ios::binary|std::ios::app);
  if (dbfile.is_open())
  {
    std::cout << "Operation successfully performed\n";
  }
  else
  {
    std::cout << "Error opening file";
  }
}
// 2. Destructor
pager::~pager() {
  std::cout << "Freeing memory automatically." << std::endl;
        delete[] &page_cache;
}
uint8_t* pager::get_page(uint32_t page_num) {
    auto it = page_cache.find(page_num);
    if (it != page_cache.end()) {
        return it->second; //returning pointer to cache_map of the pageno. if found in it.
    }
    //not_Found :(
    uint8_t new_page = new uint8_t[PAGE_SIZE];//mem alloc

    page_cache[page_num] = new_page ;// saving to cache
}

void pager::flsh_page(uint32_t page_num) {
    // Flush code
}

uint32_t pager::allocate_page() {
    return 0; // Temporary placeholder
}