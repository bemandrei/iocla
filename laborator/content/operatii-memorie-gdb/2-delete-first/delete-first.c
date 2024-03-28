// SPDX-License-Identifier: BSD-3-Clause

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *delete_first(char *s, char *pattern){
	int i = 0, cnt = 0, ans = 0, gasit = 0;
	char *rez= malloc(strlen(s));
	for(i = 0; i < strlen(s); i++){
		int ci = i;
		cnt = 0;
		while(gasit == 0 && ci < strlen(s) && s[ci] == pattern[cnt]){
			cnt++;
			ci++;
			if(cnt == strlen(pattern)){
				gasit = 1;
				i = ci;
				break;
			}
		}
		rez[ans] = s[i];
		ans++;
	}
	return rez;
}

int main(void)
{
	/*
	 * TODO: Este corectă declarația variabilei s în contextul în care o să apelăm
	 * funcția delete_first asupra sa? De ce? Modificați dacă este cazul.
	 */
	char *s = "Ana are mere";
	char *pattern = "re";
	printf("%s\n", delete_first(s, pattern));

	return 0;
}
