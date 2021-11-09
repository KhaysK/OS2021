#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>

int main(){
	FILE *kbd = fopen("/dev/input/by-path/platform-i8042-serio-0-event-kbd", "r");

    if( kbd == NULL ) {
        printf("Couldn't open keyboard device\n");
        return 0;
    }

	struct timeval last = {0, 0};
	while (1){
		struct input_event data;
		fread(&data, sizeof(struct input_event), 1, kbd);

		if (data.type != EV_KEY)
			continue;
		
		printf("\033[1D");
        if (data.value == 0)
			printf("REALEASED 0x%X (%d)\n", data.code, data.code);
		else if (data.value == 1)
			printf("PRESSED 0x%X (%d)\n", data.code, data.code);

		last = data.time;
	}
    return 0;
}