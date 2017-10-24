#include <stdio.h>
#include "ExpressionTree.h"

int main(void)
{
	char exp[] = "12+7*";
	BTreeNode*eTree = MakeExpTree(exp);

	printf("Prefix Expression: ");
	ShowPrefixTypeExp(eTree); printf("\n");

	printf("Infix Expression: ");
	ShowInfixTypeExp(eTree); printf("\n");

	printf("Postfix Expression");
	ShowPostfixTypeExp(eTree); printf("\n");

	printf("연산의 결과: %d\n", EvaluateExpTree(eTree));
	
	system("pause");
	return 0;

	
}