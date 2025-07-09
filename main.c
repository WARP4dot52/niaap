#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]) {
	//checks
	if (argc > 2) { printf("More than 1 args WTFFFF"); return 0; }
	if (argc < 2) { printf("syntax :\n	./%s <file.wav>", argv[0]); return 0; }

	PlaySoundA(argv[1], NULL, SND_FILENAME | SND_ASYNC);
	printf("Playing %s\n", argv[1]);
	char keypress;
	while (1) {
		scanf_s("%c", &keypress, 1);
		if (keypress == 's') {
			PlaySoundA(NULL, NULL, SND_FILENAME);
			return 0;
		}
	};
}