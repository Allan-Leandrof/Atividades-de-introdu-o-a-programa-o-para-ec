#include <stdio.h>
#include <string.h>

void seteZero(const char *operando, char *operandoSem7){

	int i = 0;
	int j = 0;

	while (operando[i]){

		if (operando[i] == '7'){
			operandoSem7[j++] = '0';
		}else{
			operandoSem7[j++] = operando[i];
		}
		i++;
	}
	operandoSem7[j] = '\0';
}

void main (){
    char A[11], B[11], result[1001], aSem7[11], bSem7[11], resultSem7[1001];
	int resulte;
	char operac;

	scanf("%s %c %s", A, &operac, B);

 	seteZero(A, aSem7);
	seteZero(B, bSem7);

	if (operac == '+')
		resulte = atoi(aSem7) + atoi(bSem7);
	else if (operac == 'x')
		resulte = atoi(aSem7) * atoi(bSem7);

	sprintf(result, "%ld", resulte);

	seteZero(result, resultSem7);
	printf("%ld\n", atoi(resultSem7));

    return 0;

}
