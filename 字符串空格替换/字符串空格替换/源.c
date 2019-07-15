#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main(){
	char str[20] = "we are happy!";
	int i = 0;
	int len = strlen(str);
	int count = 0;
	for (i = 0; i<len; i++){
		if (str[i] == ' '){
			count++;
		}
	}
	str[len + 2 * count] = '\0';
	for (i = len - 1; i >= 0; i--){
		if (str[i] != ' '){
			str[i + 2 * count] = str[i];
		}
		else{
			count--;
			str[i + 2 * count] = '%';
			str[i + 2 * count + 1] = '2';
			str[i + 2 * count + 2] = '0';
		}
	}
	printf("%s", str);
	system("pause");
	return 0;
}