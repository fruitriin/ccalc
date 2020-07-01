#include <stdio.h>

int main(){
    int result = 0;
    int tmp = 0;
    char calc = '+';

    while(1){
        puts("数値を入力してください");
        scanf("%d", &tmp);
        switch (calc){
            case '+':
                result += tmp;
                break;
            case '-':
                result -= tmp;
                break;
            case '*':
                result -= tmp;
                break;
            case '/':
                if(tmp == 0){
                    puts("0 Divid error");
                    break;
                }
                result /= tmp;
                break;
            default:
                puts("Error\n");
                break;
        }
        printf("現在値：%d\n", result);

        fflush(stdin);

        int exit_loop = 1;
        while(exit_loop){
            puts("演算子を入力してください");
            scanf("%c", &calc);
            switch(calc){
                case '+':
                case '-':
                case '*':
                case '/':
                    printf("現在の入力：%d %c\n",result, calc);
                    exit_loop = 0;
                    break;
                default:
                    puts("対応していません");
                    break;
            }
        }
    }
}