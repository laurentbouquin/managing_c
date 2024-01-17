#include <assert.h>

#include "back.c"

int main(void)
{
    //test get_files //!(doesn't work yet)

    //test create_file
    create_file("./data", "report6");
    assert((open("./data/report6") == 0);

    //test delete_file


    //test read_file


    //test search_file


    //test read_file_line


    //test write_file



    return EXIT_SUCCESS;
}