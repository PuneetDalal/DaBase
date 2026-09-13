<!-- using SQLite architecture  as inspiration-->
# will use 4kb disk size 
## features for v1-
    - [] create , delete , select , alter , drop , rename , where 
    - [] dataTypes- int , decimals , char, varchar, text , date, date-time
using uint32 in pager since i want unsigned fixed interger to be read and uint32 range is - "0 to 4,294,967,295"