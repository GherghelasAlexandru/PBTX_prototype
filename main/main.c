#include <stdio.h>


void app_main(void)
{
    Example mymessage ={42};
    uint8_t buffer[10];
    pb_ostream_t stream = pb_ostream_from_buffer(buffer, sizeof(buffer));
    pb_encode(&stream, Example_fields, &mymessage);

}
