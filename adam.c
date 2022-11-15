#include <stdio.h>
#include <string.h>

int for_implementation(char all_steps[]) {
		int steps_len = strlen(all_steps);
		int steps = 0;
		for (int s = 0; s < steps_len; ++s) {
		if (all_steps[s] == 'D') {
											break;
											} else {
																steps++;
																			}
								}
				return steps;


int while_implementation(char all_steps[]) {
		int steps = 0;
			int s = 0;
				while(all_steps[s]) {
							if (all_steps[s] == 'D') break;
									else steps++;
											s++;
												}
					return steps;
}


int main() {
		int LIMIT = 100;
			char all_steps[LIMIT];
				FILE *adam;
adam = fopen("C:\\Users\\MY COMPUTER\\Documents\\Prog\\src\\adam.in", "r");
	while(fgets(all_steps,LIMIT, adam)) {
									int steps = for_implementation(all_steps);
											printf("%d\n", steps);
												}
							return 0;
}
